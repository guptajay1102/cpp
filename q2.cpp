#include <iostream>
#include <string>
using namespace std;
int main()
{
    string *sentence = new string;
    getline(cin, *sentence);
    int *len = new int;
    *len = sentence->length();
    for (int i = 0; i < *len / 2; i++)
    {
        char temp = (*sentence)[i];
        (*sentence)[i] = (*sentence)[*len - i - 1];
        (*sentence)[*len - i - 1] = temp;
    }
    cout << "Reversed string: " << *sentence << endl;
    delete sentence;
    delete len;
}
