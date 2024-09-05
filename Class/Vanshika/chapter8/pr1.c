#include <stdio.h>
void function1();    // this will include fun 2 and 3 also
void function2(int); // declaration
int function3(int);  // <Return type> <Function name>(<Argument value>); 
int main()
{
    int a = 4;
    int b;
    printf("main program\n");
    function1();
    function2(a);
    b = function3(a);
    printf("b = %d\n",b);
    return 0;
}
// definition
void function1()
{
    printf("Working fun 1\n");
}
void function2(int a)
{
    printf("Square of value : %d\n", a * a);
}
int function3(int x)
{
    x = x*5;
    return x;
}
