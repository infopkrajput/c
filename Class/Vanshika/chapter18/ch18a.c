#include <stdio.h>
int main()
{
    int d,m,y;
    printf("Enter the date: ");
    scanf("%d%*c%d%*c%d", &d, &m, &y);
    printf("Date : %d/%d/%d\n",d,m,y);
    return 0;
}