/*
Write a program to store a few strings using an array of pointer to strings. Receive a string and check if it is present in the array.
*/
#include<stdio.h>
#include<string.h>
int main()
{
    char *all[] = {"This is cool","I am the boss","he plays well.","She is good player."};
    char str[20];
    char *p;
    int i,size;
    p = NULL;
    size = sizeof(all)/sizeof(all[0]);
    printf("Enter the String : ");
    scanf("%s",str);
    for(i=0;i<size;i++)
    {
        p = strstr(all[i],str);
        if(p!=NULL)
        {
            printf("%s match in string.",str);
            goto ex;
        } 
    }
    printf("String Doesn't Match.");
    ex:
    return 0;
}