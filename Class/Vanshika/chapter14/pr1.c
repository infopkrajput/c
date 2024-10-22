#include <stdio.h>
int main()
{
    int arr[][2] = {1, 92, 2, 95, 3, 86, 4, 78, 4};
    printf("%d", arr[0][1]);
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%d ", arr[i][j]);
        }
    }
    return 0;
}