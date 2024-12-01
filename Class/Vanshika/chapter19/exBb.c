#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
int main()
{
    FILE *fs, *ft;
    char ch;
    fs = fopen("source.txt", "r");
    if (fs == NULL)
    {
        printf("Error opening source file\n");
        exit(1);
    }
    ft = fopen("target.txt", "w");
    if (ft == NULL)
    {
        printf("Error opening target file\n");
        fclose(fs);
        exit(2);
    }
    while (1)
    {
        ch = fgetc(fs);
        if (ch == EOF)
        {
            break;
        }
        else
        {
            if (ch > 96 && ch < 123)
            {
                ch = toupper(ch);
            }
            fputc(ch, ft);
        }
    }
    fclose(fs);
    fclose(ft);
    printf("File copied successfully\n");
    return 0;
}