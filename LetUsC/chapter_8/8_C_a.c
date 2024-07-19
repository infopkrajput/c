#include<stdio.h>
void leapy(int);
int main()
{
    int year;
    printf("Enter the Year : ");
    scanf("%d",&year);
    leapy(year);
    return 0;
}
void leapy(int year)
{
    if(year%100==0)
    {
        if(year%400==0)
        printf("Leap year!");
        else
        printf("Not a leap year");
    }
    else
    {
        if(year%4==0)
        printf("Leap year");
        else
        printf("Not a leap year");
    }
}