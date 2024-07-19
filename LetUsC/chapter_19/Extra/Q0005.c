/*
  C program to create a file and write data into file.
 */

#include <stdio.h>
#include <stdlib.h>
int main() {
    FILE *filePointer;
    char data[100]; // Assuming the data is a string of up to 100 characters

    // Create and open a file in write mode
    filePointer = fopen("sample.txt", "w");

    if (filePointer == NULL) {
        printf("Error creating the file.\n");
        return 1;
    }

    // Write data to the file
    fprintf(filePointer, "My name is ");
    fgets(data, sizeof(data), stdin);
    fputs(data,filePointer);
    fclose(filePointer);
    filePointer = fopen("sample.txt", "r");
    if (filePointer == NULL) {
        printf("Error opening the file.\n");
        return 1;
    }
    // Read and display the file contents
    printf("File Contents:\n\n");
    while (fgets(data, sizeof(data), filePointer) != NULL) {
        printf("%s", data);
    }

    // Close the file
    fclose(filePointer);

    return 0;
}