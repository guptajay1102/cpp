#include <iostream>

using namespace std;

template <typename T1, typename T2>
class Pair {
  private:
    T1 first;
    T2 second;

  public:
    Pair(T1 first, T2 second) {
      this->first = first;
      this->second = second;
    }

    void swap() {
      T1 temp = first;
      first = second;
      second = temp;
    }

    void print() {
      cout << "Values before swap: " << endl;
      cout << "First: " << first << endl;
      cout << "Second: " << second << endl << endl;

      swap();

      cout << "Values after swap: " << endl;
      cout << "First: " << first << endl;
      cout << "Second: " << second << endl;
    }
};

int main() {
  float a;
  double b;

  cin >> a >> b;

  Pair<float, double> pair(a, b);
  pair.print();

  return 0;
}
