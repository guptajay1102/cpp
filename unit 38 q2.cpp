#include <iostream>
#include <vector>

int main() {
    try {
        int n;
      //  std::cout << "Enter the size of the array: ";
        std::cin >> n;

        std::vector<int> arr(n);

     //   std::cout << "Enter the array elements separated by space: ";
        for (int i = 0; i < n; ++i) {
            std::cin >> arr[i];

            // Check for negative numbers
            if (arr[i] < 0) {
                throw i; // Throw the index where the negative number is encountered
            }
        }

        int sum = 0;
        for (int i = 0; i < n; ++i) {
            sum += arr[i];

            // Check for negative numbers while summing
            if (arr[i] < 0) {
                throw i; // Throw the index where the negative number is encountered
            }
        }

        // If no negative numbers are encountered, print the sum
        std::cout << "The sum is: " << sum << std::endl;

    } catch (int index) {
        // Exception handling: Negative number found at index
        std::cout << "Negative number found at index " << index + 1 << std::endl;
        std::cout << "The sum is: " << (index > 0 ? "0" : "No positive numbers encountered") << std::endl;
    }

    return 0;
}
