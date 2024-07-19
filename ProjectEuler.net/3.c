/* 

The prime factors of 13195 are 5, 7, 13 and 29.
What is the largest prime factor of the number 600851475143?

*/ 

#include<stdio.h>
int largest_prime(long long int n);
int main()
{
    long long int n = 600851475143;
    int large = largest_prime(n);
    printf("%d\n", large);
    return 0;
}
int largest_prime(long long int n)
{
    int i = 2;
    int lastPrinted = 0;
    while (n!=1)
    {
        if(n%i==0)
        {
            n = n/i;
        }
        else
        {
            i++;
        }
    }
    return i;
}