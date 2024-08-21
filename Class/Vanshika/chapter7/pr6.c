// Chapter 6 i
#include <stdio.h>
int main()
{
    int i, j, k;
    int x=1;
    int num = 4;
    for (i = 1; i <= num; i++)
    {
        for (k = i; k <= num - 1; k++)
        {
            printf("  ");
        }
        for (j = 1; j <= i; j++)
        {
            printf("%d   ",x);
            x++;
        }
        printf("\n");
        
    }
    return 0;
}