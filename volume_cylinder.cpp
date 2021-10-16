// Copyright (c) 2021 Crestel Ong All rights reserved
//
// Created by: Crestel Ong
// Created on: September 2021
// This Volume of Cylinder program in c++
// This program uses functions with multiple parameters

#include <iostream>
#include <string>
#include <cmath>

float CalculateVolume(float radius, float height) {
    // This function calculates the volume of a cylinder
    float volume;

    // process
    volume = M_PI * pow(radius, 2) * height;

    return volume;
}

main() {
    // this function gets the radius and height
    // declaring
    std::string radiusAsString;
    std::string heightAsString;
    float returnedVolume;
    float radiusAsFloat;
    float heightAsFloat;

    // tell the user what the program does
    std::cout << "This program calculates the volume of a cylinder."
    << std::endl;
    std::cout << "Please enter the radius and height." << std::endl;
    std::cout << "" << std::endl;

    // input
    std::cout << "The radius is (cm):  ";
    std::cin >> radiusAsString;
    std::cout << "The height is (cm):  ";
    std::cin >> heightAsString;
    std::cout << "" <<std::endl;

    try {
        // convert string to float
        radiusAsFloat = std::stof(radiusAsString);
        heightAsFloat = std::stof(heightAsString);

        // call functions
        returnedVolume =  CalculateVolume(radiusAsFloat, heightAsFloat);

        // output
        std::cout << "The volume of this cylinder with the radius of "
        << radiusAsFloat << " cm and height of " << heightAsFloat
        << " cm is "  << returnedVolume << " cm³." <<std::endl;
    } catch (std::invalid_argument) {
        std::cout << "Invalid input." << std::endl;
    }
    std::cout << "\nDone.";
}
