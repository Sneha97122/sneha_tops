#include <iostream>
#include <cstdlib>  // for rand() and srand()
#include <ctime>    // for time()

using namespace std;

int main() {
    int secretNumber, guess;
    // Seed random number generator
    srand(time(0));
    secretNumber = rand() % 100 + 1; // Random number between 1 and 100

    cout << "Guess the number between 1 and 100!" << endl;

    // Loop until the correct number is guessed
    while (true) {
        cout << "Enter your guess: ";
        cin >> guess;

        if (guess > secretNumber) {
            cout << "Too high! Try again." << endl;
        } 
        else if (guess < secretNumber) {
            cout << "Too low! Try again." << endl;
        } 
        else {
            cout << "Congratulations! You guessed the number!" << endl;
            break;  // exit loop when correct
        }
    }

    return 0;
}


