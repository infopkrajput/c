#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
typedef struct Node
{
    int data;
    struct Node *next;
} Node;
Node *first;
int count = 0;
void createLinkList();
void printLinkList();
void menu();

void createLinkList()
{
    Node *ptr, *temp;
    char ch;

    // Allocate memory for the first node
    ptr = (Node *)malloc(sizeof(Node));
    first = ptr; // Set first node as the head of the list

    do
    {
        // Input data for the node
        printf("Enter the %d's Link List value of link list: ", ++count);
        scanf("%d", &ptr->data);

        // Allocate memory for the next node
        printf("Do you want to add more nodes? (Y/N): \n");
        getchar(); // To consume the newline character left by previous input
        ch = getchar();
        if (ch == 'Y' || ch == 'y')
        {
            temp = (Node *)malloc(sizeof(Node)); // Allocate memory for the next node
            ptr->next = temp;                    // Link current node to the next node
            ptr = temp;                          // Move pointer to the next node
        }
        else
        {
            ptr->next = NULL; // End the list by setting the last node's next to NULL
        }

    } while (ch == 'Y' || ch == 'y');
}
void printLinkList()
{
    printf("Printing Link List : \n");
    Node *ptr;
    ptr = first;
    int i = 1;
    while (ptr != NULL)
    {
        printf("Content Of %d's Link List %d\n", i++, ptr->data);
        ptr = ptr->next;
    }
}