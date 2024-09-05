#include<stdio.h>
int main()
{
    int a ,b ,c;
    char ch='y', condition;
    while(ch == 'y')
    {
        printf("Enter the value of a : ");
        scanf("%d",&a);
        printf("Enter the value of b : ");
        scanf("%d",&b);
        printf("What to you want to do : ");
        scanf(" %c",&condition);
        if(condition == '+')
        {
            c = a + b;
            printf("Addition of %d and %d is : %d\n",a,b,c);
        }
        if(condition == '-')
        {
            c = a - b;
            printf("Subtraction of %d and %d is : %d\n",a,b,c);
        }
        if(condition == '*')
        {
            c = a * b;
            printf("Multiplication of %d and %d is : %d\n",a,b,c);
        }
        if(condition == '/')
        {
            c = a / b;
            printf("Division of %d and %d is : %d",a,b,c);
        }
        printf("Do you want to check more : ");
        scanf(" %c",&ch);
        
    }
    return 0;
}