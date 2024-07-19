/* Write a program to add 6x6 matrix. */
#include<stdio.h>
int main()
{
    int mat1[6][6],mat2[6][6],mat3[6][6],i,j;
    printf("Enter the value of matrix no.1 \n");
    for(i=0;i<6;i++)
    {
        for(j=0;j<6;j++)
        {
            scanf("%d",&mat1[i][j]);
        }
    }
    printf("Your Entered matrix is \n");
    for(i=0;i<6;i++)
    {
        for(j=0;j<6;j++)
        {
            printf("%d ",mat1[i][j]);
        }
        printf("\n");
    }
    printf("Enter the value of matrix no.2 \n");
    for(i=0;i<6;i++)
    {
        for(j=0;j<6;j++)
        {
            scanf("%d",&mat2[i][j]);
        }
    }
    printf("Your Entered matrix is \n");
    for(i=0;i<6;i++)
    {
        for(j=0;j<6;j++)
        {
            printf("%d ",mat2[i][j]);
        }
        printf("\n");
    }
    printf("Sum of both matrix is \n");
    for(i=0;i<6;i++)
    {
        for(j=0;j<6;j++)
        {
            mat3[i][j] = mat1[i][j]+mat2[i][j]; 
        }
    }
    for(i=0;i<6;i++)
    {
        for(j=0;j<6;j++)
        {
            printf("%d ",mat3[i][j]);
        }
        printf("\n");
    }
    return 0;
}