/* Write a program to multiply aby two 3x3 matrix. */
#include<stdio.h>
int main()
{
    int mat1[3][3],mat2[3][3],mat3[3][3],i,j;
    printf("Enter the value of matrix no.1 \n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&mat1[i][j]);
        }
    }
    printf("Your Entered matrix is \n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d ",mat1[i][j]);
        }
        printf("\n");
    }
    printf("Enter the value of matrix no.2 \n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&mat2[i][j]);
        }
    }
    printf("Your Entered matrix is \n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d ",mat2[i][j]);
        }
        printf("\n");
    }
    printf("Sum of both matrix is \n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            mat3[i][j] = mat1[i][j]*mat2[i][j]; 
        }
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d ",mat3[i][j]);
        }
        printf("\n");
    }
    return 0;
}