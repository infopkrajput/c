/*
Write a program in C to display the n terms of harmonic series and their sum.
1 + 1/2 + 1/3 + 1/4 + 1/5 ... 1/n terms
Test Data :
Input the number of terms : 5
Expected Output :
1/1 + 1/2 + 1/3 + 1/4 + 1/5 +
Sum of Series upto 5 terms : 2.283334
*/
#include<stdio.h>
int main()
{
    float i,n,sum=0;
    printf("Enter the term = ");
    scanf("%f",&n);
    for(i=1;i<=n;i++)
    {
        sum=sum+1/i;
    }
    printf("Sum of the term = %f",sum);
    return 0;
}