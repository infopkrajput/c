#include <stdio.h>
#include <math.h>
int main()
{
    int arr[] = {-6, 12, 8, 13, 11, 6, 7, 2, -6, -9, -10, 11, 10, 9, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    int mean = sum / n;
    float sd = sqrt(pow(sum - mean, 2)) / n;
    printf("Standard Deviation = %f", sd);
    return 0;
}