#include <iostream>
using namespace std;

int main() {
    try {
        int num;
       // cout << "Enter an integer: ";
        cin >> num;

        if (num > 0) {
            throw 1;  // Positive number
        } else if (num < 0) {
            throw 'a';  // Negative number
        } else {
            throw 0.0;  // Zero
        }
    } catch (int) {
        cout << "You Entered Positive number" << endl;
    } catch (char) {
        cout << "You Entered Negative Number" << endl;
    } catch (double) {
        cout << "You Entered Zero" << endl;
    }

    return 0;
}
