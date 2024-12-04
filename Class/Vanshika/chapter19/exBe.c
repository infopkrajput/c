#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct customer
{
    int accno;
    char name[50];
    float balance;
};
struct transaction
{
    int accno;
    char type[10];
    float amount;
};
int main()
{
    FILE *p, *q, *r;
    struct customer c, d;
    struct transaction t;
    int n;
    int x;
    while (1)
    {
        printf("\n1. Create Account\n2. Deposit\\Withdraw\n3. Balance Enquiry\n4. Print All\n5. Delete Account\n6. View Transaction of account\n7. Exit\n==> ");
        scanf("%d", &n);
        switch (n)
        {
        case 1:
            p = fopen("customer.dat", "ab");
            printf("\nEnter Account Number: ");
            scanf("%d", &c.accno);
            printf("\nEnter Name: ");
            scanf("%s", c.name);
            printf("\nEnter Initial Balance: ");
            scanf("%f", &c.balance);
            fwrite(&c, sizeof(struct customer), 1, p);
            printf("Account Created Successfully!!\n");
            fclose(p);
            break;
        case 2:
            q = fopen("transaction.dat", "ab");
            printf("\nEnter Account Number: ");
            scanf("%d", &t.accno);
        reenter:
            printf("\nEnter Type (Deposit/Withdraw): ");
            scanf("%s", t.type);
            if (strcmp("Deposit", t.type) != 0 && strcmp("Withdraw", t.type) != 0)
            {
                printf("Invalid transaction type. Please enter Deposit or Withdraw.\n");
                goto reenter;
            }
            printf("\nEnter Amount: ");
            scanf("%f", &t.amount);
            p = fopen("temp.dat", "wb");
            r = fopen("customer.dat", "rb");
            if (r == NULL)
            {
                printf("No records found.\n");
                break;
            }
            while (fread(&d, sizeof(d), 1, r) != 0)
            {
                if (d.accno == t.accno)
                {
                    if (strcmp(t.type, "Deposit") == 0)
                    {
                        d.balance = d.balance + t.amount;
                        printf("Money Deposit Successfully!\n");
                    }
                    else if (strcmp(t.type, "Withdraw") == 0)
                    {
                        d.balance = d.balance - t.amount;
                        printf("Money Withdraw Successfully!\n");
                    }
                    fwrite(&d, sizeof(d), 1, p);
                }
                else
                {
                    fwrite(&d, sizeof(d), 1, p);
                }
            }
            fwrite(&t, sizeof(d), 1, q);
            t.accno = 0;
            fclose(r);
            fclose(p);
            remove("customer.dat");
            rename("temp.dat", "customer.dat");
            fclose(q);
            break;
        case 3:
            system("cls");
            printf("\nEnter Account Number: ");
            scanf("%d", &x);
            p = fopen("customer.dat", "rb");
            if (p == NULL)
            {
                printf("No records found.\n");
                break;
            }
            while (fread(&d, sizeof(d), 1, p) != 0)
            {
                if (d.accno == x)
                {
                    printf("Account no : %d\n", d.accno);
                    printf("Name :       %s\n", d.name);
                    printf("Balance :    %.2f\n", d.balance);
                    printf("----------------\n");
                }
            }
            fclose(p);
            break;
        case 4:
            system("cls");
            q = fopen("customer.dat", "rb");
            if (q == NULL)
            {
                printf("No records found.\n");
                break;
            }
            while (1)
            {
                fread(&c, sizeof(struct customer), 1, q);
                if (feof(q))
                    break;

                printf("Account no : %d\n", c.accno);
                printf("Name :       %s\n", c.name);
                printf("Balance :    %.2f\n", c.balance);
                printf("----------------\n");
            }
            fclose(q);
            break;
        case 5:
            printf("Enter the account number : ");
            scanf("%d", &x);
            p = fopen("customer.dat", "rb");
            q = fopen("temp.dat", "wb");
            if (p == NULL)
            {
                printf("No records found.\n");
                break;
            }
            while (fread(&c, sizeof(struct customer), 1, p) != 0)
            {

                if (c.accno == x)
                {
                    if (c.balance != 0)
                    {
                        printf("Cannot delete an account with balance.\n");
                        printf("Withdraw all money then delete account\n");
                        fwrite(&c, sizeof(struct customer), 1, q);
                    }
                    else
                    {
                        printf("Account deleted Successfully!\n");
                    }
                }
                else
                {
                    fwrite(&c, sizeof(struct customer), 1, q);
                }
            }
            fclose(p);
            fclose(q);
            remove("customer.dat");
            rename("temp.dat", "customer.dat");
            break;
        case 6:
            system("cls");
            printf("Enter the account number : ");
            scanf("%d", &x);
            q = fopen("transaction.dat", "rb");
            if (q == NULL)
            {
                printf("No transaction found.\n");
                break;
            }
            while (fread(&t, sizeof(struct transaction), 1, q) != 0)
            {
                if (t.accno == x)
                {
                    printf("Account no : %d\n", t.accno);
                    printf("Type :       %s\n", t.type);
                    printf("Amount :    %.2f\n", t.amount);
                    printf("----------------\n");
                }
            }
            fclose(q);
            break;
        default:
            printf("\nInvalid Choice\n");
            exit(1);
        }
    }

    return 0;
}