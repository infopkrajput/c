/*
Write a program in C to make such a pattern like a pyramid with a number which will repeat the number in the same row. 
   1
  2 2
 3 3 3
4 4 4 4
*/
#include<stdio.h>
int main()
{
    int i,num=1,n,j,space,raw;
    printf("Enter the raws  = ");
    scanf("%d",&raw);
    n=raw;
    for(i=1;i<=raw;i++)
    {   
        for(space=n;space>=1;space--)
        {
            printf(" ");
        }
        n--;
        for(j=1;j<=i;j++)
        {
            printf("%d ",num);
        }
        printf("\n");
        num++;  
    }
    return 0;
}