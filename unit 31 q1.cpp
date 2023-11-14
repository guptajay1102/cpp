#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    double *Rate = new double;
    double *Amt = new double;
    cin >> *Rate >> *Amt;
    double convert;
    convert = *Rate * *Amt;
    cout << fixed << setprecision(2) << convert << endl;
    delete Rate;
    delete Amt;
}
