/* Accessing an array element in different ways.
an array is called in 4 ways for example:
1. num[i]
2. *(num+i)
3. *(i+num)
4. i[num]
*/
#include<stdio.h>
int main()
{
   int num[] = {24,34,12,44,56,17};
   int i;
   for(i=0;i<=5;i++)
   {
    printf("Address = %u ",&num[i]);
    printf("Element = %d %d ",num[i],*(num+i));
    printf(" %d %d \n",i[num],*(i+num));
   }
 
    return 0;
}