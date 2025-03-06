#include <stdio.h>
int main()
{
    char ch;
    FILE *f;
    f = fopen("sample.txt", "r");
    while (1)
    {
        ch = fgetc(f);
        if(ch == EOF)
        {
            break;
        }
        printf("%c",ch);
    } 
    fclose(f);
    return 0;
}