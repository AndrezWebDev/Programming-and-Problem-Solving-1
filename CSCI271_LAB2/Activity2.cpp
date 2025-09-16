// Andrez De La Torre
// September 13, 2025
// CSCI 271 - Lab 2 Activity 2: Even or Odd with if-else


#include <iostream>  // Required for std::cin and std::cout
#include <string>    // Required for std::string

int main() {
    // Your code for the lab activities will go here.

    int number;

    std::cout << "Please enter a whole number: ";
    std::cin >> number;

    if (number % 2 == 0) {
        std::cout << "The number is even." << std::endl;
    } 
    if (number % 2 == 0) {
        std::cout << "The number is odd." << std::endl;
    }

    return 0; // Indicates that the program finished successfully
}