#include <stdio.h>
#include <string.h>
char *months[] = {"Jan", "Feb", "Mar", "Apr", "May", "June", "July", "Aug", "Sep", "Oct", "Nov", "Dec"};
int monthsInDates[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
struct date
{
    int day;
    char month[5];
    int year;
};
int checkEqual(struct date *today1, struct date *today2);
void checkDays(struct date *today1, struct date *today2);
int main()
{
    struct date today1 = {21, "Mar", 2004};
    struct date today2 = {20, "Mar", 2024};
    checkDays(&today1, &today2);
    return 0;
}
void checkDays(struct date *today1, struct date *today2)
{
    int mon1, mon2, days = 0;
    for (int i = 0; i < 12; i++)
    {

        if (strcmp(today1->month, months[i]) == 0)
        {
            mon1 = i + 1;
        }
        if (strcmp(today2->month, months[i]) == 0)
        {
            mon2 = i + 1;
        }
    }
    int yearDif = today2->year - today1->year;
    int leapDays = 0;
    if (yearDif > 3)
    {
        int diff = today2->year - today1->year;
        leapDays = diff / 4 + 1;
    }
    if (yearDif == 3)
    {
        leapDays = 1;
    }
    if (yearDif < 3)
    {
        if (today1->year % 4 == 0)
        {
            leapDays = 1;
        }
        if (today2->year % 4 == 0)
        {
            leapDays = 1;
        }
    }
    days += leapDays;
    yearDif -= 1;
    days += yearDif * 365;
    int monDif = 0;
    for (int i = mon1; i < 12; i++)
    {
        monDif += monthsInDates[i];
    }
    for (int i = 0; i < mon2 - 1; i++)
    {
        monDif += monthsInDates[i];
    }
    days += monDif;
    int d = monthsInDates[mon1 - 1] - today1->day;
    d += today2->day;
    days += d;

    printf("%d", days);
}
int checkEqual(struct date *today1, struct date *today2)
{
    if (today1->day == today2->day && strcmp(today1->month, today2->month) == 0 && today1->year == today2->year)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}