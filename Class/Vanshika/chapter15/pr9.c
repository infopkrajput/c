#include <stdio.h>
#include <string.h>
int strCompareIgnoreCase(char *s1, char *s2);
int main()
{
    char str1[] = "data0";
    char str2[] = "DaTA0";
    if (strCompareIgnoreCase(str1, str2) == 0)
    {
        printf("Both strings are same.");
    }
    else
    {
        printf("Both strings are not same.");
    }
    return 0;
}
int strCompareIgnoreCase(char *s1, char *s2)
{
    char *ts1,*ts2;
    ts1 = s1;
    ts2 = s2;
    // Convert string 1 to lower case
    // strlwr(s1); // aslo use inbuilt function

    while (*ts1 != '\0')
    {
        if (*ts1 >= 65 && *ts1 <= 90)
        {
            *ts1 = *ts1 + 32;
        }
        ts1++;
    }

    // Convert string 2 to lower case
    // strlwr(s2); // aslo use inbuilt function

    while (*ts2 != '\0')
    {
        if (*ts2 >= 65 && *ts2 <= 90)
        {
            *ts2 = *ts2 + 32;
        }
        ts2++;
    }
    int x;
    while ((strlen(s1) > strlen(s2) ? *s1 : *s2) != '\0')
    {
        // comparing each character of s1 to s2
        if (*s1 == *s2)
        {
            s1++;
            s2++;
        }
        else
        {
            // if any character not match with another string
            x = *s1 - *s2;
            if (x > 0)
            {
                // convert the positive difference value to positive 1
                return 1;
            }
            else
            {
                // convert the negative difference value to negative 1
                return -1;
            }
        }
    }
    return 0;
}