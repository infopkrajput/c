/* find all palindrome numbers between 1 to 9999. */
#include<stdio.h>
int main()
{
    int num,temp,rev,rem;
    for (num=1; num<=9999; num++)
    {
        temp=num;
        rev=0;
        while (temp)
        {
            rem=temp%10;
            temp=temp/10;
            rev=rev*10+rem;
        }
        if(num==rev)
        printf("%d \n",rev);
    }
    return 0;
}