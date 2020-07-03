#include <iostream>

int doubleNumber(int number) {
    return number * 2;
}

int readNumberFromUser() {
    std::cout << "Enter an integer: ";
    int numberRead;
    std::cin >> numberRead;
    return numberRead;
}

int main() {
    std::cout << doubleNumber(readNumberFromUser()) << std::endl;
}
