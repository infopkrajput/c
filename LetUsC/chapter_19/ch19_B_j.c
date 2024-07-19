/*
Given a text file, write a program to create another text file deleting the words "a", "the", "an" and replace each one of them with a blank space.
*/
#include <stdio.h>
#include <string.h>
int main()
{
    char str[] = "Hi my a name is the robot.";
    char word[] = " is";
    remove_word(str, word);
    printf("%s", str);
    return 0;
}
void remove_word(char *str, char *word)
{
    int i, j, len_word = strlen(word), len_str = strlen(str);

    for (i = 0; i < len_str; i++)
    {
        if (strncmp(str + i, word, len_word) == 0)
        {
            for (j = i; j < len_str - len_word; j++)
            {
                str[j] = str[j + len_word];
            }
            str[j] = ' ';
            len_str -= len_word;
        }
    }
    str[len_str] = '\0';
}