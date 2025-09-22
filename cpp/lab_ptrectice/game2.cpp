#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    string choices[] = {"Rock", "Paper", "Scissors"};
    int userChoice, computerChoice;

    // Seed random number generator
    srand(time(0));

    cout << "Rock-Paper-Scissors Game\n";
    cout << "0: Rock\n1: Paper\n2: Scissors\n";
    cout << "Enter your choice (0-2): ";
    cin >> userChoice;

    // Generate computer's choice
    computerChoice = rand() % 3;

    cout << "You chose: " << choices[userChoice] << endl;
    cout << "Computer chose: " << choices[computerChoice] << endl;

    // Determine winner
    if (userChoice == computerChoice)
        cout << "It's a tie!\n";
    else if ((userChoice == 0 && computerChoice == 2) ||
             (userChoice == 1 && computerChoice == 0) ||
             (userChoice == 2 && computerChoice == 1))
        cout << "You win!\n";
    else
        cout << "Computer wins!\n";

    return 0;
}

