/* Write a program that convert a string like "124" to an integer 124. */
#include <stdio.h>
#include <string.h>
int main()
{
    char str[20];
    int x = 0, i, k;
    printf("Enter the string : ");
    scanf("%s", str);
    i = strlen(str) - 1;
    char *ch;
    ch = str;
    while (*ch != '\0')
    {
        if (*ch > 47 && *ch < 58)
        {
            k = *ch - 48;
            x = x + k * pow(10, i);
            ch++;
            i--;
        }
        else
        {
            printf("Please Enter a valid string!");
            goto ex1;
        }
    }
    printf("Number is %d", x);
ex1:
    return 0;
}