#include <stdio.h>
#include <stdlib.h>
int main()
{
    int x, y, z;
    printf("Enter the value of x : ");
    scanf("%d", &x);
    printf("Enter the value of y : ");
    scanf("%d", &y);
    if(y == 0)
    {
        printf("Deviser is not valid.");
        exit(1);
    }
    z = x / y;
    printf("Divide : %d", z);
    return 0;
}
