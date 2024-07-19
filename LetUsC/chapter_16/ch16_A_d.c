/*
Write a program that stores a set of names of individuals and abbreviates the first and middle name to their first letter. 
*/
#include<stdio.h>
int main()
{
    char str[30];
    char *p;
    int count = 0,i;
    printf("Enter First and the middle name and surname : ");
    gets(str);
    p = str;
    while(*p)
    {
        if(*p==' ')
            count++;
        p++;
    }
    p = str;
    printf("The name converted to initial is : ");
    while (count)
    {
        printf("%c",*p);
        while (*p!=' ')
        {
            p++;
        }
        p++;
        count--;
    }
    printf("%s\n",p);
    return 0;
}