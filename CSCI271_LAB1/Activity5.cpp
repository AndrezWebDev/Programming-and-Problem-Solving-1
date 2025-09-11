// Author: Andrez De La Torre
// Date: 09/8/2025
// Project Name: Activity 5 -

#include <iostream>  // Required for std::cin and std::cout
#include <string>    // Required for std::string (for Activity 5)

// Global Constants - accessible throughout the entire program
const double PI = 3.14159;
const int MAX_VALUE = 100;

int main() {
    // This is where your code for the lab activities will go.

    char grade;
    std::cout << "Please enter your typical letter grade (e.g. 'A','B'): ";
    std::cin >> grade;

    std::string fullName;
    std::cout << "Please enter your full name: ";
    std::cin >> fullName;

    std::cout << "Hello, " << fullName << "." << std::endl;
    std::cout << "Your grades are: " << grade << std::endl;
    return 0; // Indicates that the program finished successfully
}