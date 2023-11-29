#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;

    // Check if the input 'n' is within the valid range
    if (n < 1 || n > 10) {
        cout << "-1" << endl;
        return 1;
    }

    // Initialize the array arr with the given elements
    vector<int> arr = {11, 21, 33, 14, 41, 60, 13, 8, 25, 50};

    // Access the n-th element (0-indexed) using an iterator
    vector<int>::iterator it = arr.begin();
    advance(it, n - 1); // Advance the iterator to the n-th position

    int baseNumber = *it; // Get the value of the n-th element

    // Generate the multiplication table from 1 to 10
    for (int i = 1; i <= 10; i++) {
        int result = baseNumber * i;
        cout << baseNumber << " * " << i << " = " << result << endl;
    }

    return 0;
}
