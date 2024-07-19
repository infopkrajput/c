/* Write a program using pointers to find the smallest number in an array of 25 integers. */
#include <stdio.h>
int main()
{
    int arr[25] = {5, 25, 3, 6, 0, 2, 3, 45, 5, 6, 3, 3, 4, 56, 6, 3, 3, 4, 5, 4, 74, 4, 12, 4, 7}, i, *small;
    small = &arr[0];
    for (i = 0; i < 25; i++)
    {
        if (arr[i] <*small)
        {
            small = &arr[i];
        }
    }
    printf("%d", *small);
    return 0;
}