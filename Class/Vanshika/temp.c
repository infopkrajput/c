// Consider the c program shown below
#include <stdio.h>
#define print(x) printf("%d ", x)

int x;
void Q(int z)
{
    z += x;
    print(z);
}

void P(int *y)
{
    int x = *y + 2;
    Q(x);
    *y = x - 1;
    print(x);
}

int main(void)
{
    x = 5;
    P(&x);
    print(x);
    return 0;
}


// 12 7 6
// 22 12 11 
// 14 6 6
// 7 6 6
