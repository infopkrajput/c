#include <stdio.h>
int main()
{
    int marks[3];
    int avg, sum = 0;
    int i;
    for (i = 0; i < 3; i++)
    {
        printf("Enter the marks of Student No. %d : ", i + 1);
        scanf("%d", &marks[i]);
        if (marks[i] < 0 || marks[i] > 100)
        {
            printf("Please enter correct marks \n");
            i--;
            continue;
        }
        sum += marks[i];
        printf("hi\n");
    }
    printf("Sum = %d", sum);
    avg = sum / 3;
    printf("Average of 10 Students Marks is : %d", avg);
    return 0;
}