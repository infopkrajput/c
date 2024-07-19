/*
Write a program in C to make such a pattern like right angle triangle with number increased by 1.
The pattern like :
1
2 3
4 5 6
7 8 9 10
*/
#include<stdio.h>
int main()
{
int i,j,raw,num=1;
printf("Enter raw = ");
scanf("%d",&raw);
for(i=1;i<=raw;i++)
{
    for(j=1;j<=i;j++)
    {
        printf("%d ",num);
        num++;
    }
    printf("\n");
}
    return 0;
}