#include <stdio.h>
// Function declaration 
void function();
float squareOfANumber(int);
int main()
{
    // Function calling
    // function();
    int num = 10;
    float result;
    result = squareOfANumber(num);
    printf("The square of %d is : %.2f",num,result);
    return 0;
}
// Function Definition 
void function()
{
    printf("Hello World!!!!");
}


float squareOfANumber(int n)
{
    n = n - 10;
    float x = n*n;
    return x;
}