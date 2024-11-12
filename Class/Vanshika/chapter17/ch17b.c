#include <stdio.h>
int main()
{
    struct dateOfBirth
    {
        int date;
        int month;
        int year;
    };
    struct employee
    {
        int id;
        char name[20];
        int age;
        float salary;
        struct dateOfBirth dob;
    };
    struct employee e;
    printf("Enter the employee ID: ");
    scanf("%d", &e.id);
    printf("Enter the employee name: ");
    scanf("%s", e.name);
    printf("Enter the employee age: ");
    scanf("%d", &e.age);
    printf("Enter the employee salary: ");
    scanf("%f", &e.salary);
    printf("Enter the date of birth (DD/MM/YYYY): ");
    scanf("%d/%d/%d", &e.dob.date, &e.dob.month, &e.dob.year);
    printf("\nEmployee Details:\n");
    printf("ID: %d\n", e.id);
    printf("Name: %s\n", e.name);
    printf("Age: %d\n", e.age);
    printf("Salary: %.2f\n", e.salary);
    printf("Date of Birth: %d/%d/%d\n", e.dob.date, e.dob.month, e.dob.year);

    return 0;
}