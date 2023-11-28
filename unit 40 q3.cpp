#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> numbers;
    for (int i = 0; i < n; i++)
    {
        int num;
        cin >> num;
        numbers.push_back(num);
    }
    int pos;
    cin >> pos;
    try
    {
        int result = numbers.at(pos);
        cout << result << endl;
    }
    catch (const exception &e)
    {
        cout << "Exception occurred!\n";
        cout << "Not possible to fetch index"<< pos;
    }
    catch (...)
    {
        cout << "Exception occurred!\n";
    }
    return 0;
}
