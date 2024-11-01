#include <stdio.h>
#include <string.h>
void strNumberCopy(char *s2, char *s1, int n);
int main()
{
    char str1[] = "data1";
    char str2[10];
    // strncpy(str2,str1,4);
    strNumberCopy(str2, str1, 4);
    puts(str2);
    return 0;
}
void strNumberCopy(char *s2, char *s1, int n)
{
    for (int i = 0; i < n; i++)
    {
        *s2 = *s1;
        s1++;
        s2++;
    }
    *s2 = '\0';
}