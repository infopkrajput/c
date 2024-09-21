#include <stdio.h>
void Pages(int,char,char,char);
int main()
{
    int numOfDisk = 1;
    Pages(numOfDisk, 'A', 'B', 'C');
    return 0;
}
void Pages(int numOfDisk,char first,char aux,char final)
{
    if(numOfDisk == 1)
    {
        printf("Move disk 1 from %c to %c\n", first, final);
        return;
    }
    Pages(numOfDisk - 1,first,aux,final);


}