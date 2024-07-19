/*
Write a program in C to display the pattern like right angle triangle using an asterisk.
The pattern like :
*
**
***
****
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
        printf("go");
    }
    printf("\n");
}
    return 0;
}