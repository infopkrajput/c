/*
Write a program to delete al vowels from a sentence. Assume that the sentence is not more than 80 character long.
*/
#include <stdio.h>
#include <string.h>
int main()
{
    char str[ ] = "Oh, and yes, you can effortlessly use these tools without typing co";
    printf("Original string: \n%s\n", str);
    int i, j = 0, len;
    len = strlen(str);
    for (i = 0; i < len; i++)
    {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u'||str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U')
        {
            for (j = i; j < len - 1; j++)
            {
                str[j] = str[j+1];
            }
            len--;
        }
    }
    str[j]='\0';
    printf("String without vowels: \n%s\n", str);

    return 0;
}
