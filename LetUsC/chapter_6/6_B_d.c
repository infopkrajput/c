/*
The natural logarithm can be approximated by the following series.
(x-1/x) + 1/2((x-1)/x)^2 + 1/2((x-1)/x)^3 + 1/2((x-1)/x)^4 + ..... 
If x is input through the keyboard, write a program to calculate the sum of first seven terms of this series.
*/
#include<stdio.h>
#include<math.h>
int main()
{
    float x,cal,total,i,n;
    printf("Enter the term of calculations you want to calculate ");
    scanf("%f",&n);
    printf("Enter the value of x ");
    scanf("%f",&x);
    total=((x-1)/x);
    for(i=2;i<=n;i++)
    {
        cal = 0.5 * pow((x-1)/x,i);
        printf("cal = %f\n",cal);
        total=total+cal;
        printf("Total = %f\n",total);
    }
    printf("Complete total of the question = %f ",total);

    return 0;
}


// #include<stdio.h>
// #include<math.h>
// int main()
// {
//     float x,cal,total,i,n,d;
//     printf("Enter the term of calculations you want to calculate ");
//     scanf("%f",&n);
//     printf("Enter the value of x ");
//     scanf("%f",&x);
//     total=((x-1)/x);
//     d=total;
//     for(i=2;i<=n;i++)
//     {
//         cal = pow(d,i);
//         cal=cal/2;
//         printf("cal = %f\n",cal);
//         total=total+cal;
//         printf("Total = %f\n",total);
//     }
//     printf("Complete total of the question = %f ",total);

//     return 0;
// }