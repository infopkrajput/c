/* Write a program for a matchstick game being played between the computer and a user. Your program should ensure that the computer always wins. Rules for the game are as follows:
--  There are 21 matchsticks.
--  The compiler asks the player to pick 1,2,3, or 4 matchsticks.
--  After the person picks, the computer does its picking.
--  Whoever is forced to pick up the last matchsticks loses the game. */

// #include <stdio.h>
// int main()
// {
//     printf("Matchstick Picking Game\n");
//     int n = 21, com_pic, user_pic;
//     while (n != 0)
//     {
        
//         printf("Pick the matchsticks between 1 to 4 : ");
//         scanf("%d", &user_pic);
//         n = n - user_pic;
//         printf("Matchsticks left : %d \n", n);
//         printf("Now Computer pick the matchstick\n");
//         com_pic = 5 - user_pic;
//         n = n - com_pic;
//         printf("Computer Picked : %d\n", com_pic);
//         printf("Matchsticks left : %d \n", n);
//         if (n == 1)
//         {
//             printf("Now only one matchstick left!\nYou have to pick this and computer wins!!!\n");
//             return 0;
//         }
//     }
//     return 0;
// }

#include<stdio.h>
int main()
{
int m=21,p,c;
while(m>1)
{
    printf("No. of matches left = %d\n",m);
    printf("pick up 1,2,3 or 4 matches = ");
    scanf("%d",&p);
    if(p>4 || p<1)
    {
    printf("Invalid Entry!!! Please replay and enter a valid number.");
    break;
    }
    m=m-p;
    printf("no. of matches left = %d\n",m);
    c=5-p;
    printf("Computer's picked matches %d \n",c);
    m=m-c;
    if(m==1)
    {
        printf("No. of matches left = %d\n ",m);
        printf("You lost the game !!\n");
        break;
    }
}
    return 0;
}