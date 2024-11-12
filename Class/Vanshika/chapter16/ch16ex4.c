#include <stdio.h>
#include <string.h>
int main()
{
    char name[] = "kapil Kumar Singh";
    char newname[20];
    for(int i = 0; i < strlen(name); i++)
    {
        if(name[i]!=' ')
        {
            newname[i] = name[i];
        }
        else
        {
            i++;
            newname[i-1] = name[i];
            for(int j = i;j<strlen(name);j++)
            {
                if(name[j]==' ')
                {
                    newname[i] = name[j+1];
                    break;
                }
            }
            break;
        }
    }
    printf("new name: %s\n", newname);
    return 0;
}