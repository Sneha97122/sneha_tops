#include <stdio.h>

int main() {
    FILE *file;
    char str[100];

    // Step 1: Write to the file
    file = fopen("sneha.txt", "w");  // Open file in write mode
    if (file == NULL) {
        printf("Error: Could not open file for writing!\n");
        return 1;
    }

    fprintf(file, "Hello Sneha!\nThis is a test file.\n");
    fclose(file);
    printf("Data written to file successfully.\n");

    // Step 2: Read the file
    file = fopen("sneha.txt", "r");  // Open file in read mode
    if (file == NULL) {
        printf("Error: Could not open file for reading!\n");
        return 1;
    }

    printf("\nReading file content:\n");
    while (fgets(str, sizeof(str), file) != NULL) {
        printf("%s", str);
    }

    fclose(file);
    return 0;
}

