/* Since the condition fails the first time itself, the printf() will not get executed at all. Let's now write the same program using a do while loop =. */
#include<stdio.h>
int main()
{
    int i=1;
    do 
    {
        printf("Credit is yours, Pleasure is mine\n");
        i++;
    }
    while(i<=4);
       return 0;
}