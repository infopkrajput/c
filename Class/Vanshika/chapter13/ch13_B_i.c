#include <stdio.h>
#include <math.h>
int main()
{
    float x[10], y[10];
    float sum = 0;
    for (int i = 0; i < 10; i++)
    {
        printf("Enter the value of x%d : ", i + 1);
        scanf("%f", &x[i]);
        printf("Enter the value of y%d : ", i + 1);
        scanf("%f", &y[i]);
    }
    for (int i = 0; i < 9; i++)
    {
        sum = sum + sqrt(pow(x[i + 1] - x[i], 2) + pow(y[i + 1] - y[i], 2));
        printf("%f\n", sum);
    }
    printf("Distance of 10 points of Coordinates is %f\n", sum);

    return 0;
}