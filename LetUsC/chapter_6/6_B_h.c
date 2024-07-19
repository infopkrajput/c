/*
write a program to print 24 hours of day with suitable suffixes like AM, PM, Noon and Midnight.
*/
#include<stdio.h>
int main()
{
    int i;
    for(i=0;i<=23;i++)
    {
        if(i==0)
        {
            printf("12 Midnight\n");
            continue;
        }   
        if(i<12)
        printf("%d AM\n",i);
        if(i==12)
        printf("12 Noon\n");
        if(i>12)
        printf("%d PM\n",i-12);
    }

    return 0;

}