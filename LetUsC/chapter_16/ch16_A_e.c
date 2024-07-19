/*
Write a program to count the number of occurrence of any two vowels in succession in a line of text. For example, in the following sentence.
"Please read this application and give me gratuity"
such occurrence are ea, ea, ui.
*/
#include<stdio.h>
int main()
{
    char str[80];
    char *s;
    int i,count=0;
    printf("Enter the string : ");
    gets(str);
    s = str;
    while(*s!='\0')
    {
        if(*s == 'a' || *s == 'e' || *s == 'i' || *s == 'o' || *s == 'u'|| *s == 'A' || *s == 'E' || *s == 'I' || *s == 'O' || *s == 'U')
        {   
            if(*(s+1) == 'a' || *(s+1) == 'e' || *(s+1) == 'i' || *(s+1) == 'o' || *(s+1) == 'u'|| *(s+1) == 'A' || *(s+1) == 'E' || *(s+1) == 'I' || *(s+1) == 'O' || *(s+1) == 'U')
            {
                count++;
            }
        }
        s++;
    }
    printf("Total Occurrences are %d \n",count);
    printf("All occurrences are : ");
    s = str;
    while(*s!='\0')
    {
        if(*s == 'a' || *s == 'e' || *s == 'i' || *s == 'o' || *s == 'u'|| *s == 'A' || *s == 'E' || *s == 'I' || *s == 'O' || *s == 'U')
        {   
            if(*(s+1) == 'a' || *(s+1) == 'e' || *(s+1) == 'i' || *(s+1) == 'o' || *(s+1) == 'u'|| *(s+1) == 'A' || *(s+1) == 'E' || *(s+1) == 'I' || *(s+1) == 'O' || *(s+1) == 'U')
            {
                printf("%c%c ",*s,*(s+1));
            }
        }
        s++;
    }
    return 0;
}