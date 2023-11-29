#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void convertArray(vector<int>& arr) {
    int n = arr.size();

   
    vector<pair<int, int>> originalIndices(n);
    for (int i = 0; i < n; i++) {
        originalIndices[i] = make_pair(arr[i], i);
    }

    
    sort(originalIndices.begin(), originalIndices.end());

    // Assign ranks to the students based on the sorted order of scores
    for (int i = 0; i < n; i++) {
        arr[originalIndices[i].second] = i;
    }
}

int main() {
    int n;
    cin >> n;

    if (n < 1 || n > 15) {
        cout << "-1" << endl;
        return 0;
    }

    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Input Array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    convertArray(arr);

    cout << "Converted Array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
