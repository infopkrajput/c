#include <stdio.h>
#include <string.h>
int main()
{
    FILE *fp;
    char str[100];
    fp = fopen("target.txt", "w");
    printf("Enter text to be written to the file: ");
    while (strlen(gets(str)) > 0)
    {
        fputs(str, fp);
        fputc('\n', fp);
    }
    fclose(fp);
    fp = fopen("target.txt", "r");
    while (1)
    {
        fgets(str, sizeof(str), fp);
        if (feof(fp))
            break;
        printf("%s", str);
    }
    fclose(fp);
    return 0;
}