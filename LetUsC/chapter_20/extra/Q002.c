#include <stdio.h>
// int main()
// {
//     FILE *p;
//     char ch;
//     p = fopen("Trial","w");
//     while (!feof(p))
//     {
//         ch = fgetc(p);
//         if(ferror(p))
//         {
//             perror("This");
//             break;
//         }
//         else
//         {
//             printf("%c",ch);
//         }
//     }
//     fclose(p);
//     return 0;
// }
int main(int argc,char *argv[4])
{
    // FILE *fp;
    char ch;
    // fp = fopen("input.txt", "r");
    while ((ch = fgetc(stdin)) != EOF)
    {
        fputc(ch,stdout);
    }
    // fclose(fp);
    return 0;
}