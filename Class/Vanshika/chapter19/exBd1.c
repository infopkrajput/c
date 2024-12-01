#include <stdio.h>
#include <string.h>
void encrypt(char *s);
void decrypt(char *s);
int main()
{
    char str[1000];
    FILE *p, *q;
    p = fopen("source.txt", "r");
    q = fopen("target.txt", "w");
    while (fgets(str, 999, p) != NULL)
    {
        encrypt(str);
        fputs(str, q);
    }
    fclose(p);
    fclose(q);
    p = fopen("target.txt", "r");
    
    char temp[1000];
    while (fgets(str,999,p)!=NULL)
    {
        printf("Original = %s\n",str);
        for(int i = 1;i<=128;i++)
        {
            strcpy(temp, str);
            for(int j = 0;j<strlen(str);j++)
            {
                temp[j] = temp[j] - i;
            }
            printf("%d =  %s\n",i,temp);
        }
    }
    fclose(p);
    
    return 0;
}
void encrypt(char *s)
{
    for (int i = 0; i < strlen(s); i++)
    {
        *(s + i) = *(s + i) + 98;
    }
}
void decrypt(char *s)
{
    for (int i = 0; i < strlen(s); i++)
    {
        *(s + i) = *(s + i) - 98;
    }
}