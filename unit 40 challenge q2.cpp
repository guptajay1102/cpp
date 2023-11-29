#include <iostream>
#include <vector>

using namespace std;

template<class T>
vector<T> takeInput(int n) {
    vector<T> vec(n);
    for (int i = 0; i < n; i++) {
        cin >> vec[i];
    }
    return vec;
}

int calculateDotProduct(vector<int> vec1, vector<int> vec2) {
    int dotProduct = 0;
    for (int i = 0; i < vec1.size(); i++) {
        dotProduct += vec1[i] * vec2[i];
    }
    return dotProduct;
}

double calculateDotProduct(vector<double> vec1, vector<double> vec2) {
    double dotProduct = 0.0;
    for (int i = 0; i < vec1.size(); i++) {
        dotProduct += vec1[i] * vec2[i];
    }
    return dotProduct;
}

int main() {
    int n;
    cin >> n;

    vector<int> v1 = takeInput<int>(n);
    vector<int> v2 = takeInput<int>(n);

    vector<double> v3 = takeInput<double>(n);
    vector<double> v4 = takeInput<double>(n);

    int dotProductInteger = calculateDotProduct(v1, v2);
    double dotProductFloatingPoint = calculateDotProduct(v3, v4);

    cout << "Dot product of integer vectors: " << dotProductInteger << endl;
    cout << "Dot product of floating-point vectors: " << dotProductFloatingPoint << endl;

    return 0;
}
