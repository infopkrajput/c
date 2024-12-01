#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    FILE *f;
    struct student
    {
        char name[20];
        int age;
    };
    struct student s;
    struct student stu[100];
    int n, a = 0;
    while (1)
    {
        printf("Menu\n");
        printf("1. Write data\n");
        printf("2. Read data\n");
        printf("3. Make Fresh file\n");
        printf("4. Sort data \n");
        printf("5. Exit\n");
        scanf("%d", &n);
        switch (n)
        {
        case 1:
            f = fopen("students.dat", "ab");
            printf("Enter name and age for student : ");
            scanf("%s %d", s.name, &s.age);
            fwrite(&s, sizeof(struct student), 1, f);
            fclose(f);
            break;
        case 2:

            f = fopen("students.dat", "rb");
            printf("Student Details:\n");
            while (fread(&s, sizeof(struct student), 1, f) == 1)
            {
                printf("Name: %s\nAge: %d\n\n", s.name, s.age);
            }
            fclose(f);
            break;
        case 3:
            f = fopen("students.dat", "wb");
            printf("Enter name and age for student : ");
            scanf("%s %d", s.name, &s.age);
            fwrite(&s, sizeof(struct student), 1, f);
            fclose(f);
            break;
        case 4:
            int a = 0;
            f = fopen("students.dat", "rb");

            while (fread(&stu[a], sizeof(struct student), 1, f) == 1)
            {
                a++;
            }
            fclose(f);

            int i, j;
            for (i = 0; i < a - 1; i++)
            {
                for (j = i + 1; j < a; j++)
                {
                    if (strcmp(stu[i].name, stu[j].name) > 0)
                    {
                        s = stu[j];
                        stu[j] = stu[i];
                        stu[i] = s;
                    }
                }
            }
            f = fopen("students.dat", "wb");
            for (int k = 0; k < a; k++)
            {
                fwrite(&stu[k], sizeof(stu[k]), 1, f);
            }
            fclose(f);
            break;
        case 5:
            exit(0);

        default:
            printf("Invalid option!\n");
            break;
        }
    }

    return 0;
}