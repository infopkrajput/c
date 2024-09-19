#include <stdio.h>
int fibo(int);
int main()
{
    int t = 25;
    // for (int n = 0; n <= t; n++)
    // {
    //     printf("%d ", fibo(n));
    // }
    printf("%d",fibo(4));
    return 0;
}
int fibo(int n)
{
    if (n == 0 || n == 1)
    {
        return n;
    }
    else
    {
        return fibo(n - 1) + fibo(n - 2);
    }
}