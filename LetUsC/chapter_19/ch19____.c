#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    FILE *fs, *ft;
    char source[67], target[67], str[80];
    char ch;
    puts("Enter source file name: ");
    gets(source);
    puts("Enter targets file name: ");
    gets(target);
    fs = fopen(source, "r");
    if (fs == NULL)
    {
        puts("Unable to open source file.");
        exit(0);
    }
    ft = fopen(target, "a");
    if (ft == NULL)
    {
        fclose(fs);
        puts("Unable to open the file.");
    }
    while (fgets(str, 79, fs) != NULL)
        fputs(str, ft);
    // while(1)
    // {
    //     ch = fgetc(fs);
    //     if(ch==EOF)
    //     break;
    //     fputc(ch,ft);
    // }
    printf("Appending file completed!!");
    fclose(fs);
    fclose(ft);
    return 0;
}

