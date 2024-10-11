#include <stdio.h>
int main()
{
    int arr[25];
    printf("Enter the elements of the array \n");
    for (int i = 0; i < 25; i++)
    {
        scanf("%d", &arr[i]);
    }
    int pos = 0, neg = 0, even = 0, odd = 0;
    for (int i = 0; i < 25; i++)
    {
        if (arr[i] > 0)
        {
            pos++;
        }
        if (arr[i] < 0)
        {
            neg++;
        }
        if (arr[i] % 2 == 0)
        {
            even++;
        }
        if (arr[i] % 2 != 0)
        {
            odd++;
        }
    }
    printf("Total Number of positive values : %d\n",pos);
    printf("Total Number of negative values : %d\n",neg);
    printf("Total Number of even values : %d\n",even);
    printf("Total Number of odd values : %d\n",odd);
    return 0;
}