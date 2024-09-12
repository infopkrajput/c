#include<stdio.h>
void fun(int*,int*);
int main()
{
    int a = 10,b = 20;
    fun(&a,&b);
    printf("a = %d,b = %d ",a,b);
    return 0;
}
void fun (int *x, int *y)
{
    printf("before swapping, x = %d and y = %d\n", *x, *y);
    int t;
    t = *x;
    *x = *y;
    *y = t;
    printf("After swapping, x = %d and y = %d\n", *x, *y);

}