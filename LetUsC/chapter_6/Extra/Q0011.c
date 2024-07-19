/*
Write a program in C to display the n terms of even natural number and their sum.
Input number of terms : 5
Expected Output :
The even numbers are :2 4 6 8 10
The Sum of even Natural Number upto 5 terms : 30
*/
#include<stdio.h>
int main()
{
    int i,num,even=0;
    printf("Enter the term = ");
    scanf("%d",&num);
    for(i=1;i<=num;i++)
    {
        if(i%2==0)
        {
            printf("%d ",i);
            even=even+i;
        }
    }
    printf("\nSum of all even numbers = %d ",even);
    return 0;
}