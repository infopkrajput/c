/*
How many bytes in memory would be occupied by the following array of the pointer to string? How many bytes would be required to store the same string in two dimensional character array? 
char *mess[] =  {
                    "Hammer and Tongs","Tooth and nail",
                    "Spit and polish","You and C"
                };
*/
#include <stdio.h>
#include <string.h>
int main()
{
    char *mess[] =  {
                    "Hammer and Tongs","Tooth and nail",
                    "Spit and polish","You and C"
                };

    int totalSize = 0;
    int fir_d=0,sec_d=0;
    for (int i = 0; i < sizeof(mess) / sizeof(mess[0]); i++)
    {
        totalSize = totalSize + strlen(mess[i]) + 1;
        if((strlen(mess[i]) + 1)>sec_d)
        {
            sec_d = (strlen(mess[i]) + 1);
        }
        fir_d++;
    }
    printf("Total size occupied by the array of string: %d bytes\n", totalSize);
    int pointerSize = sizeof(mess);
    printf("Size occupied by the pointer: %d bytes\n", pointerSize);
    printf("Overall total sized occupied: %d bytes\n",totalSize+pointerSize);
    printf("If this string store in array of string the size of these string are arr[%d][%d] thats mean the occupies %d \n",fir_d,sec_d,fir_d*sec_d);

    return 0;
}
