/*
population of a town today is 100000. The population has increased steadily at the rate of 10 % per year for last 10 years. Write a program to determine the population at the end of each year in the last decade.
*/
#include <stdio.h>
int main()
{
    int i, pop = 100000, newp;
    for (i = 1; i <= 10; i++)
    {
        newp = pop * 10 / 110;
        pop = pop - newp;
        printf("Population of last %d year = %d \n", i, pop);
    }
    return 0;
}