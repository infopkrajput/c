#include <stdio.h>
int main()
{
    int arr[] = {34,6756,445,54,75,56};
    int *p;
    p = arr;
    for(int i = 0;i<6;i++)
    {
        printf("Address = %u value = %d\n",p,*p);
        p++;
    }
    return 0;
}