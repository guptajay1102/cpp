#include <iostream>
#include <string>

template<typename T>
void concatenateArrays(T arr1[], T arr2[], int size) {
    for (int i = 0; i < size; i++) {
        std::cout << arr1[i] + arr2[i] << " ";
    }
    std::cout << std::endl;
}

template<typename T>
void concatenateStrings(T str1, T str2, std::string delimiter) {
    std::cout << str1 << delimiter << str2 << std::endl;
}

int main() {
    int arr1[3], arr2[3];
    std::string str1, str2, delimiter;

    // Input arrays
    for (int i = 0; i < 3; i++) {
        std::cin >> arr1[i];
    }
    for (int i = 0; i < 3; i++) {
        std::cin >> arr2[i];
    }

    // Input strings
    std::cin >> str1;
    std::cin >> str2;

    // Input delimiter
    std::cin >> delimiter;

    // Concatenate arrays
    std::cout << "Concatenated array: ";
    concatenateArrays(arr1, arr2, 3);

    // Concatenate strings
    std::cout << "Concatenated string: ";
    concatenateStrings(str1, str2, delimiter);

    return 0;
}
