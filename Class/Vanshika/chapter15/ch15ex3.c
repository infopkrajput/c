#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    char cc[17];
    printf("Enter the credit card number : ");
    scanf("%s", cc);
    int sum = 0;
    for (int i = 0; i < 16; i++)
    {
        if (i % 2 == 0)
        {
            sum += (((cc[i] - '0') * 2) > 9) ? ((cc[i] - '0') * 2) - 9 : ((cc[i] - '0') * 2);
        }
        else
        {
            sum += cc[i] - '0';
        }
    }
    if (sum % 10 == 0)
    {
        printf("The credit card number is valid ");
    }
    else
    {
        printf("The credit card number is not valid ");
    }

    return 0;
}