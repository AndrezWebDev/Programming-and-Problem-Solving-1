// Author: Andrez De La Torre
// Date: 09/8/2025
// Project Name: Activity 3 - Basic Arithmetic and Using Constants

#include <iostream>  // Required for std::cin and std::cout
#include <string>    // Required for std::string (for Activity 5)

// Global Constants - accessible throughout the entire program
const double PI = 3.14159;
const int MAX_VALUE = 100;

int main() {
    // This is where your code for the lab activities will go
    // Activity 2 User input
    int favNumber1;
    int favNumber2;

    std::cout << "Please enter your first Favorite whole number: ";
    std::cin >> favNumber1;

    std::cout << "Please enter your second Favorite whole number: ";
    std::cin >> favNumber2;

    std::cout << "Your favorite numbers are " << favNumber1 << " and " << favNumber2 << "." << std::endl;

    //Activity 3
    int sum, difference, product;

    sum = favNumber1 + favNumber2;

    difference = favNumber1 - favNumber2;

    product = favNumber1 * favNumber2;

    double quotient = (double)favNumber1 / favNumber2;

    int resultWithConstant = favNumber1 + MAX_VALUE;

    std::cout << "Here are the results of basic arithmetic operations using your favorite numbers:" << std::endl;
    std::cout << "Sum: " << sum << std::endl;
    std::cout << "Difference: " << difference << std::endl;
    std::cout << "Product: " << product << std::endl;
    std::cout << "Quotient: " << quotient << std::endl;
    std::cout << "Result with constant (favNumber1 + MAX_VALUE): " << resultWithConstant << std::endl;

    return 0; // Indicates that the program finished successfully
}