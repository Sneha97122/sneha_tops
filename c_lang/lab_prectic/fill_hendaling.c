/* Write a C program to create a file, write a string into it, close the file, then 
open the file again to read and display its contents. */
#include <stdio.h>

int main() {
    FILE *fp;
    char str[100], ch;

    
    fp = fopen("data.txt", "w");
    if (fp == NULL) {
        printf("Error creating file!\n");
        return 1;
    }

    
    printf("Enter a string to write into the file: ");
    fgets(str, sizeof(str), stdin);

    
    fputs(str, fp);

    
    fclose(fp);

    
    fp = fopen("data.txt", "r");
    if (fp == NULL) {
        printf("Error opening file for reading!\n");
        return 1;
    }

    
    printf("\nContents of the file:\n");
    while ((ch = fgetc(fp)) != EOF) {
        putchar(ch);
    }

    
    fclose(fp);

    return 0;
}


