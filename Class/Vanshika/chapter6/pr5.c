// Chapter 6 h
#include<stdio.h>
int main()
{
    int i;
    for(i=1;i<=24;i++)
    {
        if(i<12)
        {
            printf("%d:00 AM\n",i);
        }
        else if(i == 12)
        {
            printf("%d:00 PM\n",i);
        }
        else if(i < 24)
        {
            printf("%d:00 PM\n",i-12);
        }
        else if(i == 24)
        {
            printf("%d:00 AM\n",i-12);
        }
    }
    return 0;
}