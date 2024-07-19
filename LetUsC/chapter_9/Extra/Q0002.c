/*

Write a function to compute the greatest common divisor given by
Euclid’s algorithm, exemplified for J = 1980, K = 1617 as follows: 
 
1980 / 1617 = 1     1980 – 1 * 1617 = 363 
1617 / 363 = 4      1617 – 4 * 363 = 165 
363 / 165 = 2       363 – 2 * 165 = 33 
5 / 33 = 5          165 – 5 * 33 = 0 
Thus, the greatest common divisor is 33.

*/

#include<stdio.h>
void gcdcheck(int,int,int*);
int main()
{
    int j =1980,k=1617,gdc;
    gcdcheck(j,k,&gdc);
    printf("Greatest common divisor of %d and %d is %d ",j,k,gdc);
    return 0;
}
void gcdcheck(int x,int y,int *z)
{
    int rem;
    int big=y;
    while (y!=0)
    {
        rem = x % y;
        x = y;
        y = rem;
    }
    *z = x;
}