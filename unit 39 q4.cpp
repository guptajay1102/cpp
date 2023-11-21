#include<iostream>

template<class T>
T maxValue(T a, T b) {
    return (a > b) ? a : b;
}

int main() {
    // Input for integers
    int int1, int2;
    std::cin >> int1 >> int2;

    // Input for double values
    double double1, double2;
    std::cin >> double1 >> double2;

    // Find and output the maximum value for integers
    int maxInt = maxValue(int1, int2);
    std::cout << "Maximum value: " << maxInt << std::endl;

    // Find and output the maximum value for double values
    double maxDouble = maxValue(double1, double2);
    std::cout << "Maximum value: " << maxDouble << std::endl;

    return 0;
}
