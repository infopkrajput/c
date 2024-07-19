/*
Write a program to encrypt / decrypt file using offset cipher: In this cipher each character from the source file is offset with a fixed value and then return to target file. 
For example, if character read from the source file is 'A', then write a character represented by 'A' + 128 to the target file.
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    FILE *p, *q;
    char filename[50], str[200], ch;
    int option;
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
                ch = ch + 128;
                fputc(ch, q);
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
            printf("Encryption Successful. \n");
            break;
        case 3:
            p = fopen(filename, "r");
            q = fopen("temp", "w");
            while (1)
            {
                ch = fgetc(p);
                if (ch == EOF)
                    break;
                ch = ch - 128;
                fputc(ch, q);
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
            printf("Decryption Successful. \n");
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