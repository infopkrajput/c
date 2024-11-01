#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void shrinkString(char *s, int p, int n, char *part);
void fun();
int main()
{
    char str[20], part[20];
    int p, n;
    printf("Enter the String : ");
    gets(str);
    printf("Enter the index from you want to extract part : ");
    scanf("%d", &p);
    printf("Enter the number of character you want to extract : ");
    scanf("%d", &n);
    shrinkString(str, p, n, part);
    puts(part);
    return 0;
}
void shrinkString(char *s, int p, int n, char *part)
{
    if (p < 0 || p > strlen(s))
    {
        printf("Enter correct position!");
        return;
    }
    if (n < 0)
    {
        n = 0;
    }
    if (n > strlen(s))
    {
        n = n - strlen(s) - 1;
    }
    int count = 0;
    for (int i = p; i <= n + p; i++)
    {
        *(part + count) = *(s + i);
        count++;
    }
    *(part + count) = '\0';
}
