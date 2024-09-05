#include<stdio.h>
#include<math.h>
int main()
{
    int i;
    int p,n;
    float a,r,q;
    for(i = 1 ; i<=10;i++)
    {
        printf("Enter the principle of amount : ");
        scanf("%d",&p);
        printf("Enter the number of years : ");
        scanf("%d",&n);
        printf("Enter the rate of interest : ");
        scanf("%f",&r);
        printf("Enter the compounding per year : ");
        scanf("%f",&q);
        a = p * pow((1 + r/q),n);
        printf("The amount after %d years at %.2f%% interest with %f compounding per year is : %.2f\n",n,r,q,a);
    }
    return 0;
}