#include <stdio.h>
#include <string.h>
#define MAX 4
void printfAll();
void enterdetail();
struct employee
{
    int id;
    char name[20];
    char add[50];
    char position[20];
    int salary;
};
struct employee e[MAX] =
    {
        {100, "Pushpendra Kumar", "Tikona Nagla Aligarh-202001", "Manager", 20000},
        {101, "Hemant Kumar", "Gandhi Nagar Aligarh-202001", "Engineer", 15000},
        {103, "Kishan Kumar", "Saroj Nagar Aligarh-202001", "Supervisor", 18000},
        {104, "Vimal Saini", "Kishanpur Aligarh-202001", "Engineer", 16000},
};
int main()
{
    // enterdetail();
    // printfAll();
    while (1)
    {
        int op, ed, i;
        printf("\n-----------------------------------\n");
        printf("Choose the option.\n");
        printf("1.Print Employee Full Detail.\n");
        printf("2.Print Employees By their salary condition.\n");
        printf("3.Position of employee.\n");
        printf("4.Exit\n");
        printf("-----------------------------------\n>");
        scanf("%d", &op);
        switch (op)
        {
        case 1:
            printf("Enter the employee id: ");
            scanf("%d", &ed);
            for (i = 0; i < MAX; i++)
            {
                if (e[i].id == ed)
                {
                    printf("\nThe id of employee         : %d\n", e[i].id);
                    printf("The name of employee       : %s\n", e[i].name);
                    printf("The add of employee        : %s\n", e[i].add);
                    printf("The position of employee   : %s\n", e[i].position);
                    printf("The salary of employee     : %d\n", e[i].salary);
                    goto ex1;
                }
                
            }
            printf("\nId Not Match in database\n");
            ex1:
            break;
        case 2:
            int ss, es,count=0;
            printf("Enter the starting salary : ");
            scanf("%d", &ss);
            printf("Enter the Ending salary : ");
            scanf("%d", &es);
            for (i = 0; i < MAX; i++)
            {
                if (e[i].salary > ss && e[i].salary < es)
                {
                    printf("\nThe id of employee         : %d\n", e[i].id);
                    printf("The name of employee       : %s\n", e[i].name);
                    printf("The add of employee        : %s\n", e[i].add);
                    printf("The position of employee   : %s\n", e[i].position);
                    printf("The salary of employee     : %d\n", e[i].salary);
                    count++;
                }
            }
            if(count==0)
            {
                printf("\nSalary not match in database.\n");
            }
            break;
        case 3:
            char pos[20];
            int count1 = 0;
            printf("Enter the position : ");
            scanf("%s", pos);
            for (i = 0; i < MAX; i++)
            {
                if (strcmp(e[i].position, pos) == 0)
                {
                    printf("\nThe id of employee         : %d\n", e[i].id);
                    printf("The name of employee       : %s\n", e[i].name);
                    printf("The add of employee        : %s\n", e[i].add);
                    printf("The position of employee   : %s\n", e[i].position);
                    printf("The salary of employee     : %d\n", e[i].salary);
                    count1++;
                }
            }
            if(count1==0)
            {
                printf("\nPosition not match in database.\n");
            }
            break;
        case 4:
            goto ex;
        }
    }
ex:
    return 0;
}
void enterdetail()
{
    int i;
    for (i = 0; i < MAX; i++)
    {
        printf("\nEnter the id of employee %d       : ", i + 1);
        scanf("%d", &e[i].id);
        getchar();
        printf("Enter the name of employee %d       : ", i + 1);
        gets(e[i].name);
        printf("Enter the address of employee %d    : ", i + 1);
        gets(e[i].add);
        printf("Enter the position of employee %d   : ", i + 1);
        gets(e[i].position);
        printf("Enter the Salary of employee %d     : ", i + 1);
        scanf("%d", &e[i].salary);
    }
}
void printfAll()
{
    int i;
    for (i = 0; i < MAX; i++)
    {
        printf("The id of employee %d        : %d\n", i + 1, e[i].id);
        printf("The name of employee %d      : %s\n", i + 1, e[i].name);
        printf("The add of employee %d       : %s\n", i + 1, e[i].add);
        printf("The position of employee %d  : %s\n", i + 1, e[i].position);
        printf("The salary of employee %d    : %d\n", i + 1, e[i].salary);
    }
}