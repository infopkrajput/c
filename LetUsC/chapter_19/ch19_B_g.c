/*
A hospital keeps a file of blood donors in which each record has the format:
Name: 20 columns    Address: 40 columns
Age: 2 columns      Blood type: 1column (type 1,2,3 or 4)
write a program to read the file and print a list of all blood donors whose age is below 25 and whose blood type is 2.
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct
{
    char name[20];
    char address[40];
    int age;
    int blood_type;
} BloodDonor;
BloodDonor donor;
FILE *p;
void printBloodDonor();
void addPatient();
void removePatient();
void printAllPatients();
void printSpecificPatients();
void savePatientsToFile();
void loadPatientsFromFile();
int main()
{
    int choice;
    while (1)
    {
        printf("\nMenu:\n");
        printf("1. Add patient\n");
        printf("2. Remove patient\n");
        printf("3. Print all patients\n");
        printf("4. Print specific patients by age and blood type\n");
        printf("5. Save patients to file\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            addPatient();
            break;
        case 2:
            removePatient();
            break;
        case 3:
            printAllPatients();
            break;
        case 4:
            printSpecificPatients();
            break;
        case 5:
            savePatientsToFile();
            break;
        case 6:
            printf("Exiting program.\n");
            exit(1);
        default:
            printf("Invalid choice. Please enter a number between 1 and 6.\n");
        }
    }
    return 0;
}
void printBloodDonor()
{
}

void addPatient()
{
    p = fopen("ch19_B_g.txt","a");
    getchar();
    printf("Enter patient name: ");
    gets(donor.name);
    getchar();
    printf("Enter patient address: ");
    gets(donor.address);
    printf("Enter patient age: ");
    scanf("%d", &donor.age);
    printf("Enter patient blood type: ");
    scanf("%d", &donor.blood_type);
    fwrite(&donor,sizeof(donor),1,p);
    fclose(p);
    printf("Patient added successfully.\n");
}

void removePatient()
{
}

void printAllPatients()
{
    printf("All patients:\n");
    for (int i = 0; i < numPatients; ++i)
    {
        printf("Patient %d:\n", i + 1);
        printBloodDonor(&patients[i]);
    }
}

void printSpecificPatients()
{
}

void savePatientsToFile()
{
}

void loadPatientsFromFile()
{
}
