#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
  srand(time(0)); // Seed the random number generator
  int secretNumber = rand() % 100 + 1; // Generate a random number between 1 and 100
  int guess;
  int attempts = 0;

  cout << "Welcome to the Number Guessing Game!\n";
  cout << "I've chosen a secret number between 1 and 100.\n";

  do {
    cout << "Enter your guess: ";
    cin >> guess;
    attempts++;

    if (guess < secretNumber) {
      cout << "Too low! Try again.\n";
    } else if (guess > secretNumber) {
      cout << "Too high! Try again.\n";
    }
  } while (guess != secretNumber);

  cout << "Congratulations! You guessed the number in " << attempts << " attempts.\n";

  return 0;
}