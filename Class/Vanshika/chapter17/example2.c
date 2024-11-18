#include <stdio.h>
void display(char *n,char *a,int *pg);
int main()
{
    struct book
    {
        char name[20];
        char author[10];
        int pages;
    };
    struct book b = {"Let us C","YPK",240};
    display(b.name,b.author,&b.pages);
    printf("Print by main : \n");
    printf("Book name : %s\nAuthor : %s\nPages : %d\n",b.name,b.author,b.pages);
    return 0;
}
void display(char *n,char *a,int *pg)
{
    printf("Print by function \n");
    printf("Book name : %s\nAuthor : %s\nPages : %d\n\n",n,a,*pg);
    n[0] = 'M';
    *pg = 400;
    printf("Print by function \n");
    printf("Book name : %s\nAuthor : %s\nPages : %d\n\n",n,a,*pg);
}