/*Write a C program that generates Pascal's Triangle up to N rows using loops. 
o Challenge: Implement the same program using a recursive function.*/
#include <stdio.h>
int binomialCoeff(int n, int k) {
    if (k == 0 || k == n)
        return 1;
    return binomialCoeff(n - 1, k - 1) + binomialCoeff(n - 1, k);
}

int main() {
    int n, choice;
    int i, j, num;

    printf("Enter number of rows: ");
    scanf("%d", &n);

    printf("\nChoose method:\n");
    printf("1. Using Loops\n");
    printf("2. Using Recursion\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    printf("\nPascal's Triangle:\n\n");

    if (choice == 1) {
        // Loop version
        for (i = 0; i < n; i++) {
            for (j = 0; j < n - i - 1; j++)
                printf("  ");

            num = 1;
            for (j = 0; j <= i; j++) {
                printf("%4d", num);
                num = num * (i - j) / (j + 1);
            }
            printf("\n");
        }
    }
    else if (choice == 2) {
       
        for (i = 0; i < n; i++) {
            for (j = 0; j < n - i - 1; j++)
                printf("  ");

            for (j = 0; j <= i; j++) {
                printf("%4d", binomialCoeff(i, j));
            }
            printf("\n");
        }
    }
    else {
        printf("Invalid choice!\n");
    }

    return 0;
}

