// Copyright 2025 Xiaohan All rights reserved.
// Created by Xiaohan
// Created on Feb 22, 2025
// This program that compare 3 numbers from smallest to biggest

#include <iostream>
#include <algorithm>
#include <iomanip>
#include <string>

int main() {
    // Display welcoming message
    std::cout << "Hello! Welcome to this program!" << std::endl;
    // Declare variables for user input as strings
    std::string firstNumStr, secondNumStr, thirdNumStr;
    // Declare variables to hold converted integers
    int firstNumInt, secondNumInt, thirdNumInt;
    // Get input from the user and store it to the related variable
    std::cout << "Please enter the first number as an integer: ";
    std::cin >> firstNumStr;
    std::cout << "Please enter the second number as an integer: ";
    std::cin >> secondNumStr;
    std::cout << "Please enter the third number as an integer: ";
    std::cin >> thirdNumStr;

    // Try to convert strings to integers
    try {
        firstNumInt = std::stoi(firstNumStr);
        secondNumInt = std::stoi(secondNumStr);
        thirdNumInt = std::stoi(thirdNumStr);
        // Check if any two numbers are equal
        if (firstNumInt == secondNumInt || firstNumInt == thirdNumInt
            || secondNumInt == thirdNumInt) {
            std::cout << "Some numbers are equal." << std::endl;
        }
        // Begin comparing the numbers to list them from smallest to largest
        if (firstNumInt < secondNumInt && firstNumInt < thirdNumInt) {
            // First number is the smallest and compare.
            if (secondNumInt < thirdNumInt) {
                std::cout << "The number order is: " << firstNumInt << " < "
                << secondNumInt << " < " << thirdNumInt << std::endl;
            } else {
                std::cout << "The number order is: " << firstNumInt
                << " < " << thirdNumInt << " < " << secondNumInt << std::endl;
            }

        } else {
            // Second number is the smallest, compare first and third
            if (secondNumInt < firstNumInt && secondNumInt < thirdNumInt) {
                // Compare first and third number
                if (firstNumInt < thirdNumInt) {
                    std::cout << "The number order is: " << secondNumInt
                    << " < " << firstNumInt << " < "
                    << thirdNumInt << std::endl;
                } else {
                    std::cout << "The number order is: " << secondNumInt
                    << " < " << thirdNumInt << " < "
                    << firstNumInt << std::endl;
                }
            } else {
                // Third number is the smallest
                if (firstNumInt < secondNumInt) {
                    std::cout << "The number order is: " << thirdNumInt
                    << " < " << firstNumInt << " < "
                    << secondNumInt << std::endl;
                } else {
                    std::cout << "The number order is: " << thirdNumInt
                    << " < " << secondNumInt << " < "
                    << firstNumInt << std::endl;
                }
            }
    }
    // Find and display smallest and largest number using std::min and std::max
    int smallest = std::min({firstNumInt, secondNumInt, thirdNumInt});
    int largest = std::max({firstNumInt, secondNumInt, thirdNumInt});
    // Calculate the average with 2 decimal places
    float average = (firstNumInt + secondNumInt + thirdNumInt) / 3.0;

    std::cout << "The smallest number is: " << smallest << std::endl;
    std::cout << "The largest number is: " << largest << std::endl;
    // Display the average with 2 decimal places
    std::cout << std::fixed << std::setprecision(2);
    std::cout << "The average is: " << average << std::endl;
    } catch (std::invalid_argument const &e) {
        // Exceptions where enter an invalid input
        std::cout << "Invalid input, please try again." << std::endl;
    }
    // Ending message
    std::cout << "Thank you for using the program!" << std::endl;
    }
