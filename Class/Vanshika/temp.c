#include <stdio.h>
// function declaration
void pattern(int);
void printno();
void F();
void C();

int main()
{
    // int n = 4;
    // pattern(n);
    // printno();
    F();
    printf("\n");
    C();
}
// function definition
void pattern(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = n - 1; j >= i; j--)
        {
            printf(" ");
        }
        for (int k = 1; k <= i * 2 - 1; k++)
        {
            printf("*");
        }
        printf("\n");
    };
}

void printno()
{
    long long int mno;
    printf("\n Enter Mobile Number : ");
    scanf("%lld", &mno);
    printf("Your Mobile No is : %lld", mno);
}

void F()
{
    int n = 7;
    int j;
    for (int i = 1; i <= n; i++)
    {
        if (i == 1)
        {
            for (j = 1; j <= 5; j++)
            {
                printf("#");
            }
        }
        if (i == 4)
        {
            for (j = 1; j <= 4; j++)
            {
                printf("#");
            }
        }

        printf("#");
        printf("\n");
    }
    // printf("V");
}

void C()
{
    int n = 9 ,j;
    for(int i=1;i<=n;i++)
    {
        if(i==1||i==9 )
        {
            for(j=1;j<=6;j++)
            {
                if(j>0&&j<3)
                printf(" ");
                else
                printf("#");
            }
        }
        printf("\n");
    }
}