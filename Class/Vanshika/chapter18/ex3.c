#include <stdio.h>
int main()
{
    int x;
    char str[20];
    // printf("%s",str);
    // printf("%d\n",x);
    
    fgets(str,20,stdin);
    printf("%s %d\n",str,x);
    printf("%u \n",&str);  
    printf("%u \n",&x);  
    return 0;
}