#include <stdio.h>
void Shifting(int *, int *, int *);
int main()
{
    int x, y, z;
    x = 5;
    y = 8;
    z = 10;
    printf("Before Shifting\nx = %d\ny = %d\nz = %d\n",x,y,z);
    Shifting(&x,&y,&z);
    printf("After Shifting\nx = %d\ny = %d\nz = %d\n",x,y,z);
}

void Shifting(int *a, int *b, int *c)
{
    int temp;
    temp = *a;
    *a = *c;
    *c = *b;
    *b = temp;
}