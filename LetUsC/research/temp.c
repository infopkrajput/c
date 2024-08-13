#include <stdio.h>
int main()
{
    int i, j;
    for (i = 1, j = 2; i <= 3 && j <= 3; i++, j++)
    {
        printf("%d ", i * j);
    }
    return 0;
}