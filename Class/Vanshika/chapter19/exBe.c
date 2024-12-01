#include <stdio.h>
#include <stdlib.h>
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
    FILE *p, *q;
    struct customer c;
    struct transaction t;
    int n;
    while (1)
    {
        printf("\n1. Create Account\n2. Deposit\n3. Withdraw\n4. Balance Enquiry\n5.Print All\n6.Delete Account\n7.Exit");
        scanf("%d", &n);
        switch (n)
        {
        case 1:
            p = fopen("customer.dat", "a");
            printf("\nEnter Account Number: ");
            scanf("%d", &c.accno);
            printf("\nEnter Name: ");
            scanf("%s", c.name);
            printf("\nEnter Initial Balance: ");
            scanf("%f", &c.balance);
            fwrite(&c, sizeof(struct customer), 1, p);
            fclose(p);
            break;
        case 2:
            q = fopen("transaction.dat", "a");
            printf("\nEnter Account Number: ");
            scanf("%d", &t.accno);
            printf("\nEnter Type (Deposit/Withdraw): ");
            scanf("%s", t.type);
            printf("\nEnter Amount: ");
            scanf("%f", &t.amount);
            fwrite(&t, sizeof(struct transaction), 1, q);
            fclose(q);
            break;
        case 3:

            break;
        case 4:
            int x;
            printf("\nEnter Account Number: ");
            scanf("%d", &x);
            q = fopen("customer.dat", "rb");
            while (1)
            {
                fread(&c, sizeof(struct customer), 1, q);
                if (feof(q))
                    break;
                if (c.accno == x)
                {
                    printf("Account no : %d\n", c.accno);
                    printf("Name :       %s\n", c.name);
                    printf("Balance :    %.2f\n", c.balance);
                    break;
                }
            }
            fclose(q);
            break;
        case 5:
            // Print All accounts
            p = fopen("customer.dat", "rb");
            while (1)
            {
                fread(&c, sizeof(struct customer), 1, p);
                if (feof(p))
                    break;
                printf("Account no : %d\n", c.accno);
                printf("Name :       %s\n", c.name);
                printf("Balance :    %.2f\n\n", c.balance);
            }
            fclose(p);
            break;
        case 6:
            int y;
            printf("\nEnter Account Number: ");
            scanf("%d", &y);
            p = fopen("customer.dat", "rb");
            q = fopen("temp.dat", "wb");
            while (1)
            {
                fread(&c, sizeof(struct customer), 1, p);
                if (feof(p))
                    break;
                if (c.accno != y)
                    fwrite(&c, sizeof(struct customer), 1, q);
            }
            fclose(p);
            fclose(q);
            remove("customer.dat");
            rename("customer.dat","temp.dat");
            break;
        default:
            printf("\nInvalid Choice\n");
            exit(1);
        }
    }

    return 0;
}