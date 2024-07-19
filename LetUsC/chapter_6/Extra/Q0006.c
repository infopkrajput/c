/*
Write a program in C to make such a pattern like right angle triangle with a number which will repeat a number in a row.
The pattern like :
 1
 22
 333
 4444
*/
#include<stdio.h>
int main()
{
int i,j,raw;
printf("Enter raw = ");
scanf("%d",&raw);
for(i=1;i<=raw;i++)
{
    for(j=1;j<=i;j++)
    {
        printf("%d",i);
    }
    printf("\n");
}
    return 0;
}