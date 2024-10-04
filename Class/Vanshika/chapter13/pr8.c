#include <stdio.h>
int main()
{
    int n;
    printf("How many elements you want to enter ");
    scanf("%d", &n);
    int arr[6];
    printf("Enter the values of array : ");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
    }
    arr[7];
    arr[7] = 9;
    printf("printing all elements of the array : ");
    for (int i = 0; i < 7; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}