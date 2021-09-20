// Copyright (c) 2021 D.B. Calitis All rights reserved
//
// Created by: Daria Bernice Calitis
// Created on: Sept 2021
// This program calculates the volume of the cylinder
//   with the radius and height given by the user

#include <iostream>
#include <cmath>

int main() {
    // This function calculates the volume of the cylinder

    int radius;
    int height;
    double volume;

    // input
    std::cout << "The Cylinder Volume Calculator" << std::endl;
    std::cout << "Enter the radius (cm): ";
    std::cin >> radius;
    std::cout << "Enter the height (cm): ";
    std::cin >> height;

    // process
    volume = (M_PI * pow(radius, 2)) * height;

    // output
    std::cout << "\nThe volume of the cylinder is " << volume << " cm³.\n";
    std::cout << "\nDone." << std::endl;
}
