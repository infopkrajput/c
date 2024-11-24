#include <stdio.h>
int main()
{
    int d,m,y;
    printf("Enter the date (DD/MM/YYYY): ");
    scanf("%d%*c%d%*c%d", &d, &m, &y);
    printf("Date entered: %d/%d/%d\n", d, m, y);
    return 0;
}