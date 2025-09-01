// Author: Andrez De La Torre
// Date: August 31, 2025
// Project name: Gozinta

#include <iostream>


int main () {
    int firstNumber, secondNumber;

    std::cout << "Please enter first number for your division problem: ";
    std::cin >> firstNumber;

    std::cout << "Enter second number for your division problem: ";
    std::cin >> secondNumber;

    std::cout << firstNumber << " gonzinta " << secondNumber <<" " << (firstNumber / secondNumber) << "times with a remainder of " << (firstNumber % secondNumber);

    return 0;
}
