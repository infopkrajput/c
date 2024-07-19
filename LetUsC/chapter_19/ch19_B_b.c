/*
write a program to copy contents of one file to another. While doing so replace all lowercase  character to their equivalent uppercase characters.
*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE *p,*q;
    p = fopen("file1.txt","r");
    q = fopen("file2.txt","w");
    char ch;
    while (1)
    {
        ch = fgetc(p);
        if(ch == EOF)
        break;
        // printf("%c",ch);
        if(ch > 96 && ch < 123)
        ch = ch - 32;
        else if(ch > 64 && ch < 91)
        ch = ch + 32;
        fputc(ch,q);
    }
    fclose(p);
    fclose(q);
    q = fopen("file2.txt","r");
    while (1)
    {
        ch = fgetc(q);
        if(ch == EOF)
        break;
        printf("%c",ch);
    }
    fclose(q);
    return 0;
}