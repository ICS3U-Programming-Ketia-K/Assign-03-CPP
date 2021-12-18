// Copyright (c) 2021 Ketia Gaelle Kaze All rights reserved.
//
// Created by: Ketia Gaelle Kaze
// Created on: Dec 2021
// This program asks the user to enter two numbers
// It then compares the two numbers to show which number is larger or smaller
// than the other or if both numbers are equal
#include <iostream>
#include <string>
int askAgain() {
    std::string askToPlay;
    std::cout << "\033[1;33;38mwould you like to play again :)?\
    Please choose either y/n:  ";
    std::cin >> askToPlay;
    if (askToPlay == "y" || askToPlay == "Y") {
        // declare a variable
        std::string firstNumberAsString;
        std::string secondNumberAsString;
        int firstNumberAsInt;
        int secondNumberAsInt;
         // Get firstNumberAsString from the user
        std::cout <<"\033[1;36;38mEnter first number: ";
        std::cin >> firstNumberAsString;
        // try catch
        try {
            // cast firstNumberAsString to an integer
            firstNumberAsInt = std::stoi(firstNumberAsString);
            // Get secondNumberAsString
            std::cout <<"\033[1;36;38mEnter second number: ";
            std::cin >> secondNumberAsString;
            // cast secondNumberAsString to an integer
            try {
                secondNumberAsInt = std::stoi(secondNumberAsString);
                if (firstNumberAsInt < secondNumberAsInt) {
                    std::cout << firstNumberAsString << " is smaller than "\
                    << secondNumberAsString<< "\n";
                    std::cout << "" << std::endl;
                } else if (firstNumberAsInt > secondNumberAsInt) {
                    std::cout << firstNumberAsString <<" is larger than "\
                    << secondNumberAsString<< "\n";
                    std::cout << "" << std::endl;
                } else {
                    std::cout << firstNumberAsString <<" is equal to "\
                    << secondNumberAsString << "\n";
                    std::cout << "" << std::endl;
                // Tell the user if they did not enter an integer
                }
            } catch(std::invalid_argument) {
                std::cout << "" << std::endl;
                std::cout <<secondNumberAsString << " is not an integer.\n";
                std::cout << "" << std::endl;
            }
        } catch(std::invalid_argument) {
            std::cout << "" << std::endl;
            std::cout << firstNumberAsString <<" is not an integer.\n";
            std::cout << "" << std::endl;
        }
        askAgain();
    } else if (askToPlay == "n" || askToPlay == "N") {
        std::cout << "" << std::endl;
        std::cout << "\033[1;34;38mThank you for playing.\
        Hope you enjoyed the game!\n";
    } else {
      std::cout << "\033[1;34;38mPlease enter either y/n \n";
      askAgain();
    }
}
int main() {
    // declare a variable
    std::string firstNumberAsString;
    std::string secondNumberAsString;
    int firstNumberAsInt;
    int secondNumberAsInt;
    // Get firstNumberAsString from the user
    std::cout <<"\033[1;36;38m Enter first number: ";
    std::cin >> firstNumberAsString;
    // try catch
    try {
        // cast firstNumberAsString to an integer
        firstNumberAsInt = std::stoi(firstNumberAsString);
        // Get secondNumberAsString
        std::cout <<"\033[1;36;38m Enter second number: ";
        std::cin >> secondNumberAsString;
        // cast secondNumberAsString to an integer
        try {
            secondNumberAsInt = std::stoi(secondNumberAsString);
            if (firstNumberAsInt < secondNumberAsInt) {
                 std::cout << "" << std::endl;
                std::cout << firstNumberAsString << " is smaller than "\
                << secondNumberAsString << "\n";
                std::cout << "" << std::endl;
            } else if (firstNumberAsInt > secondNumberAsInt) {
                 std::cout << "" << std::endl;
                std::cout << firstNumberAsString <<" is larger than "\
                << secondNumberAsString<< "\n";
                std::cout << "" << std::endl;
            } else {
                 std::cout << "" << std::endl;
                std::cout << firstNumberAsString <<" is equal to "\
                << secondNumberAsString<< "\n";
                 std::cout << "" << std::endl;
            // Tell the user if they did not enter an integer
            }
        }catch(std::invalid_argument) {
            std::cout << "" << std::endl;
            std::cout <<secondNumberAsString << " is not an integer.\n";
            std::cout << "" << std::endl;
        }
    }catch(std::invalid_argument) {
        std::cout << "" << std::endl;
        std::cout << firstNumberAsString <<" is not an integer.\n";
        std::cout << "" << std::endl;
    }
    askAgain();
    }


