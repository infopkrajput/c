#include <stdio.h>
void primeFactors(int);
int main()
{
    int n;
    printf("Enter the value of n : ");
    scanf("%d", &n);
    primeFactors(n);
    return 0;
}
void primeFactors(int x)
{
    int i = 2;
    while(x>1)
    {
        if(x%i==0)
        {
            printf("%d ", i);
            x= x/i;
        }
        else
        {
            i++;
        }
    }

}