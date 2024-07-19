/* Passing an array to a function */
#include<stdio.h>
void display1(int*,int);
void display2(int[],int);
int main()
{
    int num[] = {24,34,12,44,56,17};
    display1(&num[0],6);
    printf("\n");
    display2(&num[0],6);
    return 0;
}
void display1(int*a,int b)
{
    int i;
    for(i=0;i<=b-1;i++)
    {
        printf("Element = %d\n",*a);
        a++;
    }
}
void display2(int a[],int b)
{
    int i;
    for(i=0;i<=b-1;i++)
    {
        printf("Element = %d\n",a[i]);
    }
}
/*in the display2 function we can call an array by it's name instead of storing it in a pointer because a array is also like a address.*/