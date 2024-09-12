#include <stdio.h>
int fun (int);
int main()
{
    int x=5;
    int y = fun (x);
    printf("Square of %d is %d", x, y);
    return 0;
}             
int fun(int n)
{
    return n*n;
}  