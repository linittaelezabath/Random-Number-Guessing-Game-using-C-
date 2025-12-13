#include <iostream>
#include <cstdlib>   
#include <ctime>     

using namespace std;

int main() {
    int secretNumber, guess, attempts = 0;

    
    srand(time(0));

    
    secretNumber = rand() % 100 + 1;

    cout << "Hello, Welcome to the Number Guessing Game!" << endl;
    cout << "I have chosen a number between 1 and 100." << endl;
    cout << "Try to guess it!" << endl;

    do {
        cout << "\nEnter your guess: ";
        cin >> guess;
        attempts++;

        if (guess > secretNumber) {
            cout << "Too high! Try again.";
        } else if (guess < secretNumber) {
            cout << "Too low! Try again.";
        } else {
            cout << "\n Congratulations! You guessed the number!.Hurayy" << endl;
            cout << "Number of attempts: " << attempts << endl;
        }

    } while (guess != secretNumber);

    return 0;

}
