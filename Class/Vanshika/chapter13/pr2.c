#include <stdio.h>
int main()
{
    int arr[6] = {5,7,3,9,2};
    int arr2[] = {5,7,3,9,2,5,7,3,9,2,5,7,3,9,2,5,7,3,9,2,5,7,3,9,2,5,7,3,9,2,5,7,3,9,2};
    // int arr3[];
    // arr3[0] = 6;
    printf("%d \n",arr[4]);
    printf("%d \n",arr[6]);
    arr[5] = 8;
    printf("%d \n",arr[5]);
    arr[4] = 7;
    printf("%d \n",arr[4]);
    int x = 5;
    printf("%d \n",x);
    x = 9;
    printf("%d \n",x);
    return 0;
}