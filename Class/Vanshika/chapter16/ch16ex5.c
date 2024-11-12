#include <stdio.h>
#include <string.h>
int main()
{
    char str[] = "Please read this application and give me gratuity";
    int count = 0;
    for (int i = 0; i < strlen(str); i++)
    {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
        {
            if (str[i + 1] == 'a' || str[i + 1] == 'e' || str[i + 1] == 'i' || str[i + 1] == 'o' || str[i + 1] == 'u')
            {
                count++;
                printf("%c%c ", str[i], str[i + 1]);
            }
        }
    }
    printf("\nTotal occurrences: %d\n", count);
    return 0;
}