#include <iostream>
#include <cmath>

using namespace std;

bool isPrime(int num)
{
    if (num <= 1)
    {
        return false;
    }

    for (int i = 2; i <= sqrt(num); ++i)
    {
        if (num % i == 0)
        {
            return false;
        }
    }

    return true;
}

int main()
{
    int n;
    cin >> n;

    if (n < 2)
    {
        cout << "No prime factors found for " << n << endl;
        return 0;
    }

    int *primeFactors = new int[n];
    int count = 0;

    cout << "Prime factors of " << n << " are: ";
    for (int i = 2; i <= n; ++i)
    {
        if (n % i == 0 && isPrime(i))
        {
            primeFactors[count++] = i;
            cout << i << " ";
        }
    }

    cout << "\nLargest prime factor of " << n << " is: ";
    if (count > 0)
    {
        int largestPrimeFactor = primeFactors[count - 1];
        cout << largestPrimeFactor << endl;
    }
    else
    {
        cout << "No prime factors found for " << n << endl;
    }

    delete[] primeFactors; // Release dynamically allocated memory

    return 0;
}
