/* 
Write a program that merge lines alternatively from two files and writes the result to a new file. If one file has a similar number of line, then the other, the remaining lines from the larger file should be simply copied into the target file.
*/
#include <stdio.h>
#include <string.h>
int main()
{
    FILE *p, *q, *r;
    char str1[500], str2[500];
    int com1 = 0, com2 = 0, lines;
    p = fopen("B_c1.txt", "r");
    q = fopen("B_c2.txt", "r");
    while (fgets(str1, sizeof(str1), p) != NULL)
        com1++;
    while (fgets(str2, sizeof(str2), q) != NULL)
        com2++;
    fclose(p);
    fclose(q);
    lines = com1 > com2 ? com1 : com2;
    int temp = 1, len;
    char ch, *c;
    p = fopen("B_c1.txt", "r");
    q = fopen("B_c2.txt", "r");
    r = fopen("B_c3.txt", "w");
    while (temp <= lines)
    {
        if (fgets(str1, sizeof(str1), p) != NULL)
        {
            len = strlen(str1);
            str1[len - 1] = ' ';
            str1[len] = '\0';
            fputs(str1, r);
        }
        if (fgets(str2, sizeof(str2), q) != NULL)
        {
            len = strlen(str2);
            str2[len] = '\0';
            fputs(str2, r);
        }
        fputs("\n", r);
        temp++;
    }
    fclose(r);
    fclose(p);
    fclose(q);
    r = fopen("B_c3.txt", "r");
    while (fgets(str1, sizeof(str1), r) != NULL)
    {
        printf("%s", str1);
    }
    fclose(r);
    return 0;
}