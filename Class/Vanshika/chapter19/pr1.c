#include <stdio.h>
int main()
{
    FILE *f;
    char ch;
    f = fopen("ex5.c", "r");
    if (f == NULL)
    {
        printf("Error opening file\n");
        return 1;
    }
    while (1)
    {
        ch = fgetc(f);
        printf("%c", ch);
        if (ch == EOF)
            break;
    }
    fclose(f);
    return 0;
}