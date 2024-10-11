#include <stdio.h>
int main()
{
    int arr1[5] = {6, 8, 4, 5, 3};
    int big = 0;
    for(int i = 0;i<5;i++)
    {
        if(big < arr1[i])
        {
            big = arr1[i];
        }
    }
    printf("big = %d",big);
    return 0;
}