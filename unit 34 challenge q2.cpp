#include <iostream>
#include <iomanip>

class CoffeeShop {
public:
    virtual float calculateTotal() const = 0;
    virtual ~CoffeeShop() {}
};

class CustomerOrder : public CoffeeShop {
private:
    float coffeePrice;
    int coffeeQuantity;
    float teaPrice;
    int teaQuantity;
    float pastryPrice;
    int pastryQuantity;

public:
    CustomerOrder(float cPrice, int cQuantity, float tPrice, int tQuantity, float pPrice, int pQuantity)
        : coffeePrice(cPrice), coffeeQuantity(cQuantity), teaPrice(tPrice), teaQuantity(tQuantity), pastryPrice(pPrice), pastryQuantity(pQuantity) {}

    float calculateTotal() const override {
        return coffeePrice * coffeeQuantity + teaPrice * teaQuantity + pastryPrice * pastryQuantity;
    }
};

int main() {
    float cPrice, tPrice, pPrice;
    int cQuantity, tQuantity, pQuantity;

    // Input
    std::cin >> cPrice >> cQuantity;
    std::cin >> tPrice >> tQuantity;
    std::cin >> pPrice >> pQuantity;

    // Create CustomerOrder object
    CoffeeShop* order = new CustomerOrder(cPrice, cQuantity, tPrice, tQuantity, pPrice, pQuantity);

    // Output
    std::cout << "Total cost of the order is $" << std::fixed << std::setprecision(2) << order->calculateTotal() << std::endl;

    // Memory management
    delete order;

    return 0;
}
