#include <stdio.h>
int main()
{
    int x  = 5;
    int *p;
    p = &x;
    int **q;
    printf("Address of variable = %x\n",&x);
    printf("Address of variable = %d\n",&x);
    printf("Value of variable = %d\n",*&x);
    printf("Value at the address = %d\n",*p);
    printf("Address of variable = %d\n",&p);

    return 0;
}
