/* 
Write a program to find the range of a set of numbers entered through the keyboard. Range is the difference between the smallest and biggest number in the list
*/
#include<stdio.h>
int main()
{
int num,n,range,big=0,small=9999,i=1;
printf("Enter how many numbers do you want to enter = ");
scanf("%d",&n);
while(i<=n)
{
    printf("Enter the number = ");
    scanf("%d",&num);
    if(num>big)
    {
        big=num;
    }
    if(num<small)
    {
        small=num;
    }
    i++;
}
    if(small>0)
    {
        range=big-small;
    }
    else
    {
        range=big+(small*-1);
    }
    printf("Range =  %d ",range);
    return 0;
}