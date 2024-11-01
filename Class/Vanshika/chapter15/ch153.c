#include <stdio.h>
#include <string.h>
int main()
{
    char c[50];
    char a[50] = "A";
    char b[50] = "B";
    for(int i = 0 ;i <5;i++)
    {
        strcpy(c,b);
        strcat(c,a);
        puts(c);
        strcpy(a,b);
        strcpy(b,c);
    }
    return 0;
}