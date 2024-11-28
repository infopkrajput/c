#include <stdio.h>
int main()
{
    char str[100];
    char ch;
    FILE *f;
    f = fopen("sample.txt", "wb");
    printf("Enter a string: ");
    gets(str);
    fwrite(str, sizeof(str), 1, f);
    fclose(f);
    return 0;
}