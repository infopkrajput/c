#include<stdio.h>
int main()
{
    int a,b;
    for(a = 1;a<5;a++)
    {

        for(b=a;b<4;b++)
        {
            printf("%d %d\n",a,b);
        }
    }
    return 0;
}