/*
Write a program to encrypt / decrypt file using substituion cipher : in this cipher for each character read from the source file a corresponding predetermined character is written to the target file.
For example : if character 'A' is read from the source file, then a '!' would be written to the target file. similarly, every 'B' would be substituted by '5' and so on.
*/
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
int main()
{
    FILE *p, *q;
    char filename[50], str[200], ch;
    int option;
    char cipher[26] = "zxcvbnmlkjhgfdsaqwertyuiop";
    printf("Enter the file name : ");
    gets(filename);
    while (1)
    {
        printf("\n1. Write a fresh file.\n");
        printf("2. Encrypt File.\n");
        printf("3. Decrypt File.\n");
        printf("4. Read File.\n");
        printf("5. Exit File.\n");
        printf("==> ");
        scanf("%d", &option);
        switch (option)
        {
        case 1:
            getchar();
            p = fopen(filename, "w");
            while (strlen(gets(str)) > 0)
            {
                fputs(str, p);
                fputs("\n", p);
            }
            fclose(p);
            break;
        case 2:
            p = fopen(filename, "r");
            q = fopen("temp", "w");
            while (1)
            {
                ch = fgetc(p);
                if (ch == EOF)
                    break;
                if (isalpha(ch))
                {
                    ch = tolower(ch);
                    ch = cipher[ch - 'a'];
                    fputc(ch, q);
                }
                else
                {
                    fputc(ch, q);
                }
            }
            fclose(p);
            fclose(q);
            p = fopen(filename, "w");
            q = fopen("temp", "r");
            while (1)
            {
                ch = fgetc(q);
                if (ch == EOF)
                    break;
                fputc(ch, p);
            }
            fclose(p);
            fclose(q);
            remove("temp");
            break;
        case 3:
            p = fopen(filename, "r");
            q = fopen("temp", "w");
            while (1)
            {
                ch = fgetc(p);
                if(ch==EOF)
                break;
                if (isalpha(ch))
                {
                    for (int i = 0; i < 26; i++)
                    {
                        if (ch == cipher[i])
                        {
                            fputc('a' + i, q);
                            break;
                        }
                    }
                }
                else
                {
                    fputc(ch, q);
                }
            }
            fclose(p);
            fclose(q);
            p = fopen(filename, "w");
            q = fopen("temp", "r");
            while (1)
            {
                ch = fgetc(q);
                if (ch == EOF)
                    break;
                fputc(ch, p);
            }
            fclose(p);
            fclose(q);
            remove("temp");
            break;
        case 4:
            p = fopen(filename, "r");
            while (fgets(str, sizeof(str), p) != NULL)
            {
                printf("%s", str);
            }
            fclose(p);
            break;
        case 5:
            exit(1);
            break;
        }
    }
    return 0;
}