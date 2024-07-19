#include<stdio.h>
int main()
{
    int arr[4][2] = {1234,56, 1212,33, 1434,80, 1312,78};
//  int arr[4][2] = {{1234,56},{1212,33},{1434,80},{1312,78}}; we can write like this
    int (*p)[2];
    int *pre,i,j;
    for(i=0;i<4;i++)
    {
        p=&arr[i];
        pre = *p;
        for(j=0;j<2;j++)
        {
            printf("%d ",*(pre+j));
        }
        printf("\n");
    }
    return 0;
}