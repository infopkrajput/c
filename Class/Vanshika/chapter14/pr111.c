#include <stdio.h>
int main()
{
    int i,j=25;
    int *p;
    p = &j;
    printf("%d\n",*p);
    *p = j+5;
    printf("%d\n",*p);
    printf("%d\n",j);
    j = j + 5;
    printf("%d\n",*p);
    printf("%d\n",j);
    return 0;
}