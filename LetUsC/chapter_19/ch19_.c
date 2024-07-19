#include<stdio.h>
int main()
{
    FILE *f;
    char ch;
    f = fopen("sample.txt","r");
    while(1)
    {
        ch = fgetc(f);
        if(ch==EOF)
        break;
        printf("%c",ch);
    }
    printf("\n");
    fclose(f);
    return 0;
}