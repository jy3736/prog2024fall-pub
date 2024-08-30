#include <iostream>

int main() {
    int number;
    std::cin >> number;

    if (number % 2 == 1) {
        std::cout << "Even" << std::endl;
    } else {
        std::cout << "Odd" << std::endl;
    }

    return 0;
}
