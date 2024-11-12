#include <stdio.h>
#include <string.h>
void deleteWord(char str[], char word[]);
int main()
{
    char str[] = "This is my data that is good for myself for better writing.";
    char word[] = "better";
    deleteWord(str, word);
    printf("Modified string: %s\n", str);
    return 0;
}
void deleteWord(char str[], char word[])
{
    char *p;
    p = strstr(str, word);
    if (p != NULL)
    {

        for (int i = p - str; i < strlen(str); i++)
        {
            str[i] = str[i + strlen(word)+1];
        }
    }
    else
    {
        printf("Word not found in the string.\n");
    }
}