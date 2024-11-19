#include <stdio.h>
struct Date
{
    int day;
    int month;
    int year;
};
struct Employee
{
    int id;
    char name[20];
    struct Date doj;
};
int isLeapYear(int year)
{
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
    {
        return 1;
    }
    return 0;
}

int totalDays(struct Date date)
{
    int daysInMonths[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int totalDays = 0;

    for (int i = 0; i < date.year; i++)
    {
        if (isLeapYear(i))
        {
            totalDays += 366;
        }
        else
        {
            totalDays += 365;
        }
    }

    for (int i = 0; i < date.month - 1; i++)
    {
        totalDays += daysInMonths[i];
    }

    if (date.month > 2 && isLeapYear(date.year))
    {
        totalDays++;
    }

    totalDays += date.day;

    return totalDays;
}

int main()
{
    struct Employee e[] = {
        {101, "Yogesh", {5, 3, 2020}},
        {102, "Ashutosh", {15, 10, 2019}},
        {103, "Naveen", {25, 8, 2021}},
        {104, "Suresh", {12, 5, 2022}},
        {105, "Priya", {30, 9, 2023}},
        {106, "Priyanka", {18, 7, 2024}},
        {107, "Pooja", {22, 6, 2018}},
        {108, "Rajesh", {1, 12, 2026}},
        {109, "Priyanka", {15, 1, 2019}},
        {110, "Rahul", {25, 2, 2016}}};
    struct Date cd;
    printf("Enter the current date (DD/MM/YYYY): ");
    scanf("%d/%d/%d", &cd.day, &cd.month, &cd.year);
    int totalDaysOfCurrentyear = totalDays(cd);
    for (int i = 0; i < 10; i++)
    {
        int td = totalDays(e[i].doj);
        int yearsDiff = (totalDaysOfCurrentyear - td) / 365;
        if(yearsDiff >= 3)
        {
            printf("Employee ID: %d, Name: %s, date of joining: %d/%d/%d\n", e[i].id, e[i].name,e[i].doj.day,e[i].doj.month,e[i].doj.year );
        }
    }

    return 0;
}