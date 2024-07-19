/*
If the string "Alice in wonder land" is fed to the following scanf() statement, what will be the content of the array str1, str2, str3, and str4?
*/
#include<stdio.h>
int main()
{
    char str1[10],str2[10],str3[10],str4[10];
    printf("Enter the string : ");
    scanf("%s%s%s%s",str1,str2,str3,str4);
    printf("%s\n",str1);
    printf("%s\n",str2);
    printf("%s\n",str3);
    printf("%s\n",str4);
    return 0;
}

// All the words of strings will store in strings separately.