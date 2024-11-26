#include <stdio.h>
#include <stdlib.h>
int main()
{
    FILE *ft;
    char str[100];
    char ch;
    ft = fopen("target.txt", "w");
    if (ft == NULL)
    {
        printf("Error opening target file\n");
        exit(2);
    }
    while (1)
    {

        printf("Enter the string to be copied: ");
        scanf("%[^\n]s", &str);
        int i = 0;
        while (str[i] != '\0')
        {
            fputc(str[i], ft);
            i++;
        }
        fputc('\n', ft);
        printf("Do you want to copy another string? (Y/N): ");
        scanf(" %c", &ch);
        if (ch == 'N' || ch == 'n')
        {
            break;
        }
        printf("File copied successfully\n");
        getchar();
    }

    fclose(ft);
    return 0;
}