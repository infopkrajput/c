#include <stdio.h>
#include <math.h>
#include <limits.h>
int main()
{
    float a[] = {137.4, 155.2, 149.3, 160.0, 155.6, 140.7};
    float b[] = {80.9, 92.62, 97.93, 100.25, 68.95, 120.0};
    float angle[] = {0.78, 0.89, 1.35, 9.0, 1.25, 1.75};
    float area[6];
    for (int i = 0; i < 6; i++)
    {
        area[i] = 0.5 * a[i] * b[i] * sin(angle[i]);
    }
    float big = INT_MIN;
    for (int i = 0; i < 6; i++)
    {
        if (big < area[i])
        {
            big = area[i];
        }
        printf("Area of triangle %d is %f\n", i + 1, area[i]);
    }
    printf("Greatest Triangle is %f", big);

    return 0;
}