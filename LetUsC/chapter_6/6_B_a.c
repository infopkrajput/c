/*
Write a program to print the multiplication table of the number entered by the user. The table should get displayed in the following form:
29 * 1 = 29
29 * 2 = 58
.
.
.
29 * 10 = 290
*/
#include<stdio.h>
int main()
{
    int i,num;
    printf("Enter the number = ");
    scanf("%d",&num);
    for(i=1;i<=10;i++)
    {
        printf("%d x %d = %d\n",num,i,num*i);
    }   

    return 0;
}