/* Write a program that generates and prints the fibonacci words of order 0 through 5. For example f(0) = "A",f(1) = "B", f(2) = "BA", f(3) = "BAB", f(4) = "BABBA", etc.*/
#include <stdio.h>
#include <string.h>
int main()
{
    char stra[50] = "A";
    char strb[50] = "B";
    char strc[50];  
    int i;
    printf("Fibonacci Series of A,B\n");
    printf("%s ",stra);
    printf("%s ",strb);
    for(i=1;i<=5;i++)
    {
        strcpy(strc,strb);
        strcat(strc,stra);
        printf("%s ",strc);
        strcpy(stra,strb);
        strcpy(strb,strc);
    }
    return 0;
}