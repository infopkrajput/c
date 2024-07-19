/* Write a program to find a sequence matrix is symmetric */
#include<stdio.h>
int main()
{
    int arr[3][3],i,j,count=0;
    printf("Enter the elements of the array = ");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    printf("Entered matrix is \n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if(arr[i][j]==arr[j][i])
            count++;
        }
        printf("\n");
    }
    if(count==9)
        printf("This matrix is symmetric\n");
    else
        printf("this matrix is not symmetric\n");
    return 0;
}