// Copyright (c) 2022 Kaitlyn Ip All rights reserved.
//
// Created by: Kaitlyn Ip
// Created on: Oct 2022
// This program uses a compound boolean statement

#include <iostream>
#include <string>

int main() {
    // this function uses a compound boolean statement
    std::string integerAsString;
    int ageNum;

    // input
    std::cout << "Please enter your age: ";
    std::cin >> integerAsString;

    ageNum = atoi(integerAsString.c_str());
    // process & output
    try {
        ageNum = std::stoi(integerAsString);
        std::cout << "That is a valid input. ";
    } catch (std::invalid_argument) {
        std::cout << "That was not a valid input. ";
    }
        if (ageNum >= 25 && ageNum <= 40) {
            std::cout << "You are an acceptable age.";
        } else {
            std::cout << "You are NOT an acceptable age.";
        }

    std::cout << std::endl;
    std::cout << "\nDone." << std::endl;
}
