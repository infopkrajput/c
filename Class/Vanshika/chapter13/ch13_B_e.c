#include <stdio.h>
void modify(int *);
int main()
{
    int arr[10] = {1, 4, 6, 2, 8, 9, 11, 44, 23, 17};
    printf("Original Array : ");
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", arr[i]);
    }
    modify(arr);
    printf("\nModified Array : ");
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}
void modify(int *p)
{
    for (int i = 0; i < 10; i++)
    {
        *(p + i) = *(p + i) * 3;
    }
}
