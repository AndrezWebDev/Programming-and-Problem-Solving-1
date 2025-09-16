// Andrez De La Torre
// September 13, 2025
// CSCI 271 - Lab 2 Activity 3: Placeholder for Future CodeGrade Calculator
#include <iostream>  // Required for std::cin and std::cout
#include <string>    // Required for std::string

int main() {
    // Your code for the lab activities will go here.

    int score;
    std::cout << "Enter your score (0-100): ";
    
    std::cin >> score;

    if (score >= 0 && score <= 100) {
        char grade;
        if (score >= 90) {
            grade = 'A';
        } else if (score >= 80) {
            grade = 'B';
        } else if (score >= 70) {
            grade = 'C';
        } else if (score >= 60) {
            grade = 'D';
        } else {
            grade = 'F';
        }
        std::cout << "Your letter grade is: " << grade << std::endl;
    } 
    if ( score < 0 || score > 100 ) {
        std::cout << "Invalid score" << std::endl;
    }
    return 0;
}
