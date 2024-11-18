#include <stdio.h>
#include <string.h>
struct Parts
{
    char serialNo[4];
    int mfy;
    char name[20];
    int qty;
};

int main()
{
    struct Parts p[] = {
        {"AA0", 2020, "Head Light", 10},
        {"AA1", 2020, "Spark Plug", 5},
        {"AA2", 2020, "Brake Pads", 8},
        {"AA3", 2020, "Tire", 15},
        {"AA4", 2020, "Battery", 3},
        {"BB0", 2021, "Head Light", 12},
        {"BB1", 2021, "Spark Plug", 7},
        {"BB2", 2021, "Brake Pads", 6},
        {"BB3", 2021, "Tire", 13},
        {"BB4", 2021, "Battery", 4},
        {"CC0", 2022, "Head Light", 9},
        {"CC1", 2022, "Spark Plug", 4},
        {"CC2", 2022, "Brake Pads", 7},
        {"CC3", 2022, "Tire", 14},
        {"CC4", 2022, "Battery", 5},
        {"CC5", 2023, "Battery", 5},
        {"CC6", 2023, "Tire", 10},
        {"CC7", 2024, "Tire", 10},
        {"CC8", 2024, "Spark Plug", 10},
        {"FF9", 2024, "Head Light", 16}};
    int count = sizeof(p) / sizeof(p[0]);
    int match = 0;
    for (int i = 0; i < count; i++)
    {
        if (strcmp(p[i].serialNo, "BB1") == 0 || match == 1)
        {
            printf("%d : Serial Number: %s\nManufacturing Year: %d\nPart Name: %s\nQuantity: %d\n", i + 1, p[i].serialNo, p[i].mfy, p[i].name, p[i].qty);
            printf("---------------------------------------------\n");
            match = 1;
        }
        if (strcmp(p[i].serialNo, "CC6") == 0)
        {
            break;
        }
    }

    return 0;
}