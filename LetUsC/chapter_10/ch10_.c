#include<stdio.h>
int rsum(int);
int main()
{
    int num,sum;
    printf("Enter the number = ");
    scanf("%d",&num);
    sum = rsum(num);
    printf("Sum of digits = %d",sum);
    return 0;
}
int rsum(int num)
{
    int s,rem;
    if(num!=0)
    {
        rem=num%10;
        num=num/10;
        s=rem + rsum(num);
    }
    return s;
}