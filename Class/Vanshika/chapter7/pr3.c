#include<stdio.h>
#include <stdlib.h>
    int main()
{
    int class, sf;
    printf("Enter the class of student");
    scanf("%d", &class);
    printf("Enter the number of subjects he/she failed : ");
    scanf("%d", &sf);
    switch (class)
    {
    case 1:
        if (sf <= 3)
        {
            printf("He/She got the grace of %d\n", sf * 5);
        }
        else
        {
            printf("He/She not get any grace\n");
        }
        break;
    case 2:
        if (sf <= 2)
        {
            printf("He/She got the grace of %d\n", sf * 4);
        }
        else
        {
            printf("He/She not get any grace\n");
        }
        break;
    case 3:
        if (sf <= 1)
        {
            printf("He/She got the grace of %d\n", 5);
        }
        else
        {
            printf("He/She not get any grace\n");
        }
        break;

    default:
        printf("Please enter a valid class number\n");
        break;
    }

    return 0;
}