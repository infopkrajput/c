#include <stdio.h>
#include "pr3.c"

#define MAX 40
int main()
{
#if MAX < 50
    printf("This code is made for All Machines");
#elif MAX > 50 && MAX < 60
    printf("Yes This will work ");
#else
    printf("This work or all");
#endif

    return 0;
}