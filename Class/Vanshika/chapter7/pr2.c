#include <stdio.h>
#include <math.h>
#include <conio.h>
#include <stdlib.h>
int main()
{
    int a, b, c, condition;
    char ch = 'y';
    while (ch == 'y')
    {
        printf("\n\nEnter the operation you want to perform:\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Modulation\n");
        printf("6. Power of a number\n");
        printf("7. Factorial of a number \n");
        printf("8. Check Even Odd\n");
        printf("9. Check Prime\n");
        printf("10. Exit\n");
        printf("Enter your choice : ");
        scanf("%d", &condition);
        switch (condition)
        {
        case 1:
            printf("Enter the value of a : ");
            scanf("%d", &a);
            printf("Enter the value of b : ");
            scanf("%d", &b);
            c = a + b;
            system("CLS");
            printf("Addition of %d and %d is : %d\n", a, b, c);
            break;
        case 2:
            printf("Enter the value of a : ");
            scanf("%d", &a);
            printf("Enter the value of b : ");
            scanf("%d", &b);
            c = a - b;
            system("CLS");
            printf("Subtraction of %d and %d is : %d\n", a, b, c);
            break;
        case 3:
            printf("Enter the value of a : ");
            scanf("%d", &a);
            printf("Enter the value of b : ");
            scanf("%d", &b);
            c = a * b;
            system("CLS");
            printf("Multiplication of %d and %d is : %d\n", a, b, c);
            break;
        case 4:
            printf("Enter the value of a : ");
            scanf("%d", &a);
            printf("Enter the value of b : ");
            scanf("%d", &b);
            c = a / b;
            system("CLS");
            printf("Division of %d and %d is : %d\n", a, b, c);
            break;
        case 5:
            printf("Enter the value of a : ");
            scanf("%d", &a);
            printf("Enter the value of b : ");
            scanf("%d", &b);
            c = a % b;
            system("CLS");
            printf("Modulation of %d and %d is : %d\n", a, b, c);
            break;

        case 6:
            printf("Enter the value of a : ");
            scanf("%d", &a);
            printf("Enter the value of b : ");
            scanf("%d", &b);
            // int c = 1;
            // for (int i = 1; i <= b; i++)
            // {
            //     c = c * a;
            // }
            c = pow(a, b);
            system("CLS");
            printf("power of %d to the %d is : %d\n", a, b, c);
            break;

        case 7:
            printf("Enter the value of a : ");
            scanf("%d", &a);
            c = 1;
            for (int i = 1; i <= a; i++)
            {
                c = c * i;
            }
            system("CLS");
            printf("Factorial of %d is %d\n", a, c);
            break;

        case 8:
            printf("Enter the value of a : ");
            scanf("%d", &a);
            system("CLS");
            if (a % 2 == 0)
            {
                printf("%d is an even number.\n", a);
            }
            else
            {
                printf("%d is not an even number.\n", a);
            }
            break;
        case 9:
            printf("Enter the value of a : ");
            scanf("%d", &a);
            int count = 0;
            system("CLS");
            for (int i = 2; i < a; i++)
            {
                if (a % i == 0)
                {
                    count++;
                    printf("%d is not a prime number.\n", a);
                    break;
                }
            }
            if (count == 0)
            {
                printf("%d is a prime number.\n", a);
            }
            break;
        case 10:
            system("CLS");
            printf("Exiting the program...\n");
            ch = 'n';
            break;
        default:
            system("CLS");
            printf("Invalid choice. Please enter a number between 1 to 10.\n");
        }
    }
    return 0;
}