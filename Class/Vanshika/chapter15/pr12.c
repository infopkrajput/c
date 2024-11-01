#include <stdio.h>
#include <string.h>
char *strRightCharaterFind(char *s, char ch);
int main()
{
    char str[] = "Hello, World!";
    char x = 'l';
    char *result;
    result = strRightCharaterFind(str, x);
    printf("result = %ld\n", result);
    printf("str = %ld\n", str);
    printf("Character found at position: %ld\n", result - str);
    return 0;
}
char *strRightCharaterFind(char *s, char ch)
{
    int n = strlen(s);
    for (int i = n; i >= 0; i--)
    {
        if (*(s + i) == ch)
        {
            return (s + i);
        }
    }
}