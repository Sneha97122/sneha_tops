#include <stdio.h>

int amount = 0, quantity = 0, total_amount = 0;
char choice, again;

void menu() {
    printf("\nItem Name\tPrice");
    printf("\n 1. Pizza\t180rs");
    printf("\n 2. Burger\t100rs");
    printf("\n 3. Pasta\t150rs");
    printf("\n 4. Lazaniya\t200rs");
    printf("\n 5. Cake\t250rs\n");
}

void order() {
    printf("\nEnter your choice (1-5): ");
    scanf(" %c", &choice);

    switch (choice) {
        case '1':
            printf("\nYou chose Pizza");
            printf("\nEnter the quantity: ");
            scanf("%d", &quantity);
            amount = quantity * 180;
            break;
        case '2':
            printf("\nYou chose Burger");
            printf("\nEnter the quantity: ");
            scanf("%d", &quantity);
            amount = quantity * 100;
            break;
        case '3':
            printf("\nYou chose Pasta");
            printf("\nEnter the quantity: ");
            scanf("%d", &quantity);
            amount = quantity * 150;
            break;
        case '4':
            printf("\nYou chose Lazaniya");
            printf("\nEnter the quantity: ");
            scanf("%d", &quantity);
            amount = quantity * 200;
            break;
        case '5':
            printf("\nYou chose Cake");
            printf("\nEnter the quantity: ");
            scanf("%d", &quantity);
            amount = quantity * 250;
            break;
        default:
            printf("\nInvalid choice!");
            amount = 0;
    }

    printf("\nAmount for this item = %d\n", amount);
    total_amount += amount;
}

int main() {
    do {
        menu();
        order();

        printf("\nDo you want to order more? (y/n): ");
        scanf(" %c", &again);

    } while (again == 'y' || again == 'Y');

    printf("\nYour total bill is = %d\n", total_amount);
    printf("\nThank you for your order!\n");

    return 0;
}

