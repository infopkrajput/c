/*
Write a function to compute the distance between two points and use it to develop another function that will compute the area of the triangle whose vertices are A(x1, y1), B(x2, y2), and C(x3, y3). Use these functions to develop a function that returns a value of 1 if the point (x, y) lines inside the triangle ABC, otherwise returns a value of 0.
*/
#include <stdio.h>
#include <math.h>
float distance(float, float, float, float);
int testing(float x1, float x2, float x3, float y1, float y2, float y3, float x, float y);
float areacal(float x1, float y1, float x2, float y2, float x3, float y3);
int main()
{
    float x, x1, x2, x3, y, y1, y2, y3;
    int result;
    printf("Enter The point of x1,y1 : ");
    scanf("%f%f", &x1, &y1);
    printf("Enter The point of x2,y2 : ");
    scanf("%f%f", &x2, &y2);
    printf("Enter The point of x3,y3 : ");
    scanf("%f%f", &x3, &y3);
    printf("Enter The checking point of x,y : ");
    scanf("%f%f", &x, &y);
    result = testing(x1, x2, x3, y1, y2, y3, x, y);
    if (result == 1)
    {
        printf("Triangle of point x ,y inside main triangle ");
    }
    else
    {
        printf("Triangle of point x ,y outside main triangle ");
    }
    return 0;
}
float distance(float x1, float y1, float x2, float y2)
{
    return sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));
}
float areacal(float x1, float y1, float x2, float y2, float x3, float y3)
{
    float a, b, c, sp;
    a = distance(x1, y1, x2, y2);
    b = distance(x2, y2, x3, y3);
    c = distance(x3, y3, x1, y1);
    sp = (a + b + c) / 2;
    return sqrt(sp * (sp - a) * (sp - b) * (sp - c));
}

int testing(float x1, float x2, float x3, float y1, float y2, float y3, float x, float y)
{
    float totalarea, areat1, areat2, areat3;
    float epsilon = 0.000001;
    totalarea = areacal(x1, y1, x2, y2, x3, y3);
    areat1 = areacal(x1, y1, x2, y2, x, y);
    areat2 = areacal(x1, y1, x, y, x3, y3);
    areat3 = areacal(x, y, x2, y2, x3, y3);
    printf("Total area = %f \nArea1 = %f\nArea 2 = %f\nArea 3 = %f",totalarea,areat1,areat2,areat3);
    // if (fabs(totalarea - (areat1 + areat2 + areat3))< epsilon)
    if(totalarea == areat1+areat2+areat3)
    {
        return 1;
    }
    else
    {
        return 0;
    }

}

// With reference calling.

// #include <stdio.h>
// #include <math.h>
// float distance(float, float, float, float);
// void testing(float *, float *, float *, float *, float, float, float, float, float, float, float, float, int *);
// float areacal(float x1, float y1, float x2, float y2, float x3, float y3);
// int main()
// {
//     float x, x1, x2, x3, y, y1, y2, y3;
//     int result = 0;
//     printf("Enter The point of x1,y1 : ");
//     scanf("%f%f", &x1, &y1);
//     printf("Enter The point of x2,y2 : ");
//     scanf("%f%f", &x2, &y2);
//     printf("Enter The point of x3,y3 : ");
//     scanf("%f%f", &x3, &y3);
//     printf("Enter The checking point of x,y : ");
//     scanf("%f%f", &x, &y);
//     float totalarea, areat1, areat2, areat3;
//     testing(&totalarea, &areat1, &areat2, &areat3, x1, y1, x2, y2, x3, y3, x, y, &result);
//     printf("Total area = %f \nArea1 = %f\nArea 2 = %f\nArea 3 = %f\n\n", totalarea, areat1, areat2, areat3);
//     if (result == 1)
//     {
//         printf("Triangle of point x ,y inside main triangle ");
//     }
//     else
//     {
//         printf("Triangle of point x ,y outside main triangle ");
//     }
//     return 0;
// }
// float distance(float x1, float y1, float x2, float y2)
// {
//     return sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));
// }
// float areacal(float x1, float y1, float x2, float y2, float x3, float y3)
// {
//     float a, b, c, sp;
//     a = distance(x1, y1, x2, y2);
//     b = distance(x2, y2, x3, y3);
//     c = distance(x3, y3, x1, y1);
//     sp = (a + b + c) / 2;
//     return sqrt(sp * (sp - a) * (sp - b) * (sp - c));
// }
// void testing(float *totalarea, float *areat1, float *areat2, float *areat3, float x1, float y1, float x2, float y2, float x3, float y3, float x, float y, int *result)
// {
//     float epsilon = 0.000001;
//     *totalarea = areacal(x1, y1, x2, y2, x3, y3);
//     *areat1 = areacal(x1, y1, x2, y2, x, y);
//     *areat2 = areacal(x1, y1, x, y, x3, y3);
//     *areat3 = areacal(x, y, x2, y2, x3, y3);
//     if (fabs(*totalarea - (*areat1 + *areat2 + *areat3)) < epsilon)
//         *result = 1;
//     else
//         *result = 0;
// }