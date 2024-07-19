/* Write a program to enter numbers till the user wants. At the end it should display the count of positive, negative, and zeros entered. */
#include<stdio.h>
int main()
{
    int i=1,num,zero = 0,positive = 0,negative = 0;
    char ch;
    while(i!=0)
    {
        printf("Enter The Number : ");
        scanf("%d",&num);
        if(num>0)
        positive++;
        if(num<0)
        negative++;
        if(num==0)
        zero++;
        getchar();
        printf("Do you want to enter more number : ");
        scanf("%c",&ch);
        if(ch=='y' || ch=='Y')
        i=1;
        else
        i=0;
    }
    printf("Positive = %d\nNegative = %d\nZero = %d\n",positive,negative,zero);
    return 0;
}