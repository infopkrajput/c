/* 
Write a program to reverse the strings stored in an array of pointer to strings.
*/
#include <stdio.h>
#include <string.h>
void convert(char *str);
int main() {
    char *all[] = {"SUPERMAN","But To really mess things up.","One need to know c."};

    char t;
    int i, len, j, k;
    char *x;
    for (i = 0; i < sizeof(all) / sizeof(all[0]); i++)
    {
        convert(all[i]);    
    }
    return 0;
}
void convert(char *str)  
{
    char ch;
    int i,len;
    len = strlen(str);
    char arr[len+1];
    // printf("Length %d\n",len);
    for(i=0;i<len;i++)
    {
        arr[i] = *(str+i);
    }
    arr[i] = '\0';
    printf("%s\n",arr);
    for(i=0;i<len/2;i++)
    {
        ch = arr[i];
        arr[i] =  arr[(len-1)-i];
        arr[(len-1)-i] = ch;
    }
    printf("%s\n",arr);
}