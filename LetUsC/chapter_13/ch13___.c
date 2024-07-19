// #include<stdio.h>
// #include<stdlib.h>
// int main()
// {
//     int max,i;
//     printf("Enter the array size = ");
//     scanf("%d",&max);
//     int*p=(int*)malloc(max*sizeof(int));
//     for(i=0;i<=4;i++)
//     {
//         scanf("%d",&p[i]);
//     }
//     return 0;
// }
/* the way  a pointer can be increamented, it can be decremented as well,to point to earlier locations.thus the following operations can be perfoarmed on a pointer 
(a) Addition of a number to a pointer.
(b) Subtraction of a pointer from a pointer.
(c) Subtraction of one pointer from another.
(d) Comparison of two pointer variable.
*/
#include<stdio.h>
int main()
{
    int arr[] = {10,20,30,40,50,60,70,80};
    int i=4,*j,*k,*x,*y;
    j=&i;
    printf("For j\n");
    printf("Original address of i = %d\n",j); //Address of i 
    j=j+9;
    printf("New Address Of i      = %d\n\n",j); //while we add any number in the pointer it add the number with multiply of the data typesize
    printf("For k\n");
    k=&i;
    printf("Original address of i = %d\n",k); //Address of i
    k=k-3;
    printf("New Address Of i      = %d\n\n",k); //while we less any number in the pointer it less the number with multiply of the data type size
    printf("For x and y\n");
    x=&arr[1];
    y=&arr[5];
    printf("x = %d\n",*x);  //Value at the address 
    printf("y = %d\n",*y);  //Value at the address 
    printf("Address of x = %d\n",x);    //Address of the element in the array
    printf("Address of y = %d\n",y);    //Address of the element in the array
    printf("y-x = %d\n",y-x);   //output is in the bytes 
    printf("*y-*x = %d\n\n",*y-*x);   //subtraction of the element 
    j=&arr[4];
    k=&arr[0]+4; 
    printf("%d\n",j);
    printf("%d\n",k);
    printf("%d\n",*j);
    printf("%d\n",*k);
    return 0;
}