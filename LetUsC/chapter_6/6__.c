/* The way if statement can be nested, similarly whiles and fors can also be nested. */
#include <stdio.h>
int main()
{
int r,c,sum;
for(r=1;r<=3;r++)
{
    for(c=1;c<=2;c++)
    {
        sum=r+c;
        printf("r = %d c = %d sum = %d\n",r,c,sum);
    }
}
    return 0;
}