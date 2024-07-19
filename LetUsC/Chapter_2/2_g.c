// In a town, the percentage of men is 52. The percentage of total literacy is 48. If total percentage of literate men is 35 of the total population, write a program to find the total number of illiterate men and women if the population of the town is 80,000.
#include<stdio.h>
int main()
{
    int men,women,lit_men,ill_men,lit_women,ill_women,total=80000,temp;
    men = total*52/100;
    printf("Total men = %d\n",men);
    women = total-men;
    printf("Total women = %d\n",women);
    lit_men = total*35/100;
    printf("Total literate men = %d\n",lit_men);
    lit_women = women - lit_men;
    printf("Total literate women = %d\n",lit_women);
    ill_men = men - lit_men;
    printf("Total illiterate men = %d\n",ill_men);
    ill_women = women - lit_women;
    printf("Total illiterate women = %d\n",ill_women);
    return 0;
}