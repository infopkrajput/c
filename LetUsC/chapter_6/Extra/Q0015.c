/* Write a program to find the LCM of two numbers. */
#include<stdio.h>
int main()
{
    int a,b,cm1,cm2,i,j;
    
    printf("Enter Number 1 : ");
    scanf("%d",&a);
    printf("Enter Number 2 : ");
    scanf("%d",&b);
    for(i=1;i<=1000;i++)
    {
        cm1=i*a;
        for(j=1;j<=1000;j++)
        {
            cm2=j*b;
            if(cm1==cm2)
            {
                printf("LCM of %d , %d is %d",a,b,cm1);
                goto out;
            }
        }
    }
    out :
    return 0;
}