#include <iostream>
#include <stdexcept> // Required for std::invalid_argument
using namespace std;

int main() {
    try {
        int num, den;
        
        // Input two integers
        //cout << "Enter two integers (num den): ";
        cin >> num >> den;

        // Check if the denominator is zero
        if (den == 0) {
            throw runtime_error("Divide by Zero Exception");
        }

        // Calculate and output the division
        cout << num / den << endl;
    } catch (const runtime_error& e) {
        cerr << e.what() << endl; // Print the error message
    }

    return 0;
}
