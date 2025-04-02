// Created by: Hiab G
// Date: Wed, march. 28th
// This program creates a number guessing game where users try to guess a random number between (450, 9078)

#include <iostream>
#include <random>

int main() {
    // Generate random number

std::random_device rseed;
std::mt19937 rgen(rseed());
std::uniform_int_distribution<int> idist(450, 9078);

int someRandomNumber;
someRandomNumber = idist(rgen);


// Get player's guess
std::string playerGuessAsString;
int playerGuess;

try {

    // convert the user's guess to an int
    std::cout << "Enter your guess: ";
    std::cin >> playerGuessAsString;
     playerGuess = std::stoi(playerGuessAsString);
    
// check if the guess is correct
    if (playerGuess == someRandomNumber) {
            std::cout << "Correct!" << std::endl;
        } else {
            std::cout << "Wrong! The number was " << someRandomNumber << std::endl;
        }

} catch (std::invalid_argument) {

// The user did not enter an integer.

    std::cout << playerGuessAsString << " is not an integer.\n";

}
    return 0;
}

