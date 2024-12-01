#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char str[1000], ch;
    FILE *p, *q;
    char cipher[53] = "zxcvbnmlkjhgfdsaqwertyuiop";
    p = fopen("source.txt", "r");
    q = fopen("target.txt", "w");
    while (1)
    {
        ch = fgetc(p);
        if (ch == EOF)
            break;
        if (isalpha(ch))
        {
            ch = tolower(ch);
            ch = cipher[ch - 'a'];
            fputc(ch, q);
        }
        else
        {
            fputc(ch, q);
        }
    }
    fclose(p);
    fclose(q);
    p = fopen("target.txt", "r"); 
    while (1)
    {
        ch = fgetc(p);
        if (ch == EOF)
            break;
        if (isalpha(ch))
        {
            for (int i = 0; i < 26; i++)
            {
                if (ch == cipher[i]) 
                {
                    printf("%c",'a' + i);
                    break;
                }
            }
        }
        else
        {
            printf("%c",ch);
        }
    }
    return 0;
}
