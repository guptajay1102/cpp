#include<iostream>
#include<vector>
#include<string>
using namespace std;

template <class T>
class ArrayPrinter {
private:
    vector<T> elements;

public:
    void setElements(vector<T> arr) {
        elements = arr;
    }

    void printOddElements() {
        for (int i = 0; i < elements.size(); i++) {
            if (i % 2 == 0) {
                cout << elements[i] << " ";
            }
        }
        cout << endl;
    }

    void printStringElements(vector<string> arr) {
        for (int i = 0; i < arr.size(); i++) {
            if (i % 2 == 0) {
                cout << arr[i] << " ";
            }
        }
        cout << endl;
    }
};

int main() {
    int n;
    cin >> n;
    vector<int> intArr(n);
    vector<string> strArr(n);

    for (int i = 0; i < n; i++) {
        cin >> intArr[i];
    }

    cin.ignore(); // Ignore the newline character

    for (int i = 0; i < n; i++) {
        cin >> strArr[i];
    }

    ArrayPrinter<int> intPrinter;
    intPrinter.setElements(intArr);
    intPrinter.printOddElements();

    ArrayPrinter<string> strPrinter;
    strPrinter.printStringElements(strArr);

    return 0;
}
