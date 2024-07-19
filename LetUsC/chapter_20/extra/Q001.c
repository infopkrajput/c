#include <stdio.h>
#include <stdlib.h>
// command source1 source2 target
int main(int argc,char *argv[4])
{
    // if(argc!=4)
    // {
    //     printf("Wrong credential!\n");
    //     exit(1);
    // }
    FILE *p, *q, *r;
    char str1[500], str2[500];
    int com1 = 0, com2 = 0, lines;
    p = fopen(argv[1], "r");
    q = fopen(argv[2], "r");
    if(p==NULL)
    {
        perror(argv[1]);
        exit(1);
    }
    if(q==NULL)
    {
        perror(argv[2]);
        exit(1);
    }
    while (fgets(str1, sizeof(str1), p) != NULL)
        com1++;
    while (fgets(str2, sizeof(str2), q) != NULL)
        com2++;
    fclose(p);
    fclose(q);
    lines = com1 > com2 ? com1 : com2;
    int temp = 1, len;
    char ch, *c;
    p = fopen(argv[1], "r");
    q = fopen(argv[2], "r");
    r = fopen(argv[3], "w");
    if(r==NULL)
    {
        perror("");
        exit(1);
    }
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
    printf("Data merge Successfully!\n");
    return 0;
}