/*
Write a C function to evaluate the series.
sin(x) = x - (x^3/3!) + (x^5/5!) - (x^7/7!) + ....
up to 10 terms.
*/
#include <stdio.h>
#include <math.h>
void calculation(double *, double);
int fact(int);
int main()
{
    double x, series;
    printf("Enter the value of x in radians: ");
    scanf("%lf", &x);
    calculation(&series, x);
    printf("sin(%lf) = %lf", x, series);
    return 0;
}
void calculation(double *series, double x)
{
    double sum = 2, i, xfact;
    int true = 0,p = 3;
    for (i = 1; i <= 9; i++)
    {
        if (true == 0)
        {
            xfact = fact(p);
            sum = sum - pow(x, p) / xfact;
            p = p + 2;
            true = 1;
            printf("sum %lf p = %d\n",sum,p);
        }
        else
        {
            xfact = fact(p);
            sum = sum + pow(x, p) / xfact;
            p = p + 2;
            true = 0;
            printf("sum %lf p = %d\n",sum,p);
        }
    }
    *series = sum;
}
int fact(int x)
{
    int a=1;
    for (int i = 1; i <= x; i++)
    {
        a = a * i; 
    }
    return a;
}

// #include<stdio.h>
// #include<math.h>
// double numerator(double,int);
// double denominator(int);
// int main()
// {
//     double n,x,a,b,sum =0;
//     int i,j;
//     printf("Enter the number : ");
//     scanf("%f",&x);
//     for(i=1,j=1;i<=10;i++,j=j+2)
//     {
//         a = numerator(x,j);
//         b = denominator(j);
//         n = a/b;
//         (i%2==0)?(sum =sum-n):(sum = sum+n);
//         printf("sum = %f\n",sum);
//     }
     
//     return 0;
// }
// double numerator(double y,int j)
// {
//     double k =1;
//     int m;
//     for(m=1;m<=j;m++)
//     k*=y;
//     return (k);
// }

// double denominator(int j)
// {
//     int m;
//     double h =1;
//     for(m=1;m<=j;m++)
//     {
//         h = h*m;
//     }
//     return (h);
// }