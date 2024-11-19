#include <stdio.h>
#include <stdlib.h>

// Structure to store a date
struct Date {
    int day;
    int month;
    int year;
};

// Function to check if a year is a leap year
int isLeapYear(int year) {
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        return 1;
    }
    return 0;
}

// Function to calculate the total number of days from year 0 to the given date
int totalDays(struct Date date) {
    int daysInMonths[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int totalDays = 0;

    // Add days for all the years before the given year
    for (int i = 0; i < date.year; i++) {
        if (isLeapYear(i)) {
            totalDays += 366;
        } else {
            totalDays += 365;
        }
    }

    // Add days for the months in the given year
    for (int i = 0; i < date.month - 1; i++) {
        totalDays += daysInMonths[i];
    }

    // Add one more day if it's a leap year and the date is after February
    if (date.month > 2 && isLeapYear(date.year)) {
        totalDays++;
    }

    // Add the days in the given month
    totalDays += date.day;

    return totalDays;
}

int main() {
    struct Date date1, date2;

    // Input the first date
    printf("Enter the first date (dd mm yyyy): ");
    scanf("%d %d %d", &date1.day, &date1.month, &date1.year);

    // Input the second date
    printf("Enter the second date (dd mm yyyy): ");
    scanf("%d %d %d", &date2.day, &date2.month, &date2.year);

    // Calculate total days for both dates
    int days1 = totalDays(date1);
    int days2 = totalDays(date2);

    // Calculate the absolute difference
    int difference = abs(days1 - days2);

    printf("The total number of days between the two dates is: %d\n", difference);

    return 0;
}
