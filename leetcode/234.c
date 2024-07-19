#include <stdio.h>
#include <stdbool.h>

// Definition for singly-linked list.
struct ListNode
{
    int val;
    struct ListNode *next;
};

// Function to check if a linked list is a palindrome
void isPalindrome_(
    struct ListNode head[static 1],
    struct ListNode tail[static 1],
    bool *res // reference
)
{
    static struct ListNode *base = NULL;
    if (head)
    {
        base = head;
    }
    if (base == tail)
        return;
    if (tail->next)
    {
        isPalindrome_(NULL, tail->next, res);
    }

    if (!(*res))
        return;
    *res = base->val == tail->val;
    base = base->next;
}

bool isPalindrome(struct ListNode *head)
{
    bool res = true;
    if (head && head->next)
    {
        isPalindrome_(head, head->next, &res);
    }
    return res;
}

// Helper function to create a new linked list node
struct ListNode *createNode(int val)
{
    struct ListNode *newNode = (struct ListNode *)malloc(sizeof(struct ListNode));
    newNode->val = val;
    newNode->next = NULL;
    return newNode;
}

// Helper function to print the linked list
void printList(struct ListNode *head)
{
    while (head)
    {
        printf("%d -> ", head->val);
        head = head->next;
    }
    printf("NULL\n");
}

int main()
{
    // Example usage:
    struct ListNode *head = createNode(1);
    head->next = createNode(2);
    head->next->next = createNode(3);
    head->next->next->next = createNode(2);
    head->next->next->next->next = createNode(1);

    printf("Original linked list:\n");
    printList(head);

    bool result = isPalindrome(head);
    if (result)
    {
        printf("The linked list is a palindrome.\n");
    }
    else
    {
        printf("The linked list is not a palindrome.\n");
    }

    // Clean up memory (free nodes)
    while (head)
    {
        struct ListNode *temp = head;
        head = head->next;
        free(temp);
    }

    return 0;
}
