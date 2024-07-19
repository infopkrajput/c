#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(int count, char *value[])
{
    char ch;
    char cx;
    int a, b;
    if (count == 2)
    {
        cx = value[1][0];
        if (cx == 'h' || cx == 'H')
        {
            printf("G   =   Check grater value\n");
            printf("g   =   Check grater value\n");
            printf("D   =   Perform divination\n");
            printf("d   =   Perform divination\n");
            printf("S   =   Perform Subtraction\n");
            printf("s   =   Perform Subtraction\n");
            printf("A   =   Perform Addition\n");
            printf("a   =   Perform Addition\n");
            printf("M   =   Perform Multiplication\n");
            printf("m   =   Perform Multiplication\n");
        }
        else
        {
            printf("Please type correct argument\n");
            printf("use flag h to help\n");
        }
    }
    if (count == 4)
    {
        cx = value[1][0];
        a = atoi(value[2]);
        b = atoi(value[3]);
        switch (cx)
        {
        case 'G':
        case 'g':
            if (a > b)
                printf("%d is grater\n", a);
            else
                printf("%d is grater\n", b);
            break;
        case 'A':
        case 'a':
            printf("sum = %d", a + b);
            break;
        case 's':
        case 'S':
            printf("subtract = %d", a - b);
            break;
        case 'M':
        case 'm':
            printf("Multiplication = %d", a * b);
            break;
        case 'd':
        case 'D':
            printf("Divide = %d", a / b);
            break;
        case 'c':
        case 'C':
            if (a == b)
                printf("True");
            else
                printf("False");
            break;
        default:
            break;
        }
    }
    if (count == 3)
    {

        int len = strlen(value[2]);
        long long int i, org, temp, rev = 0, p;
        cx = value[1][0];
        long long int a1 = 0;
        int len2 = strlen(value[2]), g;
        g = len2 - 1;
        for (i = 0; i < len2; i++)
        {
            a1 = a1 + (value[2][i] - 48) * pow(10, g);
            g--;
        }
        printf("%lld",a1);
        org = a1;
        p = len - 1;
        switch (cx)
        {
        case 'R':
        case 'r':
            for (i = 1; i <= len; i++)
            {
                temp = a1 % 10;
                rev = rev + temp * pow(10, p);
                a1 = a1 / 10;
                p--;
            }
            if (rev == org)
            {
                printf("True");
            }
            else
            {
                printf("False");
            }
            break;
        }
    }
    return 0;
}