#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int arr[25];  // Array of 25 integers

    // Seed the random number generator
    srand(time(0));

    // Initializing the array with random values
    for (int i = 0; i < 25; i++) {
        arr[i] = rand() % 100;  // Random values between 0 and 99
    }

    // Printing the values of the array
    for (int i = 0; i < 25; i++) {
        printf("%d, ",arr[i]);
    }

    return 0;
}
