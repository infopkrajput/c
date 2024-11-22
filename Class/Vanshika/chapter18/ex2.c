#include <stdio.h>
int main()
{
    int age = 26;
    char name[] = "Sumit";
    char str[50];
    sprintf(str, "%s %d", name, age);
    printf("%s", str);
    int age2;
    char name2[20];
    sscanf(str, "%s %d", &name2, &age2);
    printf("\nname 2 and age : %s %d", name2, age2);
    return 0;
}