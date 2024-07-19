/* Write a program to copy the contents of a 5-element integer array into another array in reverse order. */
#include<stdio.h>
int main()
{
    int arr1[5]={1,2,3,4,5},arr2[5],i;
    for(i=0;i<=4;i++)
    {
        printf("%d ",arr1[i]);
        arr2[4-i]=arr1[i];
    }
    printf("\n");
    for(i=0;i<=4;i++)
    {
        printf("%d ",arr2[i]);
    }
    return 0;
}