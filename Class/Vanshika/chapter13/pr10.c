#include <stdio.h>
int main()
{
    int arr[10];
    int k, count = 0;
    printf("Enter the elements of the array : ");
    for (int i = 0; i < 10; i++)
    {

        scanf("%d", &arr[i]);
    }
    printf("Enter the number you want to search : ");
    scanf("%d", &k);
    for (int i = 0; i < 10; i++)
    {
        if (arr[i] == k)
        {
            count++;
        }
    }
    printf("Total occurrence int arr of %d is %d", k, count);
    return 0;
}