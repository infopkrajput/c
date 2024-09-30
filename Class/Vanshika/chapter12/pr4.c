#include <stdio.h>
#define MAX 1000
#define YES 0
int main()
{
    printf("mAX = %d",MAX);

    #define MAX 100
    printf("Max = %d",MAX);

// #undef YES

#ifdef YES
    if(YES)
    {
        printf("Working fine ");
    }
    else
    {
        printf("Not working");
    }
#endif
    return 0;
}