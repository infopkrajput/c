/* Implement the insertion sort algorithm on a set of 25 numbers. */
#include<stdio.h>
int main()
{
    int arr[25]={25,24,23,22,21,1,2,3,4,5,6,7,8,9,10,20,19,18,17,16,15,14,13,12,11};
    int i,j,a;
    printf("Array before sort = ");
    for(i=0;i<25;i++)
    {
        printf("%d ",arr[i]);
    }
    for(i=0;i<25;i++)
    {
        for(j=0;j<25;j++)
        {
            if(arr[i]<arr[j])
            {
                a=arr[i];
                arr[i]=arr[j];
                arr[j]=a;
            }
        }
    }
    printf("\n\nArray after sort = ");
    for(i=0;i<25;i++)
    {
        printf("%d ",arr[i]);
    }

    return 0;
}