#include <stdio.h>
#include <time.h>
#include <stdlib.h>

// Function to manually parse the date string (YYYY-MM-DD)
int parse_date(const char* date_str, struct tm* date) {
    return sscanf(date_str, "%d-%d-%d", &date->tm_year, &date->tm_mon, &date->tm_mday) == 3;
}

// Function to calculate the difference in days between two dates
int calculate_date_difference(const char* date1, const char* date2) {
    struct tm tm1 = {0}, tm2 = {0};
    time_t time1, time2;

    // Parse the input dates
    if (!parse_date(date1, &tm1) || !parse_date(date2, &tm2)) {
        printf("Invalid date format. Please use YYYY-MM-DD.\n");
        return -1;
    }

    // Adjust year and month for tm structure
    tm1.tm_year -= 1900; // tm_year is years since 1900
    tm2.tm_year -= 1900;
    tm1.tm_mon -= 1; // tm_mon is 0-based (0 = January)
    tm2.tm_mon -= 1;

    // Convert tm structures to time_t
    time1 = mktime(&tm1);
    time2 = mktime(&tm2);

    if (time1 == -1 || time2 == -1) {
        printf("Error converting date to time.\n");
        return -1;
    }

    // Calculate the difference in seconds and convert to days
    double difference = difftime(time1, time2) / (60 * 60 * 24);

    return (int)(difference > 0 ? difference : -difference);
}

int main() {
    char date1[11], date2[11];
    printf("Enter the first date (YYYY-MM-DD): ");
    scanf("%10s", date1);
    printf("Enter the second date (YYYY-MM-DD): ");
    scanf("%10s", date2);

    int days = calculate_date_difference(date1, date2);
    if (days >= 0) {
        printf("Difference in days: %d\n", days);
    }

    return 0;
}
