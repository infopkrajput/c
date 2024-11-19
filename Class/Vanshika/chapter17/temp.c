#include <stdio.h>
void convertDate(int *day, int *month, int *year, char *date);

int main()
{
    char date[13];
    printf("Enter date in the format dd/mm/yyyy: ");
    scanf("%s", date);
    int day;
    int month;
    int year;
    convertDate(&day, &month, &year, date);
    printf("day = %d\n", day);
    printf("month = %d\n", month);
    printf("year = %d\n", year);
    return 0;
}
void convertDate(int *day, int *month, int *year, char *date)
{
    *day = (date[0] - 48) * 10;
    *day = *day + (date[1] - 48);
    *month = (date[3] - 48) * 10;
    *month = *month + (date[4] - 48);
    *year = (date[6] - 48) * 1000;
    *year += (date[7] - 48) * 100;
    *year += (date[8] - 48) * 10;
    *year += (date[9] - 48);
}