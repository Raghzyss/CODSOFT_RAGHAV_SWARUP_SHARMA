#include <iostream>
#include <cstdlib>
#include <ctime> 

using namespace std;

int main() {

    srand(time(0));
    
    // To generate a random number between 1 and 100
    int numtoguess = rand() % 100 + 1;
    int guess = 0;

    cout << "Guess the number between 1 and 100: ";
    while (guess != numtoguess) {
        cin >> guess;

        // Checks if the guess is too high, too low, or correct
        if (guess < numtoguess) {
            cout << guess << " is too low! Try again: ";
        } else if (guess > numtoguess) {
            cout << guess << " is too high! Try again: ";
        } else {
            cout << "Congratulations! You guessed it right." << endl;
        }
    }

    return 0;
}
