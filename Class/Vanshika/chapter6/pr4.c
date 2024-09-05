#include <stdio.h>
int main()
{
    int a, b, n,i,count;
    for (i = 1; i <= 9999; i++)
    {
        count = 0;
        for (a = 1; a * a * a <= 9999; a++)
        {
            for (b = a; b * b * b <= 9999; b++)
            {
                if (a * a * a + b * b * b == i)
                {
                    // printf("%d,%d==%d\n",a,b,i);
                    count++;
                }
            }
        }
        if(count == 2)
        {
            for(a = 1;a<=i;a++)
            {
                for(b = a;b<=i;b++)
                {
                    if(a*a*a + b *b*b ==i)
                    {
                        printf("%d %d == %d\n",a,b,i);
                    }
                }
            }
            printf("\n");
        }
    }
    return 0;
}