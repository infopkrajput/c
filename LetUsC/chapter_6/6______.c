#include <stdio.h>
int main()
{
int num,i;
printf("Enter a Number = ");
scanf("%d",&num);
i=2;
while(i<=num-1)
{
    if(num%i==0)
    {
        printf("Not A Prime number \n");
        break;
    }
    i++;
}
if (i==num)
printf("Prime Number\n");
    return 0;
}