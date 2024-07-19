#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE *fr,*fw;
    char ch;
    fr = fopen("sample.txt","r");
    fw = fopen("sample2.txt","w");
    if(fr==NULL)
    {
        printf("Can not read file!\n");
        exit(1);
    }
    while(1)
    {
        ch = fgetc(fr);
        if(ch == EOF)
        break;
        else
        fputc(ch,fw);
    }
    fclose(fr);
    fclose(fw);
    return 0;
}