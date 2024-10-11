#include <stdio.h>
#include <stdlib.h>
int main()
{
    int size = 10,a[10];
    int n;
    printf("Enter the size of the array : ");
    scanf("%d", &n);
    // int arr[n];
    // arr = (int *)malloc(n * sizeof(int));
    int k, count = 0;
    printf("Enter the elements of the array : ");
    for (int i = 0; i < n; i++)
    {

        scanf("%d", &arr[i]);
    }
    printf("Enter the number you want to search : ");
    scanf("%d", &k);
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == k)
        {
            count++;
        }
    }
    printf("Total occurrence in int arr of %d is %d", k, count);
    free(arr);
    return 0;
}