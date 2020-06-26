#include <iostream>

int main() {
    std::cout << "Enter an integer: ";

    int number{0};
    std::cin >> number;

    std::cout << "Double that number is: " << number * 2 << '\n';

    return 0;
}
