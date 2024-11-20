#include <stdio.h>
#include <string.h>
int main()
{
    struct employee
    {
        char name[20];
        int age;
    };
    struct employee e1 = {"Rahul",25};
    printf("name = %s age = %d\n",e1.name,e1.age);
    struct employee e2;
    e2.age = e1.age;
    strcpy(e2.name,e1.name);
    printf("name = %s age = %d\n",e2.name,e2.age);

    return 0;
}