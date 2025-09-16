#include <iostream>


int main () {
    int age;
    std::cout << "Welcome, please enter your age: ";
    std::cin >> age;
    std::cout << std::endl;

    bool isAdult = (age >= 18);

    if (isAdult) {
        std::cout << "You are an adult." << std::endl;
    } else {
        std::cout << "You are a minor." << std::endl;
    }

    std::cout << "isAdult: " << (isAdult ? "true" : "false") << std::endl;
    return 0;
}   