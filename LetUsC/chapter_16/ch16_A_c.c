/*
Write a program that will read a line and delete from it all occurrence of the word "the".
*/
#include <stdio.h>
#include <string.h>
int main()
{
    char str[80] = "This is the string. after study the array.";
    char match[] = "the";
    int i = 0, len,j;
    if (strstr(str, match))
    {
        len = strlen(str);
        for (i = 0; i < len; i++)
        {
            if (str[i] == 't' && str[i+1] =='h' && str[i+2] == 'e' )
            {
                for(j=i;j<len-4;j++)
                {
                    str[j] = str[j+4];
                }
                len= len - 4;
            }
        }
        str[j] = '\0';
        printf("After remove %s.\nString is : %s",match,str);
    }
    else
    {
        printf("%s not match in the string.", match);
    }
    return 0;
}