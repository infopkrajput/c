#include <stdio.h>
#include <string.h>
typedef struct myData
{
    char name[20];
    int age;
    float salary;
} stru;
void input(stru *d1);
void output(stru *d1);
int main()
{  
    stru e1 = {"Sanjay", 21, 45000};
    stru e2,e3;
    strcpy(e2.name,e1.name);
    // e2.name = e1.name;    
    e2.age = e1.age;
    e2.salary = e1.salary;
    output(&e1);
    output(&e2);
    e3 = e1;
    output(&e3);
    return 0;
}

void input(stru *d1)
{
    printf("Enter the name : ");
    gets(d1->name);
    printf("Enter the age : ");
    scanf("%d", &d1->age);
    printf("Enter the salary : ");
    scanf("%f", &d1->salary);
    getchar();
}
void output(stru *d1)
{
    printf("Name = %s\n", d1->name);
    printf("Age = %d\n", d1->age);
    printf("Salary = %.2f\n", d1->salary);
    printf("--------------------\n");
}