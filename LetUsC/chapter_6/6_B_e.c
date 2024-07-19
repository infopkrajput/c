/*
Write a program to generate all Pythagorean Triplets with side length less than or equal to 30.
*/
#include<stdio.h>
int main()
{
    int l,b,h,i;
    for(l=1;l<=30;l++)
    {
        for(b=1;b<=30;b++)
        {
            for(h=1;h<=30;h++)
            {   
                
                if(h*h==(l*l)+(b*b))
                printf("(%d,%d,%d)\n",h,l,b);
                
            }
        }
    }
    return 0;
}