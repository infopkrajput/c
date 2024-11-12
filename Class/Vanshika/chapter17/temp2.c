#include <stdio.h>
void inputAge(int *x);
int main()
{
    int age;
    inputAge(&age);
    printf("Your age is: %d\n", age);
    return 0;
}
void inputAge(int *x)
{
    int d;
    scanf("%d", &d);
    *x = d;
}