#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool isPrime(int n) {
    if (n <= 1)
        return false;
    if (n <= 3)
        return true;
    if (n % 2 == 0 || n % 3 == 0)
        return false;
    for (int i = 5; i * i <= n; i = i + 6)
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
    return true;
}

int main() {
    int n;
    cin >> n;
    if(n < 1 || n > 15) {
     cout << "-1" <<endl;
        return 0;
    }
    std::vector<int> a(n);
    for(int i = 0; i < n; i++)
        cin >> a[i];
    vector<int> composites;
    remove_copy_if(a.begin(), a.end(), back_inserter(composites), isPrime);
     cout<<"Composite numbers: ";
    for(int i : composites)
        cout<< i << " ";
    cout <<endl;
    return 0;
}
