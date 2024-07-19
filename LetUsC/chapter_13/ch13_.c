/* Array element can be passed to a function by value,or by reference. */
#include<stdio.h>
void display1(int);
void display2(int*);
int main()
{
    int marks[] = {55,65,75,88,96,57,98};
    for(int i=0;i<=6;i++)
    {
        display1(marks[i]); //call by value 
    }
    printf("\n");
    for(int i=0;i<=6;i++)
    {
        display2(&marks[i]); //call by reference 
    }
    return 0;
}
void display1(int a)
{
    printf("%d ",a);
}
void display2(int *y)
{
    printf("%d ",*y);
}