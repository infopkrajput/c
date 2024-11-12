#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct employee
{
    char name[50];
    int age;
    float salary;
};
struct employee a;
void printEmployee(struct employee e);
void enterEmployee(struct employee *e);
void deleteEmployee(struct employee *e,int *x);
int main()
{
    struct employee e[50];
    int n;
    int x = 0;
    while (1)
    {
        printf("1. Enter the employee details: \n");
        printf("2. print the employee details: \n");
        printf("3. Delete employee: \n");
        printf("4. exit \n");
        scanf("%d", &n);
        switch (n)
        {
        case 1:
            enterEmployee(&e[x]);
            x++;
            break;
        case 2:
            for (int i = 0; i < x; i++)
            {
                printEmployee(e[i]);
            }
            break;
        case 3:
            deleteEmployee(e,&x);
            break;
        case 4:
            exit(1);
            break;
        default:
            printf("Invalid choice\n");
            break;
        }
    }

    return 0;
}
void printEmployee(struct employee e)
{
    printf("Name: %s\n", e.name);
    printf("Age: %d\n", e.age);
    printf("Salary: %.2f\n", e.salary);
    printf("\n");
}
void enterEmployee(struct employee *e)
{
    printf("Enter name: ");
    scanf("%s", e->name);
    printf("Enter age: ");
    scanf("%d", &e->age);
    printf("Enter salary: ");
    scanf("%f", &e->salary);
}
void deleteEmployee(struct employee *e,int *x)
{
    char name[20];
    printf("Enter the name which you want to delete : ");
    scanf("%s", name);
    for (int i = 0; i < *x; i++)
    {
        if (strcmp(e[i].name, name) == 0)
        {
            int j;
            for (j = i; j < *x - 1; j++)
            {
                e[j] = e[j + 1];
            }
            *x = *x - 1;
        }
    }
    printf("Employee delete successfully!\n");
}