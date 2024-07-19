/*
Write a program in C to display the pattern like right angle triangle with a number.
The pattern like :
1
12
123
1234
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
        printf("%d",j);
    }
    printf("\n");
}
    return 0;
}