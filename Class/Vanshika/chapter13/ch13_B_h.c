#include <stdio.h>
#include <math.h>
int main()
{
    float x[] = {34.22, 39.87, 41.85, 43.23, 40.06, 53.29, 53.29, 54.14, 49.12, 40.71, 55.15};
    float y[] = {102.43, 100.93, 97.43, 97.81, 98.32, 98.32, 100.07, 97.08, 91.59, 94.85, 94.65};
    float SumXY = 0, SumX = 0, SumY = 0, SumXX = 0, SumYY = 0;
    double r;
    int n = sizeof(x) / sizeof(x[0]);
    for (int i = 0; i < n; i++)
    {
        SumXY = SumXY + x[i] * y[i];
        SumX = SumX + x[i];
        SumY = SumY + y[i];
        SumXX = SumXX + x[i] * x[i];
        SumYY = SumYY + y[i] * y[i];
    }
    // printf("SumXY = %f\n", SumXY);
    // printf("SumX = %f\n", SumX);
    // printf("SumY = %f\n", SumY);
    // printf("SumXX = %f\n", SumXX);
    // printf("SumYY = %f\n", SumYY);
    r = (SumXY - SumX * SumY) / sqrt((n * SumXX - SumX * SumX) * (n * SumYY - SumY * SumY));
    printf("r = %lf", r);
    return 0;
}