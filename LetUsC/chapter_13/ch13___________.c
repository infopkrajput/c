/* An Array contains 10 integers.Receive the number to be searched in the array as input. Write a program to search this  */
#include<stdio.h>
int main()
{
    int arr[10]={1,2,3,4,4,5,5,7,7,7};
    int i,n,count=0;
    printf("Enter the number you want to search in the array = ");
    scanf("%d",&n);
    for(i=0;i<=9;i++)
    {
        if(n==arr[i])
        {
            count++;      
        }
    }
    if(count>0)
    printf("The digit %d is %d times in the array ",n,count);
    else
    printf("This number is not in the array ");
    return 0;
}


