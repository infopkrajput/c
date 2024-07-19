/*
A positive integer is entered through the keyboard,write a function to find the binary equivalent of this number.
(1) Without using recursion.
(2) Using recursion.
*/
#include<stdio.h>
int wrec(int);
int recu(int);
int main()
{
    int num,binary_wrec,binary_recu;
    printf("Enter the number you want to convert in binary = ");
    scanf("%d",&num);
    binary_wrec = wrec(num);
    binary_recu = recu(num);
    printf("Binary without recursion = %d \n",binary_wrec);
    printf("Binary with recursion = %d \n",binary_recu);
        return 0;
}
int wrec(int num)
{
    int rem,i,binary=0,a=1;
    for(i=1;num>0;i++)
    {
        rem = num%2;
        num = num/2;
        binary = binary + rem * a;
        a = a * 10;
    }
    return(binary);
}
int recu(int num)
{
    if(num==0)
    return 0;
    else
    {
        int a;
        a = num % 2 + 10 * recu(num/2);
        return(a);
    }
}