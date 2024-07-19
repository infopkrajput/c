/*
In the 'CUSTOMER.DAT' there are 10 records with the following structure:
struct date
    {
        int d, m, y;
    };
struct employee
    {
        int empcode; char empname[30]; struct date join_date; float salary;
    };
Write a program to read these records, arrange them in ascending order by join_date and write them to target file.
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
int main()
{
    struct date
    {
        int d, m, y;
    };
    struct employee
    {
        int empcode;
        char empname[30];
        struct date join_date;
        float salary;
    };
    struct employee e;
    FILE *p, *q;
    int choice, empc;
    while (1)
    {
        printf("\n1. Print all employee. \n");
        printf("2. Print Specific employee. \n");
        printf("3. Add Employee. \n");
        printf("4. Remove Employee. \n");
        printf("5. Sort by name. \n");
        printf("6. Sort by Joining date. \n");
        printf("7. Exit \n");
        printf("==> ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            p = fopen("EMPLOYEE.DAT", "r");
            while (fread(&e, sizeof(e), 1, p) == 1)
            {
                printf("Employee code - %d\n", e.empcode);
                printf("Employee Name - %s\n", e.empname);
                printf("Employee Join Date - %d/%d/%d\n", e.join_date.d, e.join_date.m, e.join_date.y);
                printf("Employee Salary - %.2f\n\n", e.salary);
            }
            fclose(p);
            break;
        case 2:
            int match = 0;
            printf("Enter the employee code - ");
            scanf("%d", &empc);
            p = fopen("EMPLOYEE.DAT", "r");
            while (fread(&e, sizeof(e), 1, p) == 1)
            {
                if (empc == e.empcode)
                {
                    printf("Employee code - %d\n", e.empcode);
                    printf("Employee Name - %s\n", e.empname);
                    printf("Employee Join Date - %d/%d/%d\n", e.join_date.d, e.join_date.m, e.join_date.y);
                    printf("Employee Salary - %.2f\n", e.salary);
                    match = 1;
                }
            }
            fclose(p);
            if (match == 0)
            {
                printf("Employee code not found in data.\n");
            }
            break;
        case 3:
            p = fopen("EMPLOYEE.DAT", "a");
            printf("Enter employee code - ");
            scanf("%d", &e.empcode);
            getchar();
            printf("Enter employee Name - ");
            gets(e.empname);
            printf("Enter employee Joining date (DD/MM/YYYY) - ");
            scanf("%d/%d/%d", &e.join_date.d, &e.join_date.m, &e.join_date.y);
            printf("Enter employee Salary - ");
            scanf("%f", &e.salary);
            fwrite(&e, sizeof(e), 1, p);
            fclose(p);
            break;
        case 4:
            printf("Enter employee code - ");
            scanf("%d", &empc);
            p = fopen("EMPLOYEE.DAT", "r");
            q = fopen("temp", "w");
            while (fread(&e, sizeof(e), 1, p) == 1)
            {
                if (empc == e.empcode)
                {
                    printf("Employee delete Successfully\n");
                }
                else
                {
                    fwrite(&e, sizeof(e), 1, q);
                }
            }
            fclose(p);
            fclose(q);
            remove("EMPLOYEE.DAT");
            rename("temp", "EMPLOYEE.DAT");
            break;
        case 5:
        {
            int max = 0;
            p = fopen("EMPLOYEE.DAT", "r");
            while (fread(&e, sizeof(e), 1, p) == 1)
            {
                max++;
            }
            fclose(p);
            struct employee tempemp[max];
            struct employee tempem;
            p = fopen("EMPLOYEE.DAT", "r");
            int i = 0, j;
            while (fread(&e, sizeof(e), 1, p) == 1)
            {
                tempemp[i] = e;
                i++;
            }
            fclose(p);
            for (i = 0; i < max; i++)
            {
                for (j = i + 1; j < max; j++)
                {
                    if (strcmp(tempemp[i].empname, tempemp[j].empname) > 0)
                    {
                        tempem = tempemp[i];
                        tempemp[i] = tempemp[j];
                        tempemp[j] = tempem;
                    }
                }
            }
            p = fopen("EMPLOYEE.DAT", "w");
            for (i = 0; i < max; i++)
            {
                fwrite(&tempemp[i], sizeof(tempemp[i]), 1, p);
            }
            fclose(p);
            printf("Arrange successfully\n");
            break;
        }
        case 6:
        {
            int max = 0;
            p = fopen("EMPLOYEE.DAT", "r");
            while (fread(&e, sizeof(e), 1, p) == 1)
            {
                max++;
            }
            fclose(p);
            struct employee tempemp[max];
            struct employee tempem;
            p = fopen("EMPLOYEE.DAT", "r");
            int i = 0, j;
            while (fread(&e, sizeof(e), 1, p) == 1)
            {
                tempemp[i] = e;
                i++;
            }
            fclose(p);
            for (i = 0; i < max; i++)
            {
                for (j = i + 1; j < max; j++)
                {
                    if (tempemp[i].join_date.y > tempemp[j].join_date.y)
                    {
                        tempem = tempemp[i];
                        tempemp[i] = tempemp[j];
                        tempemp[j] = tempem;
                    }
                    else if (tempemp[i].join_date.y == tempemp[j].join_date.y)
                    {
                        if (tempemp[i].join_date.m > tempemp[j].join_date.m)
                        {
                            tempem = tempemp[i];
                            tempemp[i] = tempemp[j];
                            tempemp[j] = tempem;
                        }
                        else if (tempemp[i].join_date.m == tempemp[j].join_date.m && tempemp[i].join_date.d >= tempemp[j].join_date.d)
                        {
                            tempem = tempemp[i];
                            tempemp[i] = tempemp[j];
                            tempemp[j] = tempem;
                        }
                    }
                }
            }
            p = fopen("EMPLOYEE.DAT", "w");
            for (i = 0; i < max; i++)
            {
                fwrite(&tempemp[i], sizeof(tempemp[i]), 1, p);
            }
            fclose(p);
            printf("Arrange successfully\n");
            break;
        }
        case 7:
            exit(1);
        default:
            printf("Please enter a valid option\n");
        }
    }
    return 0;
}