#include <stdio.h>
struct cricket
{
    char name[20];
    int age;
    int noOfTestMatches;
    int run;
};
int main()
{
    struct cricket a[] = {{"Ram", 21, 2, 54},
                          {"Aman", 25, 6, 50},
                          {"Vishal", 34, 3, 45},
                          {"Danish", 24, 7, 76},
                          {"Vansh", 35, 3, 56},
                          {"Vishu", 23, 4, 45},
                          {"Shaan", 37, 8, 29},
                          {"Raj", 44, 7, 67},
                          {"Gaurav", 22, 5, 37},
                          {"Rahul", 33, 8, 45}};
    printf("Before Sorting\n");
    for (int i = 0; i < 10; i++)
    {
        printf("Name: %s, Age: %d, No of Test Matches: %d, Runs: %d\n", a[i].name, a[i].age, a[i].noOfTestMatches, a[i].run);
    }
    struct cricket t;
    for (int i = 0; i < 10; i++)
    {
        for (int j = i + 1; j < 10; j++)
        {
            if (a[j].run < a[i].run)
            {
                t = a[j];
                a[j] = a[i];
                a[i] = t;
            }
        }
    }
    printf("\nAfter Sorting by Runs\n");
    for (int i = 0; i < 10; i++)
    {
        printf("Name: %s, Age: %d, No of Test Matches: %d, Runs: %d\n", a[i].name, a[i].age, a[i].noOfTestMatches, a[i].run);
    }
    return 0;
}