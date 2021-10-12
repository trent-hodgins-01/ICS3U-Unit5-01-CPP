// Copyright (c) 2021 Trent Hodgins All rights reserved

// Created by Trent Hodgins
// Created on 10/12/2021
// This is the temperature program
// The user enters in the temperature in celsius
// The program displays the temperature in Fahrenheit

#include <iostream>

void CelsiusToFahrenheit() {
    // calculates celsius to fahrenheit

    int celsiusAsNumber = 0;
    int fahrenheit = 0;
    std::string celsiusAsSting;

    // input
    std::cout << "Enter in the temperature(Celsius): ";
    std::cin >> celsiusAsSting;

    // process
    try {
        celsiusAsNumber = std::stoi(celsiusAsSting);
        fahrenheit = (celsiusAsNumber * 9) / 5 + 32;

    // output
        std::cout << "It is "<< fahrenheit << "°" << std::endl;
    } catch (std::invalid_argument) {
        std::cout << "Invalid input" << std::endl;
    }

    std::cout << "\nDone." << std::endl;
}

main() {
    // this function just calls other functions

    // call functions
    CelsiusToFahrenheit();
}
