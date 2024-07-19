/*
Suppose a file contain student record with each record containing name and age of a student. Write a program to read these records and display them in sorted order by name.
*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    struct student
    {
        char name[20];
        int age;
    };
    struct student s, ss[100], t;
    FILE *p;
    char ch;
    int x, i, a, b;
    while (1)
    {
        printf("1. Write data \n");
        printf("2. Read data \n");
        printf("3. Sort data \n");
        printf("4. Append more data \n");
        printf("5. Exit \n");
        printf("==> ");
        scanf("%d", &x);
        switch (x)
        {
        case 1:
            ch = 'y';
            p = fopen("student.dat", "wb");
            while (ch == 'y' || ch == 'Y')
            {
                getchar();
                printf("Enter the student name : ");
                scanf("%s", s.name);
                printf("Enter the student age : ");
                scanf("%d", &s.age);
                fwrite(&s, sizeof(s), 1, p);
                getchar();
                printf("Do you want to enter more data : ");
                scanf("%c", &ch);
            }
            fclose(p);
            break;
        case 2:
            p = fopen("student.dat", "rb");
            while (fread(&s, sizeof(s), 1, p) == 1)
            {
                printf("Name = %s\n", s.name);
                printf("Age = %d\n\n", s.age);
            }
            fclose(p);
            break;
        case 3:
            i = 0;
            p = fopen("student.dat", "rb");
            while (fread(&s, sizeof(s), 1, p) == 1)
            {
                ss[i] = s;
                i++;
            }
            fclose(p);
            for (a = 0; a < i-1; a++)
            {
                for (b = 0; b < i - a - 1; b++)
                {
                    if (strcmp(ss[b].name, ss[b + 1].name) > 0)
                    {
                        t = ss[b];
                        ss[b] = ss[b + 1];
                        ss[b + 1] = t;
                    }
                }
            }
            printf("Sorted Data:\n");
            for (a = 0; a < i; a++)
            {
                printf("Name = %s\n", ss[a].name);
                printf("Age = %d\n\n", ss[a].age);
            }
            p = fopen("student.dat", "wb");
            int count = 0;
            while (count<i)
            {
                fwrite(&ss[count], sizeof(s), 1, p);
                count++;
            }
            fclose(p);
            break;
        case 4:
            ch = 'y';
            p = fopen("student.dat", "ab");
            while (ch == 'y' || ch == 'Y')
            {
                getchar();
                printf("Enter the student name : ");
                scanf("%s", s.name);
                printf("Enter the student age : ");
                scanf("%d", &s.age);
                fwrite(&s, sizeof(s), 1, p);
                getchar();
                printf("Do you want to enter more data : ");
                scanf("%c", &ch);
            }
            fclose(p);
            break;
        case 5:
            exit(1);
        }
    }
    return 0;
}
