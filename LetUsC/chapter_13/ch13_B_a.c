/* Twenty five numbers are entered fromthe keyboard into an array. Write a program to find out how many of them are positive, negative, How many are even and how many are odd. */
#include <stdio.h>
int main()
{
    int arr[25], i, pos = 0, neg = 0, zero = 0, even = 0, odd = 0;
    for (i = 0; i < 25; i++)
    {
        printf("Enter The %d Element = ", i + 1);
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < 25; i++)
    {
        if (arr[i] < 0)
            neg++;
        if (arr[i] > 0)
            pos++;
        if (arr[i] == 0)
            zero++;
        if (arr[i] % 2 == 0)
            even++;
        if (arr[i] % 2 != 0)
            odd++;
    }
    printf("Total positive = %d Elements \nTotal negative = %d Elements \nTotal Zero = %d Elements \nTotal Even = %d Elements \nTotal Odd = %d Elements \n", pos, neg, zero, even, odd);
    return 0;
}