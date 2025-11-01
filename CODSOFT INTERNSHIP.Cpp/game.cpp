#include <iostream>
#include <cstdlib>  // for rand() and srand()
#include <ctime>    // for time()

using namespace std;

int main() {
    int randomNumber, guess;

    // Seed random number generator
    srand(time(0));

    // Generate random number between 1 and 100
    randomNumber = rand() % 100 + 1;

    cout << "🎯 Welcome to the Number Guessing Game!" << endl;
    cout << "I'm thinking of a number between 1 and 100." << endl;

    // Repeat until user guesses correctly
    do {
        cout << "\nEnter your guess: ";
        cin >> guess;

        if (guess > randomNumber) {
            cout << "📉 Too high! Try a smaller number.";
        } 
        else if (guess < randomNumber) {
            cout << "📈 Too low! Try a larger number.";
        } 
        else {
            cout << "🎉 Congratulations! You guessed the correct number: " << randomNumber << endl;
        }

    } while (guess != randomNumber);

    return 0;
}
