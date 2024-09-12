#include <stdio.h>
// Declaration of function
void leapYearOrNot(int);
int main()
{
    int year;
    printf("Enter a year: ");
    scanf("%d", &year);
    leapYearOrNot(year);
    return 0;
}
// definition of function 
void leapYearOrNot(int n)
{
    // // Approach 1
    // if(n%400==0)
    // {
    //     printf("Leap year");
    // }
    // else if(n%4==0 && n%100!=0)
    // {
    //     printf("Leap year");
    // }
    // else
    // {
    //     printf("Not a leap year");
    // }

    // // Approach 2
    // if(n%100==0)
    // {
    //     if(n%400==0)
    //     {
    //         printf("Leap year");
    //     }
    //     else
    //     {
    //         printf("Not a leap year");
    //     }
    // }
    // else
    // {
    //     if(n%4==0)
    //     {
    //         printf("Leap year");
    //     }
    //     else
    //     {
    //         printf("Not a leap year");
    //     }
    // }

    // Approach 3 
    (n%400==0)?(printf("Leap year.\n")):((n%4==0 && n%100!=0)?(printf("Leap year.\n")):(printf("Not aLeap year.\n")));

}
