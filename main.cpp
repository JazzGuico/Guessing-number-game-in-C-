#include <iostream>
#include <string>
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;


int main() {
	
string name, userI;
string line (40,'+');
int guess;
int attempts = 0;
bool correctGuess = false;
	
	cout << setw(30) << "Welcome player!\n" ;
	system("pause");
	system("cls");
	
	cout << "what shall I call you?\t";
	getline (cin, name) ;
	system("pause");
	system("cls");
	
	cout << setw(20) << "Do you want to play a game " << name <<"?\tYes/No\n";
	cin >> userI;
	
	if (userI == "Yes" || userI == "yes" || userI == "YES") {
		system("cls") ;
		
	    srand(static_cast<unsigned int>(time(0)));
	    int Snumber = rand() % 100 + 1;
	
	    cout << "Welcome to Guess the number challenge!\n";
	    cout << line <<endl ;
	    cout << "I have chosen a number between 1 and 100. Try to guess it!\n";
	
	    while (!correctGuess) {
	        cout << "Enter your guess: ";
	        cin >> guess;
	        attempts++;
	
	        if (guess == Snumber) {
	        	
	            cout << "Congratulations! You guessed the correct number in " << attempts << " attempts.\n";
	            correctGuess = true;
	            
	        } else if (guess < Snumber) {
	        	
	            cout << "Too low. Try again.\n";
	            
	        } else {
	        	
	            cout << "Too high. Try again.\n";
	        }
	    }
	    system("pause");
		system("cls") ;
	    cout << "\t\tThank you for playing, " << name << "!\n";

	} else if (userI == "No" || userI == "NO" || userI == "no") {
		system("cls") ;
		cout << "Thank you for visiting";
		
	} else {
		system("cls") ;
		cout << "Invalid selection";
	}

	return 0;
}
