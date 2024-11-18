#include <stdio.h>
#include <stdlib.h>
#define MAX 450
struct student
{
    int rollNo;
    char name[20];
    char department[20];
    char course[20];
    int yearOfJoin;
};
void printByYear(struct student *s, int year);
void printByRollNo(struct student *s, int rn);
int main()
{
    struct student s[MAX] = {
        {1, "Sumit", "Biology", "MBBS", 2020},
        {2, "Rahul", "Chemistry", "MBA", 2019},
        {3, "Rajesh", "Physics", "BCA", 2021},
        {4, "Priya", "Mathematics", "MCA", 2018},
        {5, "Ashutosh", "Computer Science", "MCA", 2019},
        {6, "Pooja", "English", "MBA", 2020},
        {7, "Suresh", "Biology", "MBBS", 2019},
        {8, "Priyanka", "Chemistry", "MBA", 2020},
    };
    int n;
    while (1)
    {
        printf("1. Print all data by year\n");
        printf("2. Print all data by Roll No.\n");
        printf("3. Exit\n");
        scanf("%d", &n);
        switch (n)
        {
        case 1:
            int year;
            printf("Enter the year of joining: ");
            scanf("%d", &year);
            printf("Students who joined in the year %d:\n", year);
            printByYear(s, year);
            break;
        case 2:
            int rn;
            printf("Enter the roll No. : ");
            scanf("%d", &rn);
            printf("Students who joined in the year %d:\n", rn);
            printByRollNo(s, rn);
            break;
        case 3:
            exit(1);
            break;

        default:
            break;
        }
    }

    return 0;
}
void printByYear(struct student *s, int year)
{

    for (int i = 0; i < MAX; i++)
    {
        // Check if the year of joining matches the input year
        if (s[i].yearOfJoin == year)
        {
            printf("Roll no :       %d\n", s[i].rollNo);
            printf("Name :          %s\n", s[i].name);
            printf("Department :    %s\n", s[i].department);
            printf("Course :        %s\n", s[i].course);
            printf("Year of Joining %d\n", s[i].yearOfJoin);
            printf("------------------\n\n");
        }
    }
}

void printByRollNo(struct student *s, int rn)
{

    for (int i = 0; i < MAX; i++)
    {
        if (s[i].rollNo == rn)
        {
            printf("Roll no :       %d\n", s[i].rollNo);
            printf("Name :          %s\n", s[i].name);
            printf("Department :    %s\n", s[i].department);
            printf("Course :        %s\n", s[i].course);
            printf("Year of Joining %d\n", s[i].yearOfJoin);
            printf("------------------\n\n");
        }
    }
}