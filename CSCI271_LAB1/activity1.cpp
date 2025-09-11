// Author: Andrez De La Torre
// Date: 09/8/2025
// Project Name: Activity 1 - Declaring & initializing Local Variables

#include <iostream>  // Required for std::cin and std::cout
#include <string>    // Required for std::string (for Activity 5)

// Global Constants - accessible throughout the entire program
const double PI = 3.14159;
const int MAX_VALUE = 100;

int main() {
    // This is where your code for the lab activities will go.

        int age = 12; 
        // We are storing variable age with an integer value of 12
        
        double height = 3.75;
        // We are storing variable height with a double value of 3.75

        char grade = 'A';
        // We are storing variable grade with a character value of A

        std::string city = "Los Angeles";
        // We are storing variable city with a string value of Los Angeles

        std::cout << "You are " << age << " years old."<< std::endl;

        std::cout << "Looks like you are "<< height << " in meters tall." << std::endl;

        std::cout << "Your grade for the assignment was an  " << grade << "." << std::endl;
        
        std::cout << "You like to visit the city " << city << "." << std::endl;

    return 0; // Indicates that the program finished successfully
}