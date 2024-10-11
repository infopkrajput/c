#include <stdio.h>
#include <limits.h>
int main()
{
    int arr[4] = {-4, -2, -7, -5};
    int small = INT_MAX;
    int max = INT_MIN;
    for (int i = 0; i < 4; i++)
    {
        if (arr[i] < small)
        {

            small = arr[i];
        }
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    printf("Smallest value in the array is %d\n", small);
    printf("Biggest value in the array is %d\n", max);
    return 0;
}