/*  Write a menu driven program which has following options:
1. Factorial of a number
2. prime or not 
3. odd or even 
4.Exit 
Once a menu item is selected the appropriate action should be taken and once this action is finished,the menu should reappear. Unless the user selects the 'Exit' option the program should continue to work.
*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
    while(1)
    {   
        int choice;
        printf("\n1. Factorial of a number\n2. prime or not\n3. odd or even\n4. Exit\n");
        printf("Enter your Choice : ");
        scanf("%d",&choice);
        switch (choice)
        {
        case 1 :
        {
            int num,i,fact=1;
            printf("\nThis program will give the factorial value of a given number\n");
            printf("Enter the number : ");
            scanf("%d",&num);
            for(i=1;i<=num;i++)
            {
                fact = fact * i;
            }
            printf("Factorial of the number = %d\n",fact);
            break;
        } 
        case 2 :
        {
            int num,i,count = 0;
            printf("\nThis program will check that the entered number is prime or not\n");
            printf("Enter the number : ");
            scanf("%d",&num);
            for(i=1;i<=num;i++)
            {
                if(num%i==0)
                count++;
            }
            if(count==2)
                {
                    printf("Prime Number!\n");
                }
                else
                {
                    printf("Not A Prime Number!\n");
                }
            break;
        }
        case 3 :
        {   
            int num;
            printf("\nThis program will check the entered number is even or odd!\n");
            printf("Enter the number : ");
            scanf("%d",&num);
            if(num%2==0)
            printf("Even number!\n");
            else
            printf("Odd NUmber!\n");
            break;
        }
        case 4 :
            exit(0); //instead of using exit(0) with library stdlib.h we can use return 0 to break the while loop.
        default :
        printf("\nYou Entered wrong entry please enter a valid number\n");
        }
    }
    return 0;
}