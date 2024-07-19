#include<stdio.h>
#include<stdlib.h>
int main(int argc,char *argv[])
{
    FILE *p,*q;
    char ch;
    if(argc!=2)
    {
        printf("Invalid command!");
        exit(1);
    }
    p = fopen(argv[1],"r");
    if(p == NULL)
    {
        printf("Can not read file.");
        exit(2);
    }
    q = fopen("temp","w");
    if(q == NULL)
    {
        printf("Can not create file.");
        exit(3);
    }
    while ((ch = fgetc(p))!=EOF)
    {
        if(ch > 96 && ch < 123)
        ch = ch - 32;
        fputc(ch,q);
    }
    remove(argv[1]);
    rename("temp",argv[1]);
    fclose(p);
    fclose(q);
    return 0;
}