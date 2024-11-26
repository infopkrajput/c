#include <stdio.h>
#include <stdlib.h>
int main()
{
    FILE *fs,*ft;
    char ch;
    fs = fopen("source.txt", "r");
    if(fs == NULL)
    {
        printf("Error opening source file\n");
        exit(1);
    }
    ft = fopen("target.txt", "w");
    if(ft == NULL)
    {
        printf("Error opening target file\n");
        fclose(fs);
        exit(2);
    }
    while(1)
    {
        ch = fgetc(fs);
        if(ch == EOF)
        {
            break;
        }
        else
        {
            fputc(ch,ft);
        }
    }
    fclose(fs);
    fclose(ft);
    printf("File copied successfully\n");
    return 0;
}