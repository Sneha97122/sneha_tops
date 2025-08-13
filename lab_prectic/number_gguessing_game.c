/*Write a C program that implements a simple number guessing game. The program should generate
 a random number between 1 and 100, and theuser should guess the number within a limited number 
 of attempts. 
o Challenge: Provide hints to the user if the guessed number is too high or too low.*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {
    int randomNumber, guess, attempts = 0, maxAttempts = 7;
    srand(time(0));
    randomNumber = (rand() % 100) + 1;  

    printf("=== Number Guessing Game ===\n");
    printf("I have chosen a number between 1 and 100.\n");
    printf("You have %d attempts to guess it!\n", maxAttempts);

    while (attempts < maxAttempts) {
        printf("\nEnter your guess: ");
        scanf("%d", &guess);
        attempts++;

        if (guess == randomNumber) {
            printf("?? Congratulations! You guessed the number in %d attempts.\n", attempts);
            break;
        } 
        else if (guess > randomNumber) {
            printf("Too high! Try a smaller number.\n");
        } 
        else {
            printf("Too low! Try a bigger number.\n");
        }
    }

    if (attempts == maxAttempts && guess != randomNumber) {
        printf("\n? Sorry, you've used all your attempts. The number was %d.\n", randomNumber);
    }

    return 0;
}

