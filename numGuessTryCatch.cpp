// Copyright (c) 2025 Adwok Adiebo All rights reserved.
//.
// Created by: Adwok Adiebo
// Created on: March 28, 2025
// This program checks for a runtime error

#include <cstdlib>
#include <ctime>  // Required to include time for srand()
#include <iostream>
#include <string>

int main() {
    srand((unsigned)time(NULL));

    // Generates a number between 0 and 9
    int correctNumber = rand_r() % 9 + 0;
    std::cout << "Guess an integer between 0 and 9: ";
    std::string userGuessAsString;  // Declare the string variable
    std::cin >> userGuessAsString;

    // This is our first decision if the conditions
    // are met then the user guessed the correct number.
    try {
        // Converting the variable's value to an integer
        int userGuess = stoi(userGuessAsString);
        if (userGuess == correctNumber) {
            std::cout << "You guessed the correct number!" << std::endl;
        } else {
            // This our second decision if the user
            // guessed the wrong number then he is told so
            std::cout << "You guessed the wrong number." << std::endl;
            std::cout << "The correct number is " << correctNumber << std::endl;
        }
    } catch (std::invalid_argument) {
        // This is our last decision if all the
        // conditions are not met and not executed
        std::cout << "You entered an invalid integer." << std::endl;
    }
    std::cout << "Thank you for playing." << std::endl;
}
