// Copyright (c) 2022 Spencer Scarlett All rights reserved.
// .
// Created by: Spencer Scarlett
// A program which loops and calculates the sum of a
// inputted number from 0 until the user number.

#include <iostream>

int main() {
    // Initialize the loop  and variables.
    int counter = 0;
    int sum = 0;
    int userNumInp;
    float userNumFlo;
    std::string userNumberStr;

    // Asks user to enter a number
    std::cout << "Input the number you wish to calculate: ";
    std::cin >> userNumberStr;

    // Checks for invalid inputs
    try {
        // Creates a Float variable of user's number by casting
        userNumFlo = std::stof(userNumberStr);

        // Creates a Integer variable of user's number by casting
        userNumInp = std::stoi(userNumberStr);

        // Decimals check
        if (userNumFlo != userNumInp) {
            std::cout << userNumFlo << " Invalid input, not a full number"
                      << std::endl;

            // Negative check
        } else if (userNumInp < 0) {
            std::cout << userNumInp << " Number must be positive"
                      << std::endl;

            // Move on if correct
        } else {
            // Calculates the total sum
            while (counter <= userNumInp) {
                // Tracks how many times it used the loop
                std::cout << "Tracked "
                << counter << " times through the loop."
                << std::endl;

                // Calculates sum of user's number
                sum += counter;

                // Counter the loop
                counter++;
            }
            // Displays the sum of the numbers to the user
            std::cout << "The sum of the numbers from 0 to " << userNumInp
                      << " = " << sum << std::endl;
        }
        // Invalid case
    } catch (std::invalid_argument) {
        std::cout << userNumberStr <<
        " number must be positive and a whole number"
                  << std::endl;
    }
}
