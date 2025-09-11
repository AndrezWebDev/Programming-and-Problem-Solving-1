#include <iostream>

/* Operators: And = &&, Or = ||, Not = !*/
int main() {


    // Grade example
    int score;
    char grade;
    std::cout << "Enter score: ";
    std::cin >> score;

    // Example using if and else statements
    
    if (score >= 90) {
        grade = 'A';
    } else {
        if (score >= 80) {
            grade = 'B';
        } else {
            if (score >= 70) {
                grade = 'C';
            } else {
                if (score >= 60) {
                    grade = 'D';
                } else {
                    grade = 'F';
                }
            }
        }
    }
    

    /* // Example using switch statements
    switch (score / 10) {
        case 10:
        case 9:
            grade = 'A';
            break;
        case 8:
            grade = 'B';
            break;
        case 7:
            grade = 'C';
            break;
        case 6:
            grade = 'D';
            break;
        default:
            grade = 'F';
            break; // This stops what is doing if it falls to default
    }
    */
    std::cout << "Grade: " << grade << std::endl;
    return 0;
}