#include <stdio.h>
#include <string.h>
int main()
{
    char str[8];
    printf("Enter The number : ");
    scanf("%s",&str);// 12
    int temp = str[0] - 48; // '1' - 48
    int temp2 = str[1] - 48; // '2' - 48
    int x = temp*10 + temp2;
    printf("%d",x);    
    return 0;
}