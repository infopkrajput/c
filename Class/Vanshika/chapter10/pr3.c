#include <stdio.h>
void CommonFactors(int, int);
int main()
{
    int n, i = 2;
    printf("Enter the value of n : ");
    scanf("%d", &n);
    CommonFactors(n, i);
    return 0;
}
void CommonFactors(int n, int i)
{
    if (n != 1)
    {
        if (n % i == 0)
        {
            printf("%d ", i);
            n = n / i;
        }
        else
        {
            i++;
        }
        CommonFactors(n, i);
    }
}