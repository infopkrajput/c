/* To uniquely identify a book a 10-digit ISBN (International Standard Book Number) is used. The rightmost digit is ISBN is checksum digit. This digit is determined from the other 9 digits using the condition that d1 + 2d2 + 3d3 ..... + 10d10 must be a multiple of 11(where di denotes the ith digit from the right). The checksum digit d1 can be any value from 0 to 10. write a program that receives a 10-digit integer, computes the checksum, and reports whether the ISBN number is correct or not. */
#include<stdio.h>
int main()
{
    char isbn[11];
    int sum = 0,mult = 10,i=0;
    int digit;
    printf("Enter the isbn number : ");
    scanf("%s",isbn);
    for(i=0;i<10;i++)
    {
        if(isbn[i] == 'x' || isbn[i] == 'X')
        {
            digit = 10;
            sum = sum + mult * digit;
        }
        else
        {
            digit = isbn[i] - 48;
            sum = sum + mult * digit;
        }
        mult--;
    }
    if(sum%11 == 0)
    {
        printf("Valid ISBN!\n");
    }
    else
    {
        printf("Invalid ISBN!");
    }
    return 0;
}