/*
A dequeue is an ordered set of elements in which elements may be inserted or retrieved from either end. using an array simulate a dequeue of characters and the operation retrieve left,retrieve right, insert left, insert right. Exceptional conditions such as dequeue full of empty should be reported. use two pointers left and right for this simulation.
*/
#include <stdio.h>
#include <stdlib.h>
#define MAX 5
void lAdd(int *lside, char *q, int *sizeq, char ch);
void rAdd(int *lside, char *q, int *sizeq, char ch);
void show(char *q, int *sizeq);
void rDel(int *lside, char *q, int *sizeq);
void lDel(int *lside, char *q, int *sizeq);

int main()
{
    char que[MAX];
    int left, size, x;
    left = size = -1;
    char ch;
    while (1)
    {
        printf("Choose the option.\n");
        printf("1. insert data form Right\n");
        printf("2. insert data from Left\n");
        printf("3. Delete data from Right\n");
        printf("4. Delete data from Left\n");
        printf("5. Display Menu\n");
        printf("6. Exit Program\n==>: ");
        scanf("%d", &x);
        switch (x)
        {
        case 1:
            getchar();
            printf("Enter the character ");
            scanf("%c", &ch);
            rAdd(&left, que, &size, ch);
            
            break;
        case 2:
            getchar();
            printf("Enter the character ");
            scanf("%c", &ch);
            lAdd(&left, que, &size, ch);
            printf("Character entered Successfully!\n\n");
            break;
        case 3:
            rDel(&left, que, &size);
            printf("Character Delete Successfully!\n\n");
            break;
        case 4:
            lDel(&left, que, &size);
            printf("Character Delete Successfully!\n\n");
            break;
        case 5:
            show(que, &size);
            break;
        case 6:
            exit(1);
            break;
        }
    }
    return 0;
}

void rAdd(int *lside, char *q, int *sizeq, char ch)
{
    if (*sizeq == MAX - 1)
    {
        printf("\nDequeue is full, no more insertion is possible.\n");
        return;
    }

    if (*sizeq == -1)
        *sizeq = 0;
    else
    {
        *sizeq = *sizeq + 1;
    }
    q[*sizeq] = ch;
    printf("Character entered Successfully!\n\n");
}

void lAdd(int *lside, char *q, int *sizeq, char ch)
{
    int i;
    if (*sizeq == MAX - 1)
    {
        printf("\nDequeue is full, no more insertion is possible.\n");
        return;
    }

    for (i = *sizeq; i >= 0; i--)
        q[i + 1] = q[i];

    q[0] = ch;
    *sizeq = *sizeq + 1;
}

void show(char *q, int *sizeq)
{
    int i;
    printf("\n\nList\n");
    for (i = 0; i <= *sizeq; i++)
        printf("%c ", q[i]);
    printf("\n\n");
}

void lDel(int *lside, char *q, int *sizeq)
{
    int item = q[0], i;
    if (*sizeq == -1)
    {
        printf("\nList is empty.\n");
        return;
    }

    for (i = 0; i < *sizeq; i++)
        q[i] = q[i + 1];

    *sizeq = *sizeq - 1;
}

void rDel(int *lside, char *q, int *sizeq)
{
    if (*sizeq == -1)
    {
        printf("\nList is empty.\n");
        return;
    }
    *sizeq = *sizeq - 1;
}