#include <stdio.h>
#include <string.h>
int strCompare(char *s1, char *s2);
int main()
{
    char str1[] = "Data0";
    char str2[] = "Data0hy";
    printf("%d\n", strCompare(str1, str2));
    if (strCompare(str1, str2) == 0)
    {
        printf("Both strings are same.");
    }
    else
    {
        printf("Both strings are not same.");
    }
    return 0;
}

int strCompare(char *s1, char *s2)
{

    int x;
    while ((strlen(s1) > strlen(s2) ? *s1 : *s2) != '\0')
    {
        if (*s1 == *s2)
        {
            s1++;
            s2++;
        }
        else
        {
            x = *s1 - *s2;
            if (x > 0)
            {
                return 1;
            }
            else
            {
                return -1;
            }
        }
    }
    return 0;
}