/*
Given three variables x , y , z write a function to circularly shift their values to right. In other words if x = 5, y = 8, z = 10, after circular shift y = 5,z = 8, x = 10. Call the function with variables a , b , c to circularly shift values
*/
#include<stdio.h>
void shift(int,int,int);
int main()
{
    int x,y,z;
    printf("Enter the values of x,y,z :");
    scanf("%d%d%d",&x,&y,&z);
    printf("Entered x,y & z's values are : \n");
    printf("x = %d y = %d z = %d\n",x,y,z);
    shift(x,y,z);
    return 0;
}
void shift(int x,int y,int z)
{
    int i,t;
    printf("After Shift the values :\n");
    for(i=1;i<=3;i++)
    {
        t = z;
        z = y;
        y = x;
        x = t;
        printf("x = %d y = %d z = %d\n",x,y,z);
    }
}