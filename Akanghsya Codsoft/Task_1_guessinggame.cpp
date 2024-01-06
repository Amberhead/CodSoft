#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(0));
    
    int secretNumber = rand() % 100 + 1;
    
    int guess;
    int attempts = 0;
    
    cout << "Welcome to the Guessing Game!" << endl;
    
    do {
        cout << "Enter your guess (1-100): ";
        cin >> guess;
        attempts++;
        
        if (guess < secretNumber) {
            cout << "You guessed is too low! Try again." << endl;
        } else if (guess > secretNumber) {
            cout << "You guessed is too high! Try again." << endl;
        } else {
            cout << "Congratulations! You guessed the correct number, which is " << secretNumber << endl;
            cout << "It took you " << attempts << " attempts to guess the number." << endl;
        }
    } while (guess != secretNumber);
    
    return 0;
}
