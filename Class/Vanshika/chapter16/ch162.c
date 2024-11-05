#include <stdio.h>
#include <string.h>
int main()
{
    char *names[] = {
        "Rajesh", "Kajal", "Manish", "Akash", "Ashish"};
    char *t;
    printf("Before Sorting : \n");
    for (int i = 0; i < 5; i++)
    {
        printf("%s\n", &names[i][0]);
    }
    for (int i = 0; i < 5; i++)
    {
        for (int j = i + 1; j < 5; j++)
        {
            if (strcmp(names[i], names[j]) > 0)
            {
                t = names[i];
                names[i] = names[j];
                names[j] = t;
            }
        }
    }
    printf("\n\nAfter Sorting : \n");
    for (int i = 0; i < 5; i++)
    {
        printf("%s\n", &names[i][0]);
    }
    return 0;
}