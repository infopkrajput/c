/*

sscanf

Use of sscanf to extract formatted input from a string
*/
#include <stdio.h>
int main() {
    char data[] = "Age: 25, Height: 180 cm, Weight: 75 kg";
    int age, height, weight;
    sscanf(data, "Age: %d, Height: %d cm, Weight: %d kg", &age, &height, &weight);
    printf("Extracted Data:\n");
    printf("Age: %d\n", age);
    printf("Height: %d cm\n", height);
    printf("Weight: %d kg\n", weight);
    return 0;
}