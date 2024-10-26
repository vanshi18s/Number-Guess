#include <iostream>
#include <stdlib.h>  
using namespace std;
int main() {
    int lower=0,upper=100;
    int randomNumber = (rand() % upper-lower)+lower; 
    int userGuess = 0; 
    int turns = 0;
    cout << "Welcome to Number Guessing Game!" <<endl;
    cout << "A random number is being generated between 1 and 100." <<endl;
    do{
        cout << "Please enter your guess: ";
        cin >> userGuess;
        turns++;
        if (userGuess > randomNumber) {
        cout << "Your guess is too high. Try again!" <<endl;
        } else if (userGuess < randomNumber) {
        cout << "Your guess is too low. Try again!" <<endl;
        } else {
        cout << "Congratulations! You guessed the number " << randomNumber
                      << " in " << turns << " attempts!" <<endl;
        }
    } while (userGuess != randomNumber);
    return 0;
}