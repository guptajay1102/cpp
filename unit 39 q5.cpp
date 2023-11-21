#include <iostream>

template<class T>
T arraySum(T arr[], int n) {
    T sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }
    return sum;
}

int main() {
    int n;
    std::cin >> n;

    int intArr[n];
    float floatArr[n];

    for (int i = 0; i < n; i++) {
        std::cin >> intArr[i];
    }

    for (int i = 0; i < n; i++) {
        std::cin >> floatArr[i];
    }

    int intSum = arraySum(intArr, n);
    float floatSum = arraySum(floatArr, n);

    std::cout << "Sum of integer array: " << intSum << std::endl;
    std::cout << "Sum of floating-point array: " << floatSum << std::endl;

    return 0;
}
