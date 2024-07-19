/*
Given a text file, write a program to create another text file deleting the words "a", "the", "an" and replace each one of them with a blank space.
*/
#include <stdio.h>
#include <string.h>
int main()
{
    char str[] = "Hi my a name is the robot.";
    char word[] = "is";
    char new_word[] = "are";
    remove_word(str, word,new_word);
    printf("%s", str);
    return 0;
}
void remove_word(char *str, char *word, char *new_word)
{
    int i, j, len_word = strlen(word), len_str = strlen(str), len_new_wod = strlen(new_word);
    int big,k=0;
    big = len_word > len_new_wod ? len_word : len_new_wod;
    for (i = 0; i < len_str; i++)
    {
        if (strncmp(str + i, word, len_word) == 0)
        {
            if (len_word > len_new_wod)
            {
                // old_w = is new_w = are
                // 26 - 2 = 24 +3 = 27
                for (j = i; j < len_str - len_word + len_new_wod; j++)
                {
                    str[j + len_word] = str[j];
                    str[j] = new_word[k];
                    k++;
                }
            }
            else
            {
            }
        }
    }
    str[len_str] = '\0';
}