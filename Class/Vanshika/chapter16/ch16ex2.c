#include <stdio.h>
#include <string.h>
int checkVowel(char ch);
int main()
{
    char str[80];
    printf("Enter the string : ");
    gets(str);
    int n = strlen(str);
    for (int i = 0; i < n; i++)
    {
        if (checkVowel(str[i]))
        {
            for (int j = i; j < n; j++)
            {
                str[j] = str[j + 1];
            }
        }
    }
    puts(str);
    return 0;
}
int checkVowel(char ch)
{
    if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u'){
        return 1;
    }
    return 0;
}