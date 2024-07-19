#include <stdio.h>
#include <string.h>
#define MAX_STRINGS 50
#define MAX_STRING_LENGTH 100
int main()
{
    char strings[MAX_STRINGS][MAX_STRING_LENGTH];
    int num_strings;
    printf("Enter the number of strings (max %d): ", MAX_STRINGS);
    scanf("%d", &num_strings);
    printf("Enter %d strings:\n", num_strings);
    for (int i = 0; i < num_strings; i++)
    {
        scanf("%s", strings[i]);
    }
    for (int i = 0; i < num_strings - 1; i++)
    {
        for (int j = 0; j < num_strings - i - 1; j++)
        {
            if (strcmp(strings[j], strings[j + 1]) > 0)
            {
                char temp[MAX_STRING_LENGTH];
                strcpy(temp, strings[j]);
                strcpy(strings[j], strings[j + 1]);
                strcpy(strings[j + 1], temp);
            }
        }
    }
    printf("\nSorted strings:\n");
    for (int i = 0; i < num_strings; i++)
    {
        printf("%s\n", strings[i]);
    }

    return 0;
}