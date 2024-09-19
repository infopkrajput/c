#include"createLinkList.c"
void InsertDataInLinkList();
int main()
{
    menu();
    return 0;
}

void menu()
{
    printf("Link List : \n");
    printf("1. Insert data in the list \n");
    createLinkList();
    printLinkList();
}
void InsertDataInLinkList()
{
    Node *add;
    add = (Node *)malloc(sizeof(Node));
    printf("Enter the data to be inserted: ");
    scanf("%d", &add->data);
    add -> next = first;
    first = add;    
}
