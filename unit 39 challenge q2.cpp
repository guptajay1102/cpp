#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

template <typename T>
bool isInRange(const T &val, const T &minVal, const T &maxVal)
{
    return (val >= minVal && val <= maxVal);
}

double calculateDistance2D(int x1, int y1, int x2, int y2)
{
    return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}

double calculateDistance3D(int x1, int y1, int z1, int x2, int y2, int z2)
{
    return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2) + pow(z2 - z1, 2));
}

int main()
{
    int choice;
    cin >> choice;

    // Whitelist syntax
    if (!isInRange(choice, 2, 3))
    {
        cout << "Invalid choice. Please enter 2 or 3." << endl;
        return 0;
    }

    if (choice == 2)
    {
        int x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;
        double distance = calculateDistance2D(x1, y1, x2, y2);
        cout << "Distance between the points in two-dimensional space: " << fixed << setprecision(2) << distance << endl;
    }
    else if (choice == 3)
    {
        int x1, y1, z1, x2, y2, z2;
        cin >> x1 >> y1 >> z1 >> x2 >> y2 >> z2;
        double distance = calculateDistance3D(x1, y1, z1, x2, y2, z2);
        cout << "Distance between the points in three-dimensional space: " << fixed << setprecision(2) << distance << endl;
    }

    return 0;
}
