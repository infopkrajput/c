#include <stdio.h>
void Printing(int arr[][4]);
int main()
{
    int arr[3][4] = {
        {1, 4, 7, 8},
        {3, 7, 1, 9},
        {5, 7, 1, 9}};
    Printing(arr);
    return 0;
}
void Printing(int arr[][4])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}