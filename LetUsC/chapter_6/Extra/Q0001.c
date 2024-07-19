/* Write a program in C to display n terms of natural number and their sum 
Test Data : 7
Expected Output :
The first 7 natural number is :
1 2 3 4 5 6 7
The Sum of Natural Number upto 7 terms : 28
 */
#include<stdio.h>
int main()
{
    int n,i,sum;
    printf("Enter the number = ");
    scanf("%d",&n);
    printf("All natural numbers = ");
    for(i=1,sum=0;i<=n;i++)
    {
        sum=sum+i;
        printf(" %d",i);
    }
    printf("\nSum of all natural numbers = %d\n",sum);
    return 0;
}