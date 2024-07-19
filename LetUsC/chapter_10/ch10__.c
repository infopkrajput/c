/* A positive integer is entered through the keyboard, Write a program to obtain the prime factor of the number. Modify the function suitably to obtain the prime factor recursively.*/
#include<stdio.h>
void prime(int,int);
int main()
{
    int n;
    printf("Enter the number_ : ");
    scanf("%d",&n);
    printf("Prime factor of the number_ is ");
    prime(n,2);
    return 0;
}
void prime(int n,int i)
{
    if(i<=n)
    {
        if(n%i==0)
        {
            printf("%d",i);
            n=n/i;
        }
        else 
        {
            i++;
            prime(n,i);
        }
    }
}
