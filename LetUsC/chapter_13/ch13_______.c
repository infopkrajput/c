/* The variable size can be also created by using a standard library function malloc().   */
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int max,i,*p;
    printf("Enter the array size = ");
    scanf("%d",&max);
    p=(int*)malloc(max*sizeof(int)); // this function have syntax in pointer max*size of the data type
    printf("Enter the element of the array = ");
    for(i=0;i<max;i++)
    {
        scanf("%d",&p[i]);
    }
    printf("Elements in the array = {");
    for(i=0;i<max;i++)
    {
        if(i==max-1)
        {
        printf("%d",p[i]);
        break;    
        }
        printf("%d,",p[i]);
    }
    printf("}");
    return 0;
}