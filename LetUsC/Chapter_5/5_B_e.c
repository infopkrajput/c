/* Write a program to receive an integer and find its octal equivalent. (Hint: To obtain the octal equivalent of an integer, divide it continuously by 8 till the dividend doesn't become zero, then write the remainder obtained in the reverse direction.)) */
#include<stdio.h>
#include<math.h>
int main()
{
int num,temp,i=0,remainder,octal=0;
printf("Enter the number = ");
scanf("%d",&num);
temp=num;
while(num>0)
{
    remainder=num%8;
    num=num/8;
    octal=octal+remainder*pow(10,i);
    i++;
}
printf("The octal equivalent value of %d is %d\n ",temp,octal);
    return 0;
}