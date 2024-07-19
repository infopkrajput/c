/* 

Write a program to check union.

*/
#include<stdio.h>
union test
{
    int x;
    char arr[4];
};
int main()
{
    union test e;
    e.x = 512
    ;
    printf("%d %d %d %d\n",e.arr[0],e.arr[1],e.arr[2],e.arr[3]);
    return 0;
}