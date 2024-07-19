/* If an array arr contains n elements, then write a program to check if arr[0]= arr[n-1],arr[1]=arr[n-2] and so on. */
#include<stdio.h>
int main()
{
    int n;
    int j=1,i,arr[n];
    printf("Enter the number that how many elements do you want to enter = ");
    scanf("%d",&n);
    for(i = 0;i < n;i++ )
    {
        printf("Enter the %d element = ",i+1);
        scanf("%d",&arr[i]);
    }
    for(i = 0;i < n;i++ )
    {
        if(arr[i]==arr[n-(i+1)])
        printf("Element number %d is  %d \n",i,arr[i]);
    }
    return 0;
}