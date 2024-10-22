#include <stdio.h>
int main()
{
    int arr[5] = {1, 2, 3, 4};
    printf("%d ",*arr);
    printf("%d ",*(arr+1));
    return 0;
}