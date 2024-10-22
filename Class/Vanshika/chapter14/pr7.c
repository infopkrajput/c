#include <stdio.h>
int main()
{
    int a[2][3][3] = {{{7, 3, 5}, {5, 2, 9}, {2, 3, 5}}, {{90, 2, 45}, {3, 2, 1}, {5, 78, 23}}};

    printf("%d \n", a[1][1][2]);
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            for (int k = 0; k < 3; k++)
            {
                printf("%d ", a[i][j][k]);
            }
        }
    }
    return 0;
}