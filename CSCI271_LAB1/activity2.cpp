// Author: Andrez De La Torre
// Date: 09/8/2025
// Project Name: Activity 2 - Getting User input ('cin')


#include <iostream>  // Required for std::cin and std::cout
#include <string>    // Required for std::string (for Activity 5)

// Global Constants - accessible throughout the entire program
const double PI = 3.14159;
const int MAX_VALUE = 100;

int main() {
    // This is where your code for the lab activities will go.

    int favNumber1;
    int favNumber2;

    std::cout << "Please enter your first Favorite whole number: ";
    std::cin >> favNumber2;

    std::cout << "Please enter your second Favorite whole number: ";
    std::cin >> favNumber2;

    std::cout << "Your favorite numbers are " << favNumber1 << " and " << favNumber2 << "." << std::endl;
    /* I am gathering the users input that I stored in variables favNumber1 and favNumber2 and displaying it back to them using the std::cout statement.*/
    
    return 0; // Indicates that the program finished successfully
}