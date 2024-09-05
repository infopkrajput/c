// Chapter 6 f
#include <stdio.h>
int main()
{
    int pop = 100000, i, dif;
    for (i = 1; i <= 10; i++)
    {
        dif = pop * 10.0 / (100 + 10);
        pop = pop - dif;
        printf("Population of last year : %d\n", pop);
    }
    return 0;
}