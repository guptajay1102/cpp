#include <iostream>

class DecimalToBinaryConverter {
public:
    virtual void convertToBinary(int n) {
      //  std::cout << "Binary representation: ";
        convertToBinaryHelper(n);
        std::cout << std::endl;
    }

private:
    void convertToBinaryHelper(int n) {
        if (n > 1) {
            convertToBinaryHelper(n / 2);
        }
        std::cout << n % 2;
    }
};

int main() {
    int decimalNumber;
 //   std::cout << "Enter a decimal number: ";
    std::cin >> decimalNumber;

    DecimalToBinaryConverter converter;
    converter.convertToBinary(decimalNumber);

    return 0;
}
