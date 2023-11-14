#include <iostream>
#include <cmath>
#include <iomanip>

class Icecream {
public:
    virtual double Quantity() const = 0;
};

class Sphere : public Icecream {
private:
    double radius;

public:
    Sphere(double r) : radius(r) {}

    double Quantity() const override {
        return (4.0 / 3.0) * M_PI * pow(radius, 3);
    }
};

class Cone : public Icecream {
private:
    double radius;
    double height;

public:
    Cone(double r, double h) : radius(r), height(h) {}

    double Quantity() const override {
        return (1.0 / 3.0) * M_PI * pow(radius, 2) * height;
    }
};

int main() {
    int choice;
    std::cin >> choice;

    Icecream* icecream;

    if (choice == 1) {
        double radius;
        std::cin >> radius;
        icecream = new Sphere(radius);
    } else if (choice == 2) {
        double radius, height;
        std::cin >> radius >> height;
        icecream = new Cone(radius, height);
    } else {
        // Invalid choice
        return 0;
    }

    // Calculate and display the volume
    std::cout << std::fixed << std::setprecision(2) << icecream->Quantity() << std::endl;

    // Deallocate memory
    delete icecream;

    return 0;
}
