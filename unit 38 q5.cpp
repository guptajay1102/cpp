#include <iostream>
#include <stdexcept> // Required for std::invalid_argument
using namespace std;

int main() {
    try {
        int age;

        // Input the age
        //cout << "Enter your age: ";
        cin >> age;

        // Check if the age is 18 or older
        if (age >= 18) {
            cout << "YES, you are old enough." << endl;
        } else {
            throw invalid_argument("No, You must be at least 18 years old\nCurrent Age is : " + to_string(age));
        }

    } catch (const invalid_argument& e) {
        cerr << e.what() << endl; // Print the error message
    }

    return 0;
}
