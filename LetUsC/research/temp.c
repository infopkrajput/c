#include <stdio.h>
#include <string.h>

int isBinary(char *str)
{
    for (int i = 0; i < strlen(str); i++)
    {
        if (str[i] != '0' && str[i] != '1')
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    char str[] = "11";
    printf("%d", isBinary(str));
    return 0;
}