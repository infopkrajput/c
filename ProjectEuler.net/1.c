/*
If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9. The sum of these multiples is 23.</p>
<p>Find the sum of all the multiples of 3 or 5 below 1000.
*/
#include <stdio.h>
int sum(int a,int b);
int main()
{
    int a = 3 , b = 5;
    int sumAll = sum(a,b);
    printf("%d\n", sumAll);
    return 0;
}

int sum(int a,int b)
{
    int sum = 0;
    for (int i = 0; i < 1000; i++)
    {
        if (i % a == 0 || i % b == 0)
        {
            sum = sum + i;
        }
    }
    return sum;
}