/* Create a Structure and input employee id and name and print it. */
#include<stdio.h>
struct employee
{
    int id;
    char name[100];
};
int main()
{
    struct employee e;
    printf("%d \n",sizeof(struct employee));
    printf("Enter the employee id : ");
    scanf("%d",&e.id);
    getchar();
    printf("Enter the employee name : ");
    scanf("%[^\n]s",&e.name);
    printf("Employee id and name is %d - %s\n",e.id,e.name);
    printf("%d",sizeof(struct employee));
    return 0;
}