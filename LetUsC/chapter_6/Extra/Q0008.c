/*
Write a program in C to make such a pattern like a pyramid with numbers increased by 1.
   1 
  2 3 
 4 5 6 
7 8 9 10 
*/
#include<stdio.h>
int main()
{
int i,j,raw,num=1,space,temp;
printf("Enter raw = ");
scanf("%d",&raw);
temp=raw;
for(i=1;i<=raw;i++)
{
    for(space=temp-1;space>=1;space--)
    {
        printf(" ");
        
    }
    for(j=1;j<=i;j++)
    {
        // printf("* ");
       printf("%d ",num);
        num++;
    }
    printf("\n");
    temp--;
}
    return 0;
}