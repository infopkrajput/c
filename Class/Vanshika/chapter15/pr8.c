#include <stdio.h>
#include <string.h>
int strNumberCompare(char *s1, char *s2, int n);
int main()
{
    char str1[] = "Data0";
    char str2[] = "Data0hy";
    printf("%d\n", strNumberCompare(str1, str2,5));
    if (strNumberCompare(str1, str2, 5) == 0)
    {
        printf("Both strings are same.");
    }
    else
    {
        printf("Both strings are not same.");
    }
    return 0;
}

int strNumberCompare(char *s1, char *s2, int n)
{

    int x;
    for (int i = 0; i < n; i++)
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