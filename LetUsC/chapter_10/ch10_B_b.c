/* Write a recursive function to obtain the sum of first 25 natural numbers. */
#include<stdio.h>
int add(int);
int main()
{
    int total,a=0; 
    total = add(a);
    printf("Total = %d",total);
    return 0;
}
int add(int n)
{
    int sum = 0;
    if(n==25)
    return (sum);
    else
    sum = n + add(++n);
    return (sum);
}