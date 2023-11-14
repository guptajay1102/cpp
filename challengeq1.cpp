#include <iostream>
#include <cmath>

using namespace std;

class Polynomial
{
private:
    int degree;
    int *coefficients;

public:
    Polynomial(int deg, int *coef) : degree(deg)
    {
        coefficients = new int[degree + 1];
        for (int i = 0; i <= degree; ++i)
        {
            coefficients[i] = coef[i];
        }
    }

    ~Polynomial()
    {
        delete[] coefficients;
    }

    void display()
    {
        for (int i = degree; i >= 0; --i)
        {
            if (coefficients[i] != 0)
            {
                if (i == 0)
                {
                    if (coefficients[i] > 0)
                    {
                        cout << coefficients[i];
                    }
                    else
                    {
                        cout << coefficients[i] * -1;
                    }
                }
                else
                {
                    if (i == 1)
                    {
                        if (coefficients[i] > 0)
                        {
                            cout << coefficients[i] << "x";
                        }
                        else
                        {
                            cout << coefficients[i] * -1 << "x";
                        }
                    }
                    else
                    {
                        if (coefficients[i] > 0)
                        {
                            cout << coefficients[i] << "x^" << i;
                        }
                        else
                        {
                            cout << coefficients[i] * -1 << "x^" << i;
                        }
                    }
                }
                if (i > 0 && coefficients[i - 1] > 0)
                {
                    cout << " + ";
                }
                else if (i > 0 && coefficients[i - 1] < 0)
                {

                    cout << " - ";
                }
            }
            else
            {
                cout << " + ";
            }
        }
        cout << endl;
    }

    int evaluate(int x)
    {
        int result = 0;
        for (int i = degree; i >= 0; --i)
        {
            result += coefficients[i] * pow(x, i);
        }
        return result;
    }

    Polynomial add(Polynomial &other)
    {
        int maxDegree = max(degree, other.degree);
        int *resultCoef = new int[maxDegree + 1];

        for (int i = 0; i <= maxDegree; ++i)
        {
            int coef1 = (i <= degree) ? coefficients[i] : 0;
            int coef2 = (i <= other.degree) ? other.coefficients[i] : 0;
            resultCoef[i] = coef1 + coef2;
        }

        Polynomial result(maxDegree, resultCoef);
        delete[] resultCoef;
        return result;
    }

    Polynomial subtract(Polynomial &other)
    {
        int maxDegree = max(degree, other.degree);
        int *resultCoef = new int[maxDegree + 1];

        for (int i = 0; i <= maxDegree; ++i)
        {
            int coef1 = (i <= degree) ? coefficients[i] : 0;
            int coef2 = (i <= other.degree) ? other.coefficients[i] : 0;
            resultCoef[i] = coef1 - coef2;
        }

        Polynomial result(maxDegree, resultCoef);
        delete[] resultCoef;
        return result;
    }
};

int main()
{
    int degree1, degree2;
    cin >> degree1;
    int *coef1 = new int[degree1 + 1];
    if (degree1 > 0 && degree1 < 11)
    {
        for (int i = degree1; i >= 0; --i)
        {
            cin >> coef1[i];
        }
    }
    Polynomial poly1(degree1, coef1);

    cin >> degree2;
    int *coef2 = new int[degree2 + 1];
    if (degree2 > 0 && degree2 < 11)
    {
        for (int i = degree2; i >= 0; --i)
        {
            cin >> coef2[i];
        }
    }
    Polynomial poly2(degree2, coef2);

    int x;
    cin >> x;

    poly1.display();

    poly2.display();

    //  cout << "Results of evaluating at x = " << x << ":" << endl;
    cout << poly1.evaluate(x) << endl;
    cout << poly2.evaluate(x) << endl;

    Polynomial sum = poly1.add(poly2);
    Polynomial diff = poly1.subtract(poly2);

    //   cout << "Sum of the two polynomials: ";
    sum.display();

    //   cout << "Difference between the two polynomials: ";
    diff.display();

    delete[] coef1;
    delete[] coef2;

    return 0;
}
