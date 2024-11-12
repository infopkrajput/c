#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char *one[] = {" ", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine", "Ten", "Eleven", "Twelve", "Thirteen", "Fourteen", "Fifteen", "Sixteen", "Seventeen", "Eighteen", "Nineteen"};
char *ten[] = {"", "", "Twenty", "Thirty", "Forty", "Fifty", "Sixty", "Seventy", "Eighty", "Ninety"};
int main()
{
    int num, temp;
    printf("Enter the number : ");
    scanf("%d", &num); 
    if (num / 10000000 != 0)
    {
        temp = num;
        temp = temp / 10000000; 
        if (temp > 19)
        {
            printf("%s %s ", ten[temp / 10], one[temp % 10]);
        }
        else
        {
            printf("%s ", one[temp]);
        }
        printf("Crores ");
    }
    num = num % 10000000;
    if (num / 100000 != 0)
    {
        temp = num;
        temp = temp / 100000; 
        if (temp > 19)
        {
            printf("%s %s ", ten[temp / 10], one[temp % 10]);
        }
        else
        {
            printf("%s ", one[temp]);
        }
        printf("lakhs ");
    }
    num = num % 100000;
    if (num / 1000 != 0)
    {
        temp = num;
        temp = temp / 1000; 
        if (temp > 19)
        {
            printf("%s %s ", ten[temp / 10], one[temp % 10]);
        }
        else
        {
            printf("%s ", one[temp]);
        }
        printf("Thousand ");
    }
    num = num % 1000; 
    if (num / 100 != 0)
    {
        temp = num;  
        temp = temp / 100; 
        if (temp > 19)
        {
            printf("%s %s ", ten[temp / 10], one[temp % 10]);
        }
        else
        {
            printf("%s ", one[temp]);
        }
        printf("Hundred ");
    }
    num = num % 100;
    if (num != 0)
    {
        temp = num;
        if (temp > 19)
        {
            printf("%s %s ", ten[temp / 10], one[temp % 10]);
        }
        else
        {
            printf("%s ", one[temp]);
        }
    }
    return 0;
}