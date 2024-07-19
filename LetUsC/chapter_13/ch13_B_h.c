/*
For the following set of n data points (x,y), write a program to compute the correlation coefficient r, given by

r = (sumxy - sumx*sumy)/sqrt((n*sumxx-sumxx)-(n*sumyy-sumyy))
    x           y
    34.22       102.43
    39.87       100.93
    41.85       97.43
    43.23       97.81
    40.06       98.32
    53.29       98.32
    53.29       100.07
    54.14       97.08
    49.12       91.56
    40.71       94.65
    55.15       94.65
*/
#include <stdio.h>
#include<math.h>
int main()
{
    float x[11] = {34.22, 39.87, 41.85, 43.23, 40.06, 53.29, 53.29, 54.14, 49.12, 40.71, 55.15};
    float y[11] = {102.43, 100.93, 97.43, 97.81, 98.32, 98.32, 100.07, 97.08, 91.59, 94.85, 94.65};
    float sumx = 0, sumy = 0, sumxy = 0, sumxx = 0, sumyy = 0,r;
    for(int i=0;i<11;i++)
    {
        sumx = sumx + x[i];
        sumy = sumy + y[i];
        sumxy = sumxy  + x[i]*y[i];
        sumxx = sumxx + x[i]*x[i];
        sumyy = sumyy + y[i]*y[i];
    }
    printf("sumx = %f\n",sumx);
    printf("sumy = %f\n",sumy);
    printf("sumxx= %f\n",sumxx);
    printf("sumyy= %f\n",sumyy);
    printf("sumxy= %f\n",sumxy);
    r = (sumxy - sumx * sumy)/sqrt((11*sumxx - sumx*sumx)*(11*sumyy - sumy*sumy));
    printf("Correlation coefficient = %f ",r);
    return 0;
}