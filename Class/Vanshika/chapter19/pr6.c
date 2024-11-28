#include <stdio.h>
int main(int argc, char *argv[])
{
    FILE *f;
    char ch;
    f = fopen(argv[1], "r");
    if(f==NULL)
    {
        printf("File not found in this directory!\n");
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