#include <stdio.h>
#include <stdlib.h>
#define MAX 200
typedef struct Customer
{
    int accountNumber;
    char name[50];
    float balance;
} Customer;
int noOfAccounts = 0;
void addAccount(Customer *c);
void printAllAccounts(Customer *c);
void printSingleAccByAccNo(Customer *c);
void depositMoney(Customer *c);
void withdrawalMoney(Customer *c);
void printAllAccountsBelow1000(Customer *c);
void deleteAccount(Customer *c);
int main()
{

    Customer accounts[MAX];
    int n;
    while (1)
    {
        printf("1. Add Account.\n");
        printf("2. Print All Accounts.\n");
        printf("3. Print Single Account by A/C no.\n");
        printf("4. Deposit Money\n");
        printf("5. Withdrawal Money\n");
        printf("6. Print All Accounts Below 1000\n");
        printf("7. Delete Account\n");
        printf("8. Exit\n");
        scanf("%d", &n);
        switch (n)
        {
        case 1:
            addAccount(accounts);
            break;
        case 2:
            printAllAccounts(accounts);
            break;
        case 3:
            printSingleAccByAccNo(accounts);
            break;
        case 4:
            depositMoney(accounts);
            break;
        case 5:
            withdrawalMoney(accounts);
            break;
        case 6:
            printAllAccountsBelow1000(accounts);
            break;
        case 7:
            deleteAccount(accounts);
            break;
        case 8:
            exit(1);
            break;
        default:
        }
    }

    return 0;
}

void addAccount(Customer *c)
{
    printf("Enter the Name of Applicant : ");
    scanf("%s", c[noOfAccounts].name);
    printf("Enter the Initial Balance : ");
    scanf("%f", &c[noOfAccounts].balance);
    c[noOfAccounts].accountNumber = noOfAccounts + 1;
    printf("Account Number: %d Created Successfully!\n", c[noOfAccounts].accountNumber);
    noOfAccounts++;
    getchar();
    getchar();
    system("cls");
}
void printAllAccounts(Customer *c)
{
    int i;
    for (i = 0; i < noOfAccounts; i++)
    {
        printf("Account Number: %d\n", c[i].accountNumber);
        printf("Name: %s\n", c[i].name);
        printf("Balance: %.2f\n", c[i].balance);
        printf("----------------\n");
    }
    getchar();
    getchar();
    system("cls");
}
void printSingleAccByAccNo(Customer *c)
{
    int accNo;
    printf("Enter the account no : ");
    scanf("%d", &accNo);
    for (int i = 0; i < noOfAccounts; i++)
    {
        if (accNo == c[i].accountNumber)
        {
            printf("Account Number: %d\n", c[i].accountNumber);
            printf("Name: %s\n", c[i].name);
            printf("Balance: %.2f\n", c[i].balance);
            printf("----------------\n");
        }
    }
    getchar();
    getchar();
    system("cls");
}
void depositMoney(Customer *c)
{
    int accNo;
    float money;
    printf("Enter the account no : ");
    scanf("%d", &accNo);
    for (int i = 0; i < noOfAccounts; i++)
    {
        if (accNo == c[i].accountNumber)
        {
            printf("Enter the money to deposit : ");
            scanf("%f", &money);
            c[i].balance += money;
            printf("Money Deposit successfully in Account No %d!\n", c[i].accountNumber);
            printf("Current balance : %.2f\n", c[i].balance);
        }
    }
    getchar();
    getchar();
    system("cls");
}
void withdrawalMoney(Customer *c)
{
    int accNo;
    float money;
    printf("Enter the account no : ");
    scanf("%d", &accNo);
    for (int i = 0; i < noOfAccounts; i++)
    {
        if (accNo == c[i].accountNumber)
        {
            printf("Enter the money to Withdrawal : ");
            scanf("%f", &money);
            c[i].balance -= money;
            printf("Money Withdrawal successfully in Account No %d!\n", c[i].accountNumber);
            printf("Current balance : %.2f\n", c[i].balance);
        }
    }
    getchar();
    getchar();
    system("cls");
}
void printAllAccountsBelow1000(Customer *c)
{
    for (int i = 0; i < noOfAccounts; i++)
    {
        if (c[i].balance < 1000)
        {
            printf("Account Number: %d\n", c[i].accountNumber);
            printf("Name: %s\n", c[i].name);
            printf("Balance: %.2f\n", c[i].balance);
            printf("----------------\n");
        }
    }
    getchar();
    getchar();
    system("cls");
}
void deleteAccount(Customer *c)
{
    int accNo;
    printf("Enter the account no to delete : ");
    scanf("%d", &accNo);
    for (int i = 0; i < noOfAccounts; i++)
    {
        if (accNo == c[i].accountNumber)
        {
            for (int j = i; j < noOfAccounts - 1; j++)
            {
                c[j] = c[j + 1];
            }
            noOfAccounts--;
            printf("Account No %d deleted successfully!\n", accNo);
            break;
        }
    }
    getchar();
    getchar();
    system("cls");
}
