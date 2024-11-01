#include <stdio.h>
#include <string.h>
void strConcatenate(char *s1, char *s2);
int main()
{
    char str1[] = "data1";
    char str2[] = "data2";
    strConcatenate(str1, str2);
    puts(str1);
    return 0;
}
void strConcatenate(char *s1, char *s2)
{
    int len1 = strlen(s1);
    for (int i = 0; i < strlen(s2); i++)
    {
        s1[len1 + i] = s2[i]; // Append s2 at the end of s1
    }
    s1[len1 + strlen(s2)] = '\0';
}