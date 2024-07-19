/* 
Write a program in C to make such a pattern like a pyramid with an asterisk.
   * 
  * * 
 * * * 
* * * *
*/
#include<stdio.h>
int main()
{
int i,j,raw,space,temp;
printf("Enter raw = ");
scanf("%d",&raw);
temp=raw;
for(i=1;i<=raw;i++)
{
    for(space=temp-1;space>=1;space--)
    {
        printf(" ");
        
    }
    for(j=1;j<=i;j++)
    {
        printf("* ");
    }
    printf("\n");
    temp--;
}
    return 0;
}