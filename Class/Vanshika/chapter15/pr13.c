#include <stdio.h>
#include <string.h>
void strReverse(char *s);
int main()
{
    char str[] = "Hello World!";
    strReverse(str);
    puts(str);
    return 0;
}

void strReverse(char *s)
{
    char t;
    int n = strlen(s);
    for (int i = 0; i < n / 2; i++)
    {
        t = s[i];
        s[i] = s[n - 1 - i];
        s[n - 1 - i] = t;
    }
}