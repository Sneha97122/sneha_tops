#include<iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){
	string name;
	string choices[] = {"Rock", "Paper", "Scissors"};
    int userChoice, computerChoice;
	int n,i;
	cout<<"\n ------------------------*";
	cout<<"\n \t NAME \t ";
	cout<<"\n ------------------------*";
	cout<<"\n Enter Your Name: ";
	cin>>name;
	
	cout<<"\n ------------------------*";
	cout<<"\n \t ROUNDS \t ";
	cout<<"\n ------------------------*";
	
	
	cout<<name<<"\n How many Rounds you want to play? ";
	cout<<"\n enter your round choise=";
	cin>>n;
	for(i=0;i<=n;i++){
		srand(time(0));

    cout << "Rock-Paper-Scissors Game\n";
    cout << "0: Rock\n1: Paper\n2: Scissors\n";
    cout << "Enter your choice (0-2): ";
    cin >> userChoice;
    
     computerChoice = rand() % 3;

    cout << "You chose: " << choices[userChoice] << endl;
    cout << "Computer chose: " << choices[computerChoice] << endl;
    
    if (userChoice == computerChoice)
        cout << "It's a tie!\n";
    else if ((userChoice == 0 && computerChoice == 2) ||
             (userChoice == 1 && computerChoice == 0) ||
             (userChoice == 2 && computerChoice == 1))
        cout << "You win!\n";
    else
        cout << "Computer wins!\n";
	}
	
		
}

