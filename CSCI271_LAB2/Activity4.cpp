// Andrez De La Torre
// September 13, 2025
// CSCI 271 - Lab 2 Activity 4: Day of the Week with switch


#include <iostream>  // Required for std::cin and std::cout
#include <string>    // Required for std::string

int main() {
    // Your code for the lab activities will go here.

    int dayNumber;

    std::cout << "Enter a number between 1 and 7 corresponding to a day of the week (1 for Monday, 7 for Sunday): ";

    std::cin >> dayNumber;

    switch (dayNumber) {
     case 1:
        std::cout << "Monday" << std::endl;
        break;
    case 2:
        std::cout << "Tuesday" << std::endl;
        break;
    case 3:
        std::cout << "Wednesday" << std::endl;
        break;
    case 4:
        std::cout << "Thursday" << std::endl;
        break;
    case 5:
        std::cout << "Friday" << std::endl;
        break;
    case 6:
        std::cout << "Saturday" << std::endl;
        break;
    case 7:
        std::cout << "Sunday" << std::endl;
        break;
    default:
        std::cout << "Invalid day number." << std::endl;

    }
    return 0; // Indicates that the program finished successfully
}
   