#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main()
{
    FILE *fp;
    char str[3][100];
    int rate, quantity, sum;
    rate = 40;
    quantity = 10000;
    fp = fopen("target.txt", "w");
    sprintf(str[0], "Rate = %d", rate);
    fputs(str[0], fp);
    fputs("\n", fp);
    sprintf(str[1], "Total Quantity = %d", quantity);
    fputs(str[1], fp);
    fputs("\n", fp);
    sprintf(str[2], "Total Sum = %d", rate * quantity);
    fputs(str[2], fp);
    fputs("\n", fp);
    fclose(fp);

    // fp = fopen("target.txt", "r");
    // while (1)
    // {
    //     fgets(str, sizeof(str), fp);
    //     if (feof(fp))
    //         break;
    //     printf("%s", str);
    // }
    // fclose(fp);
    return 0;
}