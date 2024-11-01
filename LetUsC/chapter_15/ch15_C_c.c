/*
    A credit card number is usually a 16-digit number.A valid credit card number would satisfy a rule explained below with the help of a dummy Credit card number-4567 1234 5678 9129. Start with the rightmost -1 digit and multiply every other digit by 2.
    0 1 2 3  4 5 6 7  8 9 10 11 12131415
    4 5 6 7  1 2 3 4  5 6 7 8   9 1 2 9
    8   12   2   6    10  14    18  4
    then subtract 9 from numbers that are larger than 10. thus we get:
    8 3 2 6 1 5 9 4
    Add them all up to get 38.
    Add all the other digits (5,7,2,4,6,8,1,9) to get 42.
    sum of 38 and 42 is 80. since 80 is divisible by 10, the credit card no. is valid.
    Write a program that receives a credit card no and checks using the above rule whether the credit card no. is valid.
*/
#include <stdio.h>
int main()
{
    char str[17];
    printf("Enter the credit card no. : ");
    scanf("%s", str);
    int sum = 0, sum2 = 0, i, digit;
    for (i = 15; i >= 0; i--)
    {
        if (i % 2 == 0)
        {
            digit = str[i] - '0';
            digit = digit * 2;     
            if (digit > 9)
            {
                digit = digit - 9;
            }
            sum = sum + digit;
        }
        else
        {
            digit = str[i] - 48;
            sum2 = sum2 + digit; 
        }
    }
    // printf("Sum = %d",sum);
    // printf("Sum2 = %d",sum2);
    if ((sum + sum2) % 10 == 0)
    {
        printf("Credit card no. is valid!");
    }
    else
    {
        printf("Credit card no. is invalid!");
    }
    return 0;
}