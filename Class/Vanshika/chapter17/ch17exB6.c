#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 100
struct library
{
    long long accession;
    char title[30];
    char author[20];
    float price;
    char indicate[5];
};
int record = 10;
void addBook(struct library *book);
void displayBooks(struct library *book);
void displayBooksByAuthor(struct library *book);
void displayBooksByTitle(struct library *book);
void sortBooksByname(struct library *book);
void sortBooksByPrice(struct library *book);
void countBooks(struct library *book);
void assignBook(struct library *book);
void collectBook(struct library *book);
int main()
{
    struct library book[MAX] = {
        {9780062917997, "Diamond Doris", "Doris Payne", 100.00, "Yes"},
        {9780062916433, "Cold Storage", "David Koepp", 200.00, "Yes"},
        {9780062963673, "The Dutch House", "Ann Patchett", 300.00, "Yes"},
        {9780062946935, "The Last Train to London", "Meg Waite Clayton", 400.00, "Yes"},
        {9780062889362, "After the Flood", "Kassandra Montag", 500.00, "Yes"},
        {9780062940322, "Avengers", "Kassandra Montag", 700.00, "Yes"},
        {9780062868855, "Country", "Michael Hughes", 500.00, "Yes"},
        {9780062936868, "Your House Will Pay", "Steph Cha", 500.00, "Yes"},
        {9780062936467, "It Would Be Night in Caracas", "Karina Sainz Borgo", 500.00, "Yes"},
        {9780062934364, "Batman", "Karina Sainz Borgo", 400.00, "Yes"},
    };
    while (1)
    {
        int n;
        printf("1. Add book information\n");
        printf("2. Display books information\n");
        printf("3. List all books of given author\n");
        printf("4. List the title of specified book\n");
        printf("5. List the count of books in the library\n");
        printf("6. List the books in the order of the name\n");
        printf("7. List the books in the order of the price\n");
        printf("8. Assign Book\n");
        printf("9. Collect Book\n");
        printf("10. Exit\n");
        scanf("%d", &n);
        getchar();
        switch (n)
        {
        case 1:
            addBook(book);
            break;
        case 2:
            displayBooks(book);
            break;
        case 3:
            displayBooksByAuthor(book);
            break;
        case 4:
            displayBooksByTitle(book);
            break;
        case 5:
            countBooks(book);
            break;
        case 6:
            sortBooksByname(book);
            break;
        case 7:
            sortBooksByPrice(book);
            break;
        case 8:
            assignBook(book);
            break;
        case 9:
            collectBook(book);
            break;
        case 10:
            exit(1);
            break;
        }
    }
    return 0;
}
void addBook(struct library *book)
{
    // Add logic to add a book to the library
    printf("Enter the book Title : ");
    // scanf("%s", &book[record].title);
    gets(book[record].title);
    // getchar();
    printf("Enter the book Author : ");
    // scanf("%s", &book[record].author);
    gets(book[record].author);
    printf("Enter the assassion no. : ");
    scanf("%lld", &book[record].accession);
    printf("Enter the price : ");
    scanf("%f", &book[record].price);
    strcpy(book[record].indicate, "Yes");
    printf("Book added successfully!\n");
    record++;
}
void displayBooks(struct library *book)
{
    int i;
    for (i = 0; i < record; i++)
    {
        printf("Title :         %s\n", book[i].title);
        printf("Author :        %s\n", book[i].author);
        printf("Accession No. : %lld\n", book[i].accession);
        printf("Price :         %.2f\n", book[i].price);
        printf("Availablity? :  %s\n", book[i].indicate);
        printf("--------------------\n");
    }
}
void displayBooksByAuthor(struct library *book)
{
    char author[20];
    printf("Enter the author's name : ");
    gets(author);
    int i;
    for (i = 0; i < record; i++)
    {
        if (stricmp(author, book[i].author) == 0)
        {
            printf("Title :         %s\n", book[i].title);
            printf("Author :        %s\n", book[i].author);
            printf("Accession No. : %lld\n", book[i].accession);
            printf("Price :         %.2f\n", book[i].price);
            printf("Availablity? :  %s\n", book[i].indicate);
            printf("--------------------\n");
        }
    }
}
void displayBooksByTitle(struct library *book)
{
    char title[20];
    printf("Enter the titleof book : ");
    gets(title);
    int i;
    for (i = 0; i < record; i++)
    {
        if (stricmp(title, book[i].title) == 0)
        {
            printf("Title :         %s\n", book[i].title);
            printf("Author :        %s\n", book[i].author);
            printf("Accession No. : %lld\n", book[i].accession);
            printf("Price :         %.2f\n", book[i].price);
            printf("Availablity? :  %s\n", book[i].indicate);
            printf("--------------------\n");
        }
    }
}
void countBooks(struct library *book)
{
    int count = 0;
    int i;
    for (i = 0; i < record; i++)
    {
        if (strcmp(book[i].indicate, "Yes") == 0)
        {
            count++;
        }
    }
    printf("Total number of books in the library : %d\n", count);
}
void sortBooksByname(struct library *book)
{
    struct library newBooks[MAX];
    for (int i = 0; i < record; i++)
    {
        newBooks[i] = book[i];
    }
    for (int i = 0; i < record; i++)
    {
        for (int j = i + 1; j < record; j++)
        {
            if (strcmp(newBooks[i].title, newBooks[j].title) > 0)
            {
                struct library temp = newBooks[i];
                newBooks[i] = newBooks[j];
                newBooks[j] = temp;
            }
        }
    }
    printf("\n\nAfter Sorting by Title : \n");
    displayBooks(newBooks);
}
void sortBooksByPrice(struct library *book)
{
    struct library newBooks[MAX];
    for (int i = 0; i < record; i++)
    {
        newBooks[i] = book[i];
    }
    for (int i = 0; i < record; i++)
    {
        for (int j = i + 1; j < record; j++)
        {
            if (newBooks[i].price > newBooks[j].price)
            {
                struct library temp = newBooks[i];
                newBooks[i] = newBooks[j];
                newBooks[j] = temp;
            }
        }
    }
    printf("\n\nAfter Sorting by Title : \n");
    displayBooks(newBooks);
}
void assignBook(struct library *book)
{
    char title[30];
    printf("Which book you want to assign enter name : ");
    gets(title);
    int i;
    for (i = 0; i < record; i++)
    {
        if (stricmp(title, book[i].title) == 0)
        {
            if (strcmp(book[i].indicate, "No") == 0)
            {
                printf("This book is already assigned to someone \n");
            }
            else
            {
                strcpy(book[i].indicate, "No");
            }
        }
    }
}
void collectBook(struct library *book)
{
    char title[30];
    printf("Which book you want to collect enter name : ");
    gets(title);
    int i;
    for (i = 0; i < record; i++)
    {
        if (stricmp(title, book[i].title) == 0)
        {
            if (strcmp(book[i].indicate, "Yes") == 0)
            {
                printf("This book is already in library \n");
            }
            else
            {
                strcpy(book[i].indicate, "Yes");
            }
        }
    }
}