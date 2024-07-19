/* To be able to  see what pointers have got to do with aarays,let us firts learn some pointer arithmetic. */
#include<stdio.h>
int main()
{
    int i=3,*x;
    float j=1.5,*y;
    char k='c',*z;
    printf("Value of i = %d \n",i);
    printf("Value of i = %f \n",j);
    printf("Value of i = %c \n",k);
    x=&i;y=&j;z=&k;
    printf("Original Address in x = %u\n",x);
    printf("Original Address in y = %u\n",y);
    printf("Original Address in z = %u\n",z);
    x++;y++;z++;
    printf("New address in x = %u \n",x);
    printf("New address in y = %u \n",y);
    printf("New address in z = %u \n",z);
    return 0;
}