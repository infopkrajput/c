#include <stdio.h>
#include <string.h>
int main()
{
    char str[11];
    printf("Enter the ISBn Number : ");
    scanf("%s", &str);
    int i = 0;
    int mult = 10, digit, sum = 0;
    for (int i = 0; i < 10; i++)
    {
        if (str[i] == 'x' || str[i] == 'X')
        {
            digit = 10;
            sum += digit * mult;
        }
        else
        {
            digit = str[i] - 48;
            sum = sum + mult * digit;
        }
        mult--;
    }
    printf("Sum = %d\n", sum);
    if (sum % 11 == 0)
    {
        printf("valid ISBN\n");
    }
    else
    {
        printf("invalid ISBN\n");
    }
    return 0;
}