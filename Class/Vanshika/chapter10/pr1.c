#include<stdio.h>
int fun1();
int main()
{
    int x = 5;
    int y = fun1(x);
    printf("Value of y: %d\n", y);
    return 0;
}
int fun1(int x)
{
    int sum = 0;
    if(x == 1)
    {
        return 1;
    }
    else 
    {
        sum = x + fun1(x - 1);
        return sum;
    }
}
