#include <iostream>

int main() {
    int number{0};

    std::cout << "Enter an integer: ";
    std::cin >> number;

    std::cout << "Double " << number << " is: " << number * 2 << '\n';
    std::cout << "Triple " << number << " is: " << number * 3 << '\n';

    return 0;
}
