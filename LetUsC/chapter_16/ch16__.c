/*
Write a program to alphabetically sort a set of names stored using an array of pointer to string.
*/
#include<stdio.h>
#include<string.h>
int main()
{
    char *all[] = {"Raj","Akash","Suraj","Mohit","Shaurya"};
    char *t;
    int i,j,size;
    size = sizeof(all)/sizeof(all[0]);
    for(i=0;i<size;i++)
    {
        for(j=i+1;j<size;j++)
        {
            if(strcmp(all[i],all[j])>0)
            {
                t = all[i];
                all[i] = all[j];
                all[j] = t; 
            }   
        }
    }
    for(i=0;i<size;i++)
    {
        printf("%s\n",all[i]);
    }

    return 0;
}