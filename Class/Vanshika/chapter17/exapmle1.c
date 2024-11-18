#include <stdio.h>
#include "file.c"
int main()
{
    struct employee
    {
        int id;
        char name[20];
        float salary;
        address add;
    };

    struct employee e;
    printf("Enter the employee ID: ");
    scanf("%d", &e.id);
    printf("Enter the employee name: ");
    scanf("%s", e.name);
    printf("Enter the employee salary: ");
    scanf("%f", &e.salary);
    getchar();
    printf("Enter the address details: ");
    gets(e.add.address);
    printf("Enter the city :");
    gets(e.add.city);
    printf("Enter the state :");
    gets(e.add.state);
    printf("Enter the zip code :");
    scanf("%d", &e.add.pinCode);

    printf("Printing all details \n");
    printf("Employee ID: %d\n", e.id);
    printf("Employee Name: %s\n", e.name);
    printf("Employee Salary: %.2f\n", e.salary);
    printf("Address: %s, %s (%s) - %d\n", e.add.address, e.add.city,e.add.state,e.add.pinCode);

    return 0;
}