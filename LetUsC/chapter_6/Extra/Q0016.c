/*

Write a program to print the pattern.
        * 
      * * * 
    * * * * * 
  * * * * * * * 
* * * * * * * * * 
  * * * * * * * 
    * * * * * 
      * * * 
        * 

*/
#include <stdio.h>
int main()
{
    int i, j, k, row;
    printf("Enter the row = ");
    scanf("%d", &row);
    row = row * 2;
    for (i = 1; i <= row; i++)
    {
        if (i % 2 != 0)
        {
            for (j = row-1; j >= i+1; j--)
            {
                printf(" ");
            }
            for (k = 1; k <= i; k++)
            {
                printf("* ");
            }
            printf("\n");
        }
    }
    row = row - 2;
    int temp = row;
    for (i = 1; i <= row; i++)
    {
        if (temp % 2 != 0)
        {
            for(k=1;k<=i;k++)
            {
                printf(" ");
            }
            for(j=row;j>=i;j--)
            {
                printf("* ");
            }
            printf("\n");
        }
        temp --;
    }
    return 0;
}