/*
Define a function that receives the weight of a commodity in kilograms and returns the equivalent weight in grams, tones, and pounds. call the function from main() and print the result in main().
*/
#include<stdio.h>
void convert(float);
int main()
{
    float kg;
    printf("Enter the weight in kg : ");
    scanf("%f",&kg);
    convert(kg);
    return 0;
}
void convert(float kg)
{
    float g,t,p;
    g = kg*1000;
    t = kg/1000;
    p = kg*2.20462;
    printf("Weight in Grams = %.2f\n",g);
    printf("Weight in Tons = %.2f\n",t);
    printf("Weight in Pounds = %.2f\n",p);
}