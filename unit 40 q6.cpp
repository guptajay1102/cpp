#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    string str;
    char ch;

    cin >> str >> ch;

    int count = std::count_if(str.begin(), str.end(), [&ch](char c) {
        return c != ch;
    });

    cout << count << endl;

    return 0;
}
