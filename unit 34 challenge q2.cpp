#include <iostream>

class CoffeeShop {
public:
    virtual float calculateTotal() const = 0;
    virtual ~CoffeeShop() {}
};

class CustomerOrder : public CoffeeShop {
private:
    float coffeePrice, teaPrice, pastryPrice;
    int coffeeQuantity, teaQuantity, pastryQuantity;

public:
    CustomerOrder(float cPrice, int cQuantity, float tPrice, int tQuantity, float pPrice, int pQuantity)
        : coffeePrice(cPrice), teaPrice(tPrice), pastryPrice(pPrice), coffeeQuantity(cQuantity), teaQuantity(tQuantity), pastryQuantity(pQuantity) {}

    float calculateTotal() const override {
        float coffeeCost = coffeePrice * coffeeQuantity;
        float teaCost = teaPrice * teaQuantity;
        float pastryCost = pastryPrice * pastryQuantity;

        return coffeeCost + teaCost + pastryCost;
    }
};

int main() {
    float coffeePrice, teaPrice, pastryPrice;
    int coffeeQuantity, teaQuantity, pastryQuantity;

    // Input for coffee
    std::cin >> coffeePrice >> coffeeQuantity;

    // Input for tea
    std::cin >> teaPrice >> teaQuantity;

    // Input for pastry
    std::cin >> pastryPrice >> pastryQuantity;

    // Create CustomerOrder object
    CoffeeShop* order = new CustomerOrder(coffeePrice, coffeeQuantity, teaPrice, teaQuantity, pastryPrice, pastryQuantity);

    // Calculate and display total cost
    std::cout << "Total cost of the order is $" << order->calculateTotal() << std::endl;

    // Clean up dynamically allocated memory
    delete order;

    return 0;
}
