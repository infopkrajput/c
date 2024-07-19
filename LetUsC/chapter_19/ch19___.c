/*
Create a app to store data and rewrite it and read it.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    FILE *fr, *fw;
    char ch;
    char str[80];
    int option;
    while (1)
    {
        printf("Choose any option:\n");
        printf("1. Write data in file\n");
        printf("2. Read data from file\n");
        printf("3. Exit Program\n");
        printf("--> ");
        scanf("%d", &option);
        getchar();
        switch (option)
        {
        case 1:
            fw = fopen("sample.txt","w");
            if (fw == NULL)
            {
                perror("Error opening file");
                exit(1);
            }
            printf("Enter data : \n");
            while (strlen(gets(str)) > 0)
            {
                fputs(str, fw);
                fputs("\n", fw);
            }
            fclose(fw);
            break;
        case 2:
            fr = fopen("sample.txt", "r");
            if (fr == NULL)
            {
                printf("This file is empty!\nPlease fill data first.\n");
                exit(2);
            }
            while ((ch = fgetc(fr)) != EOF)
            {
                printf("%c", ch);
            }
            printf("\n\n");
            fclose(fr);
            break;
        case 3:
            exit(3);
        }
    }
    return 0;
}
