/* Write a program to obtain transpose of a 3x5 matrix. The transpose of a matrix is obtained by exchanging the elements of each row with the elements of the corresponding column. */
#include<stdio.h>
int main()
{
    int mat1[3][5] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
    int mat2[5][3];
    int i,j;
    for(i=0;i<3;i++)
    {
        for(j=0;j<5;j++)
        {
            mat2[j][i] = mat1[i][j];
        }
    }
    for(i=0;i<5;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d ",mat2[i][j]);
        }
        printf("\n");
    }
    return 0;
}