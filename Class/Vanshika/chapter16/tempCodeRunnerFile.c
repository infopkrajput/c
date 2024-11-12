#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    char **all;
    char *temp;
    printf("How may numbers of strings you want to enter? ");
    int n;
    scanf("%d", &n);
    all = (char **)malloc(n * sizeof(char *));
    for(int i = 0; i < n; i++)
    {
        printf("What is the size of the %d string : ",i+1);
        int size;
        scanf("%d", &size);
        getchar();
        temp = (char *)malloc(size * sizeof(char));
        printf("Enter the string : ");
        gets(temp);
        all[i] = temp;
        temp = NULL;
        free(temp);
    }
    for (int i = 0; i < n; i++)
    {
        printf("%s\n",all[i]);
    }
    

    return 0;
}
