#include <iostream>
using namespace std;
class mathematics
{
public:
    int terms;
    int initialTerm;
    int commonDifference;
    mathematics(int n, int it, int cd) : terms(n), initialTerm(it), commonDifference(cd){};
    void sum()
    {
        int sum = 0;
        int num = initialTerm;
        for (int i = 0; i < terms; i++)
        {
            sum = num + sum + commonDifference * i;
        }
        cout << sum << endl;
    }
};
int main()
{
    int n, it, cd;
    cin >> n >> it >> cd;
    mathematics *obj = new mathematics(n, it, cd);
    obj->sum();
    delete obj;
}
