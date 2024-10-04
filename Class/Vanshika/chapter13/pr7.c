#include <stdio.h>
int addition(int *);
int addition2(int []);
int main()
{
    int arr[] = {1, 5, 8, 3, 7, 6, 3, 8,6,4,5,6,7,6,4,4,5,56};
    int sum = addition(arr);
    printf("Sum of array = %d", sum);
    return 0;
}
int addition(int *a)
{
    int n = sizeof(a) / sizeof(a[0]);
    int s = 0;
    for (int i = 0; i < n; i++)
    {
        // printf("No %d element is %d\n",i,arr[i]);
        s += a[i];
    }
    return s;
}
int addition(int a[])
{
    int n = sizeof(a) / sizeof(a[0]);
    int s = 0;
    for (int i = 0; i < n; i++)
    {
        // printf("No %d element is %d\n",i,arr[i]);
        s += a[i];
    }
    return s;
}