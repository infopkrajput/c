/*
Write a C program to calculate the factorial of a given number.
Input the number : 5
Expected Output :
The Factorial of 5 is: 120
*/
#include <stdio.h>
    int main()
{
    int num,i,fact;
    printf("Enter the number = ");
    scanf("%d",&num);
    fact=1;
    for(i=1;i<=num;i++)
    {
        fact=fact*i;
    }
    printf("%d\n",fact);
    return 0;
}