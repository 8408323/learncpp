#include <iostream>

int main() {
    int firstInput{}, secondInput{};

    std::cout << "Enter an integer: ";
    std::cin >> firstInput;

    std::cout << "Enter another integer: ";
    std::cin >> secondInput;

    std::cout << firstInput << " + " << secondInput << " is " << firstInput + secondInput << "." << std::endl;
    std::cout << firstInput << " - " << secondInput << " is " << firstInput - secondInput << "." << std::endl;

    return 0;
}
