#include <stdio.h>
#include <string.h>
int strlenByMe(char *s);
int main()
{
    char str[] = "My data";
    // gets(str);
    int x = strlenByMe(str);
    printf("Length of string : %d", x);
    return 0;
}
int strlenByMe(char *s)
{
    int x = 0;
    while (*s != '\0')
    {
        x++;
        s++;
    }
    return x;
}