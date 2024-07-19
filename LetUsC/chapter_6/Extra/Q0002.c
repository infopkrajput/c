/*
Write a program in C to read 10 numbers from keyboard and find their sum and average.
Test Data :
Input the 10 numbers : 1 2 3 4 5 6 7 8 9 10
Expected Output :
The sum of 10 no is : 55
The Average is : 5.500000
*/
#include<stdio.h>
int main()
{
    int i;
    float avg,sum,num;
    for(i=1,sum=0;i<=10;i++)
    {
        printf("Enter the number %d = ",i);
        scanf("%f",&num);
        sum=sum+num;
    }
    printf("Sum of all Entered numbers = %.2f\n",sum);
    avg=sum/10;
    printf("Average Of all Entered Numbers = %.2f\n",avg);
    return 0;
}