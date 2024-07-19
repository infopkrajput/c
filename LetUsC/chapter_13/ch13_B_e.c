/* Write a program which performs the following tasks:
- Initialize an integer array of 10 elements in main()
- Pass the entire array to a function modify()
- In modify() multiply each element of array by 3
- Return the control to main() and print the new array elements in main() */
#include <stdio.h>
void modify(int *);
int main()
{
    int arr[10], i;
    for (i = 0; i < 10; i++)
    {
        printf("Enter the %d element = ", i + 1);
        scanf("%d", &arr[i]);
    }
    modify(arr);
    return 0;
}
void modify(int *arr)
{
    int i;
    for (i = 0; i < 10; i++)
    {
        printf("%d ", *(arr + i) * 3);
    }
}
