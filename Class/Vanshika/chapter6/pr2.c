// Chapter 6 e
#include <stdio.h>
int main()
{
    int l, b, h, i,count = 0;
    for (l = 1; l <= 30; l++)
    {
        for(b=1;b<=30;b++)
        {
            for(h=1;h<=30;h++)
            {
                if(h*h == l*l + b*b)
                {
                    printf("%dx%d = %dx%d + %dx%d\n",h,h,l,l,b,b);
                    count++;
                }
            }
        }
    }
    printf("Total count: %d\n",count);
    return 0;
}