#include <iostream>
#include <stdexcept>

int main() {
    try {
        int num;
       // std::cout << "Enter a positive three-digit number: ";
        std::cin >> num;

        if (num < 100 || num > 999) {
            throw std::invalid_argument("It's not a three-digit number or a valid number");
        }

        // Calculate the sum of digits
        int digitSum = 0;
        while (num > 0) {
            digitSum += num % 10;
            num /= 10;
        }

        std::cout << "Sum of the digits is: " << digitSum << std::endl;

    } catch (const std::exception& e) {
        // Exception handling: Print error message
        std::cerr << e.what() << std::endl;
    }

    return 0;
}
