// Author: Andrez De La Torre
// Date: 09/8/2025
// Project Name: Activity 4 - Exploring Scope (Global vs, Local)

#include <iostream>  // Required for std::cin and std::cout
#include <string>    // Required for std::string (for Activity 5)

// Global Constants - accessible throughout the entire program
const double PI = 3.14159;
const int MAX_VALUE = 100;

int main() {
    // This is where your code for the lab activities will go

    int local_var = 25;
    std::cout << local_var << std::endl;
    std::cout << PI << std::endl;
    std::cout << MAX_VALUE << std::endl;


    return 0;// Indicates that the program finished successfully
}
