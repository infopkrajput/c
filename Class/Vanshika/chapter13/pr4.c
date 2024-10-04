#include <stdio.h>
void funCopy(int);
void funAddress(int*);
int main()
{
    int arr[4] = {5, 7, 2, 5};
    for(int i = 0;i<4;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
    funAddress(arr);
    printf("\n");
    for(int i = 0;i<4;i++)
    {
        printf("%d ",arr[i]);
    }
  
    return 0;
}
void funCopy(int x)
{
    printf("while copy %d\n",x);
    x = 6;
}
void funAddress(int *x)
{
    *x = 1;
    *(x+1) = 2;
    *(x+2) = 3;
    *(x+3) = 4;
    for(int i = 0;i<4;i++)
    {
        printf("%d ",*(x+i));
    }

}