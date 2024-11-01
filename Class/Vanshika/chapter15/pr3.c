#include <stdio.h>
#include <string.h>
void strLower(char *s);
void strUpper(char *s);
int main()
{
    char str[] = "MY dAtA";
    // strlwr(str);
    // strLower(str);
    strUpper(str);
    printf("%s", str);
    return 0;
}
void strUpper(char *s)
{
     while (*s != '\0')
    {
        if (*s >= 97 && *s <= 122)
        {
            *s = *s - 32;
        }
        s++;
    }
}
void strLower(char *s)
{
    while (*s != '\0')
    {
        if (*s >= 65 && *s <= 90)
        {
            *s = *s + 32;
        }
        s++;
    }
}