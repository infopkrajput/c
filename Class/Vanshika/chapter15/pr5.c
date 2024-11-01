#include <stdio.h>
#include <string.h>
void strNumberConcatenate(char *s1, char *s2,int n);
int main()
{
    char str1[] = "data1";
    char str2[] = "data2";
    // strncat(str1,str2,3);
    strNumberConcatenate(str1,str2,2);
    puts(str1);
    return 0;
}
void strNumberConcatenate(char *s1, char *s2,int n)
{
    int len1 = strlen(s1);
    for (int i = 0; i < n; i++)
    {
        s1[len1 + i] = s2[i]; 
    }
    s1[len1 + n] = '\0';
}