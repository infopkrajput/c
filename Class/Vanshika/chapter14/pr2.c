#include <stdio.h>
void fun(int *arr);
int main()
{
    int arr[][2] = {1,2,3,4};
    int *p;
    p = arr[1];
    printf("%d ",*(p-1));
    printf("%d ",*p);
    printf("%d ",*(p+1));
    return 0;
}
void fun(int *arr)
{
    for(int i = 0;i<3;i++)
    {
        printf("%d ",*arr);
        arr++;
    }
}