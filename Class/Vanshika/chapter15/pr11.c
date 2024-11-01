#include <stdio.h>
#include <string.h>
char * strCharaterFind(char *s,char ch);
int main()
{
    char str[] = "Hello, World!";
    char x = 'o';
    char *result;
    result = strCharaterFind(str, x);
    printf("result = %ld\n",result);
    printf("str = %ld\n",str);
    printf("Character found at position: %ld\n", result - str);
    return 0;
}
char * strCharaterFind(char *s,char ch)
{
    while (*s != '\0')
    {
        if(*s == ch)
        {
            return s;
        }
        s++;
    }
}