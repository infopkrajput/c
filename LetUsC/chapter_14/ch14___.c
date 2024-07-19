/* Write a program to pick up the largest number from a 5 row by 5 column matrix. */
#include<stdio.h>
int main()
{
    int a[5][5] = {{50,70,89,45,12},{55,64,57,140,12},{23,43,89,22,13},{14,14,17,16,19},{43,3,6,8,10}};
    int i,j,big;
    big=a[0][0];
    for(i = 0; i<5;i++)
    {
        for(j = 0 ; j<5;j++)
        {
            if(a[i][j]>big)
            {
                big = a[i][j];
            }
        }
    }
    printf("Biggest Number is %d ",big);
    return 0;
}