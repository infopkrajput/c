// #include<stdio.h>
// #include<string.h>
// #include<stdlib.h>
// char *one[] = {" ","One","Two","Three","Four","Five","Six","Seven","Eight","Nine","Ten","Eleven","Twelve","Thirteen","Fourteen","Fifteen","Sixteen","Seventeen","Eighteen","Nineteen"};
// char *ten[] = { "","","Twenty","Thirty","Forty","Fifty","Sixty","Seventy","Eighty","Ninety"};
// void convert(int,char *);
// int main()
// {
//     int num;
//     printf("Enter the max nine digit number : ");
//     scanf("%d",&num);
//     convert((num/100000)%100,"Lakh");
//     convert((num/1000)%100,"Thousand");
//     convert((num/100)%10,"Hundred");
//     convert((num%100),"");
//     return 0;
// }
// void convert(int n,char *str)
// {
//     if(n!=0)
//     {
//     if(n>19)
//     {
//         printf("%s %s ",ten[n/10],one[n%10]);
//     }
//     else
//     {
//         printf("%s ",one[n]);
//     }
//     if(n!=0)
//     printf("%s ",str);
//     }
// }



// #include<stdio.h>
// #include<stdlib.h>
// #include<string.h>
// char *one[] = {" ","One","Two","Three","Four","Five","Six","Seven","Eight","Nine","Ten","Eleven","Twelve","Thirteen","Fourteen","Fifteen","Sixteen","Seventeen","Eighteen","Nineteen"};
// char *ten[] = { "","","Twenty","Thirty","Forty","Fifty","Sixty","Seventy","Eighty","Ninety"};
// int main()
// {
//     int num,temp;
//     printf("Enter the number : ");
//     scanf("%d",&num);
//     if(num/1000!=0)
//     {
//         temp = num;
//         temp = temp/1000;
//         if(temp>19)
//         {
//             printf("%s %s ",ten[temp/10],one[temp%10]);
//         }
//         else
//         {
//             printf("%s ",one[temp]);
//         }
//         printf("Thousand ");
//     }
//     num = num%1000;
//     if(num/100!=0)
//     {
//         temp = num;
//         temp = temp/100;
//         if(temp>19)
//         {
//             printf("%s %s ",ten[temp/10],one[temp%10]);
//         }
//         else
//     {
//             printf("%s ",one[temp]);
//         }
//         printf("Hundred ");
//     }
//     num=num%100;
//     if(num!=0)
//     {
//         temp = num;
//         if(temp>19)
//         {
//             printf("%s %s ",ten[temp/10],one[temp%10]);
//         }
//         else
//         {
//             printf("%s ",one[temp]);
//         }
//     }
//     return 0;
// }


#include <stdio.h>
char *one[] = {" ", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine", "Ten", "Eleven", "Twelve", "Thirteen", "Fourteen", "Fifteen", "Sixteen", "Seventeen", "Eighteen", "Nineteen"};
char *ten[] = {"", "", "Twenty", "Thirty", "Forty", "Fifty", "Sixty", "Seventy", "Eighty", "Ninety"};

void calling(int num);
int main()
{
    int number;
    printf("Enter the number : ");
    scanf("%d", &number);
    calling(number);
    return 0;
}
void calling(int num)
{
    int t, o;
    if (num / 100000 != 0)
    {
        t = num / 100000;
        t = t / 10;
        printf("%s ", ten[t]);
        o = num / 100000;
        o = o % 10;
        printf("%s ", one[o]);
    }
    printf("Lakh ");
    num = num % 100000;
    if (num / 1000 != 0)
    {
        t = num / 1000;
        t = t / 10;
        printf("%s ", ten[t]);
        o = num / 1000;
        o = o % 10;
        printf("%s ", one[o]);
    }
    printf("Thousand ");
    num = num % 1000; // 567
    if (num / 100 != 0)
    {
        t = num / 100;
        printf("%s ", one[t]);
    }
    printf("Hundred ");
    num = num % 100; // 21
    if (num / 10 != 0)
    {
        if (num > 19)
        {
            t = num / 10;
            o = num % 10;
            printf("%s ", ten[t]);
            printf("%s ", one[o]);
        }
        else
        {
            printf("%s ", one[num]);
        }
    }
}