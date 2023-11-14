#include <iostream>
#include <cmath>
using namespace std;
class QuadraticEquation
{
private:
    double a, b, c;

public:
    QuadraticEquation(double a, double b, double c) : a(a), b(b), c(c) {}

    double calculateDiscriminant()
    {
        return b * b - 4 * a * c;
    }

    void solveAndDisplayRoots()
    {
        bool displayComplex = false;
        double discriminant = calculateDiscriminant();
        double root1 = (-b + sqrt(discriminant)) / (2 * a);
        double root2 = (-b - sqrt(discriminant)) / (2 * a);
        if (discriminant > 0)
        {

            if (displayComplex)
            {
                cout << "Root 1: " << root1 << " + 0i" << endl;
                cout << "Root 2: " << root2 << " - 0i" << endl;
            }
            else
            {
                cout << "Root 1: " << root1 << endl;
                cout << "Root 2: " << root2 << endl;
            }
        }
        else if (discriminant == 0)
        {
            double root = -b / (2 * a);

            if (displayComplex)
            {
                cout << "Root: " << root << " + 0i" << endl;
            }
            else
            {
                cout << "Root: " << root << endl;
            }
        }
        else
        {
            double realPart = -b / (2 * a);
            double imaginaryPart = sqrt(-discriminant) / (2 * a);

            if (!displayComplex)
            {
                cout << "Root 1: " << realPart << " + " << imaginaryPart << "i" << endl;
                cout << "Root 2: " << realPart << " - " << imaginaryPart << "i" << endl;
            }
            else
            {
                cout << "Root 1: " << realPart << endl;
                cout << "Root 2: " << realPart << endl;
            }
        }
    }
};

int main()
{
    double a, b, c;
    std::cin >> a >> b >> c;

    QuadraticEquation *equation = new QuadraticEquation(a, b, c);
    equation->solveAndDisplayRoots();
    delete equation;
    return 0;
}
