#include <iostream>
#include <list>
#include <algorithm>
using namespace std;

// A function to calculate the sum of unique elements in a list
int sumOfUnique(list<int>& lst) {
    int sum = 0; // The sum of unique elements
    lst.sort(); // Sort the list in ascending order
    list<int>::iterator it; // An iterator to traverse the list
    for (it = lst.begin(); it != lst.end(); it++) {
        // If the current element is not equal to the next element, it is unique
        if (next(it) == lst.end() || *it != *next(it)) {
            sum += *it; // Add it to the sum
        }
    }
    return sum; // Return the sum
}

int main() {
    int n; // The number of auction items
   // cout << "Enter the number of auction items: ";
    cin >> n;

    // Check if the number of items is within the constraint
    if (n > 15) {
        cout << "-1" << endl; // Print -1 if the constraint is violated
        return 0; // Exit the program
    }

    list<int> bids; // A list to store the starting bids
   // cout << "Enter the starting bids: ";
    for (int i = 0; i < n; i++) {
        int bid; // The starting bid for an item
        cin >> bid;
        bids.push_back(bid); // Add the bid to the list
    }

    // Call the sumOfUnique function to calculate the sum of unique bids
    int sum = sumOfUnique(bids);

    // Display the sum of unique bids
    cout << "Sum of unique elements: " << sum << endl;

    return 0;
}
