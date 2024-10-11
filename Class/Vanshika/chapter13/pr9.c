#include <stdio.h>
int main()
{
    int arr1[5] = {6, 8, 4, 5, 3};
    int arr2[5];
    int sum = 0;
    int n = 4;
    int num = sizeof(arr1)/sizeof(arr1[0]);
    for (int i = 0; i < num; i++)
    {
        arr2[n--] = arr1[i];
    }
    for (int i = 0; i < num; i++)
    {
        printf("%d ", arr2[i]);
    }

    return 0;
}