#include <stdio.h>
#include "areaperi.h"
int main()
{
    int l,b;
    printf("Enter length and breadth of rectangle: ");
    scanf("%d %d", &l, &b);
    int a = AREA(l,b);
    int p = PERI(l,b);
    printf("Area = %d\n",a);
    printf("Perimeter = %d\n",p);
    return 0;
}