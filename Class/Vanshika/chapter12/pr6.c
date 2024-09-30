#include <stdio.h>

void exiting();
void starting();

int main()
{
    starting();  // Call starting function at the beginning
    printf("hello world\n");
    exiting();   // Call exiting function at the end
    return 0;
}

void exiting()
{
    printf("Ending the C program\n");
}

void starting()
{
    printf("Hello, I am using C\n");
}
