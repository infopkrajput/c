#include <stdio.h>
int main()
{
    char name[10][20];
    int age[10];
    float salary[10];
    for (int i = 0; i < 5; i++)
    {
        printf("Enter the name of employee : ");
        gets(name[i]);
        printf("Enter the age of employee : ");
        scanf("%d", &age[i]);
        printf("Enter the Salary of employee : ");
        scanf("%f", &salary[i]);
        getchar();
    }
    for (int i = 0; i < 5; i++)
    {
        printf("Name - %s\n", name[i]);
        printf("Age - %d\n", age[i]);
        printf("Salary - %f\n", salary[i]);
    }
    return 0;
}