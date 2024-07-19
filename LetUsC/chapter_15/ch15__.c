/* Write a program that extracts part of the given string from the specified position. For example, if from the string "Working with string is fun",string position from 3,4 characters are extracted then it should return "king".*/
// #include<stdio.h>
// #include<string.h>
// #include<stdlib.h>
// int main()
// {
//     char strMain[80],strTemp[80];
//     int pos,cha,i,x=0;
//     printf("Enter the string : ");
//     gets(strMain);
//     printf("Enter the Position no. : ");
//     scanf("%d",&pos);
//     printf("Enter the Character no. : ");
//     scanf("%d",&cha);
//     if(pos<0 || pos>strlen(strMain))
//     {
//         printf("Please Enter a valid position.");
//         exit(1);
//     }
//     if(cha>strlen(strMain))
//     {
//         cha = strlen(strMain) - 1;
//     }
//     for(i = pos-1;i<cha+pos;i++)
//     {
//         strTemp[x] = strMain[i];
//         x++;
//     }
//     strTemp[x] = '\0';
//     printf("Extracted String is : %s\n",strTemp);
//     return 0;
// }

#include<stdio.h>
#include<string.h>
int main()
{
    char str1[20];
    int posi,ch,i,j=0;
    char str2[20];
    printf("Enter the String : ");
    scanf("%[^\n]s",str1);
    printf("Enter the Position : ");
    scanf("%d",&posi);
    if(posi<0)
    posi = 0;
    if(posi>strlen(str1))
    {
        printf("Please enter a valid position! ");
        return 1;
    }
    printf("Enter the No. of characters : ");
    scanf("%d",&ch);
    if(ch<posi)
    {
        printf("Please enter a valid position! ");
        return 2;
    }
    if(ch>strlen(str1))
    {
        ch = strlen(str1) - 1;
    }
    for(i=posi;i<ch+posi;i++)
    {
        str2[j] = str1[i];
        j++;
    }
    str2[i] = '\0';
    printf("%s",str2);
    return 0;
}