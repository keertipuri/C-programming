//program to read and write in a file
#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *file;
    char fileName[50];
    char data[100];

    // Get the file name from the user
    printf("Enter the name of the file: ");
    scanf("%s", fileName);

    // Open the file for writing
    file = fopen(fileName, "w");

    // Check if the file is opened successfully
    if (file == NULL) {
        printf("Error opening the file for writing.\n");
        return 1; // Exit with an error code
    }

    // Get data from the user and write it to the file
    printf("Enter data to write to the file (max 100 characters):\n");
    fflush(stdin); // Clear input buffer
    fgets(data, sizeof(data), stdin);
    fprintf(file, "%s", data);

    // Close the file after writing
    fclose(file);

    // Open the file for reading
    file = fopen(fileName, "r");

    // Check if the file is opened successfully
    if (file == NULL) {
        printf("Error opening the file for reading.\n");
        return 1; // Exit with an error code
    }

    // Read and display the content of the file
    printf("\nContent of the file:\n");
    while (fgets(data, sizeof(data), file) != NULL) {
        printf("%s", data);
    }

    // Close the file after reading
    fclose(file);

    return 0;
}
