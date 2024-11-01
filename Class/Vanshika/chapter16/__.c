#include <stdio.h>
#include <string.h>

int main()
{
    char name[][20] = {"Tarun", "Kapil", "Sumit", "Kajal", "Raman"};
    char str[20];

    printf("Enter the name : ");
    gets(str);
    for (int i = 0; i < 5; i++)
    {
        if (strcmp(str, name[i]) == 0)
        {

            printf("%s is eligible to enter in class.\n", str);
            return 1;
        }
    }
    printf("You are not eligible in class\n");
    return 0;
}
