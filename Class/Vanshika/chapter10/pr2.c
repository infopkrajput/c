#include <stdio.h>
int fun(int n);
int main()
{
    int x = 12436;
    int y = fun(x);
    printf("y = %d\n", y);
    return 0;
}
int fun(int n)
{
    int rem, sum;
    if (n != 0)
    {
        rem = n % 10;
        sum = rem + fun(n / 10);
    }
    else
    {
        return 0;
    }
    return sum;
}