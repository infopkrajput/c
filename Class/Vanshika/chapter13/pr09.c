#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *p;
    int n;
    printf("Enter the size of array : ");
    scanf("%d", &n);
    p = (int *)malloc(n * sizeof(int));
    if(p == NULL)
    {
        printf("Array does not have any size.");
        return 0;
    }
    for (int i = 0; i < n; i++)
    {
        printf("Enter the element no : %d : ", i);
        scanf("%d", &p[i]);
    }
    free(p);
    for (int i = 0; i < n; i++)
    {
        printf("Element %d is %d\n", i, p[i]);
    }
    return 0;
}