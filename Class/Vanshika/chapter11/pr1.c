#include <stdio.h>
#include <math.h>
#define PI 4.5
#define VARIABLE int
#define MERAPRINT printf
#define AND &&
#define OR &&
#define BIGFIND(A, B) (A > B ? A : B)
#define sq(a) (sqrt(a))
int main()
{
    int a = 7, b = 2;
    int big = BIGFIND(a, b);
    int big1 = 7 > 2 ? 7 : 2;
    int big2 = a > b ? a : b;
    int u = sq(25);
    printf("Big = %d", big);
    return 0;
}
