#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    string name;
    string password;
    cin >> name >> password;
    try
    {
        int len = password.length();
        string result;

        for (int i = 0; i < len; i++)
        {
            for (int j = 0; j < len; j++)
            {
                if (isdigit(password[i]) && isalpha(password[j]))
                {
                    result = "Password is Correct";
                }
            }
        }
        if (len < 5)
        {
            throw("Password must be at least 6 Characters Long...");
        }
        else if (result == "")
        {
            throw("Password must have at least One Digit(0 - 9)");
        }
        else
        {
            cout << result << endl;
        }
    }
    catch (char const *e)
    {
        cout << e << endl;

        cout << endl
             << "Caught by Exception" << endl;
        cout << "Invalid Password Format!!!" << endl;
    }
}
