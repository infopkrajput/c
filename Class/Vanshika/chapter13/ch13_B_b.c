#include <stdio.h>
int main()
{
    int arr[] = {1, 3, 6, 6, 3, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    int yes = 1;
    int x = 1;
    for (int i = 0; i < n / 2; i++)
    {
        if (arr[i] == arr[n - x++])
        {
        }
        else
        {
            yes = 0;
        }
    }
    if (yes == 1)
    {
        printf("Yes this array is as questioning by book");
    }
    else
    {
        printf("No this array is not as questioning by book");
    }
    return 0;
}