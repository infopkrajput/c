#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#define MAX 100
int main()
{
    int arr[MAX];
    int n, x;
    while (1)
    {
        printf("Select Option \n");
        printf("1. Create array : \n");
        printf("2. Print array : \n");
        printf("3. Change array Size : \n");
        printf("4. Insert element in back : \n");
        printf("5. Insert element in front : \n");
        printf("6. Delete element from Front : \n");
        printf("7. Delete element from back : \n");
        printf("8. exit : \n");
        printf("==> ");
        scanf("%d", &x);
        switch (x)
        {
        case 1:
            printf("Enter the size of the array : ");
            scanf("%d", &n);
            for (int i = 0; i < n; i++)
            {
                printf("Enter the element no %d : ", i + 1);
                scanf("%d", &arr[i]);
            }
            printf("Array Created Successfully!\n");
            getch();
            system("cls");
            break;
        case 2:
            printf("Printing All the Elements : ");
            for (int i = 0; i < n; i++)
            {
                printf("%d ", arr[i]);
            }
            printf("\n");
            printf("Array Printed Successfully!\n");
            getch();
            system("cls");
            break;
        case 3:
            printf("Enter the new size of the array : ");
            scanf("%d", &n);
            printf("Array Size changed Successfully!\n");
            getch();
            system("cls");
            break;
        case 4:
            printf("Enter the element to insert in back : ");
            scanf("%d", &arr[n]);
            n++;
            printf("Element inserted Successfully!\n");
            getch();
            system("cls");
            break;
        case 5:
            for (int i = n; i > 0; i--)
            {
                arr[i] = arr[i-1];
            }
            n++;
            printf("Enter the element to insert in front : ");
            scanf("%d", &arr[0]);
            printf("Element inserted Successfully!\n");
            getch();
            system("cls");
            break;
        case 6:
            break;
        case 7:
            break;
        case 8:
            break;
        default:
            break;
        }
    }
    printf("Enter the new size of the array : ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}