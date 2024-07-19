/*
When interest compounds q times per year at an annual rate of r % for n years, the principal p compounds to an amount a as per the following
formula a = p (1 + r / q) nq
Write a program to read 10 sets of p, r, n & q and calculate the corresponding as.
*/
#include <stdio.h>
#include <math.h>

int main() {
    int sets = 10;
    double p, r, n, q, a;
    printf("Enter 10 sets of principal, annual interest rate, number of years, and compounding frequency:\n");
    for (int i = 0; i < sets; i++) {
        printf("\nSet %d:\n", i + 1);
        printf("Enter principal : ");
        scanf("%lf", &p);
        printf("Enter annual interest rate : ");
        scanf("%lf", &r);
        printf("Enter number of years : ");
        scanf("%lf", &n);
        printf("Enter compounding frequency : ");
        scanf("%lf", &q);
        a = p * pow(1 + r / q, n * q);
        printf("Amount for set %d: %.2lf\n", i + 1, a);
    }
    return 0;
}
