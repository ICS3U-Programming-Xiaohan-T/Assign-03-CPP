// Copyright 2025 Xiaohan All rights reserved.
// Created by Xiaohan
// Created on Feb 22, 2025
// This program that compare 3 numbers from smallest to biggest

#include <iostream>

int main() {
    //
    std::cout << "Hello! Welcome to this program!" << std::endl;
    //
    std::string firstNumStr, secondNumStr, thirdNumStr;
    // 
    int firstNumInt, secondNumInt, thirdNumInt;
    //
    std::cout << "Hello!Welcome to this program!";
    // 
    std::cout << "Please enter the first number as an integer: ";
    std::cin >> firstNumStr;
    //
    std::cout << "Please enter the second number as an integer: ";
    std::cin >> secondNumStr;
    //
    std::cout << "Please enter the third number as an integer: ";
    std::cin >> thirdNumStr;

    //
    try {
        firstNumInt = std::stoi(firstNumStr);
        secondNumInt = std::stoi(secondNumStr);
        thirdNumInt = std::stoi(thirdNumStr);
        //
        // Check if any two numbers are equal
        if (firstNumInt == secondNumInt || firstNumInt == thirdNumInt || secondNumInt == thirdNumInt) {
            std::cout << "Some numbers are equal." << std::endl;
        }
        }