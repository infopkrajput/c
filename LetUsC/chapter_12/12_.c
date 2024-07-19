/*
Write macro definations for the following:
1. To check whether a character is lowercase letter or not.
2. To test whether a character is an uppercase letter or not.
3. 
*/
#include<stdio.h>
#define ISUPER(x) (x>=65 && x<=90?1:0)
#define ISLOWER(x) (x>=97 && x<=122?1:0)
#define ISALPHA(x) (ISUPPER(x) || ISLOWER(x))
#define BIG(x,y) (x>y?x:y)
int main()
{
    char ch;
    int d,a,b;
    printf("Enter any Alphabet/Character : ");
    scanf("%c",&ch);
    if(ISUPPER(ch)==1)
    printf("You entered a capital letter");
    return 0;
}
