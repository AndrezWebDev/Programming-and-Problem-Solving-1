// Andrez De La Torre
// September 13, 2025
// CSCI 271 - Lab 2 Activity 1: Number Comparison with if 

#include <iostream>  // Required for std::cin and std::cout
#include <string>    // Required for std::string

int main() {
    // Your code for the lab activities will go here.
    int num1;
    int num2;

    std::cout << "Please enter two whole numbers" << std::endl;
    std::cout << "Number 1: ";
    std::cin >> num1; 
    std::cout << "Number 2: ";
    std::cin >> num2; 

    if (num1 > num2) {
        std::cout << num1 << " is greater than " << num2 << std::endl;
    }
    if (num2 > num1) {
        std::cout << num2 << " is greater than " << num1 << std::endl;
    }
    if (num1 == num2) {
        std::cout << num1 << " is equal to " << num2 << std::endl;
    }
    return 0; // Indicates that the program finished successfully
}