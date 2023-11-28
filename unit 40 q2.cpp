#include <iostream>
#include <cmath>
using namespace std;
template <typename T>
class Shape {
public:
    virtual void readInput() = 0;
    virtual void displayDetails() const = 0;
    virtual T calculateArea() const = 0;
};

template <typename T>
class Circle : public Shape<T> {
private:
    T radius;
    T centerX, centerY;

public:
    Circle() : radius(0), centerX(0), centerY(0) {}

    void readInput() override {
        std::cin >> radius >> centerX >> centerY;
    }

    void displayDetails() const override {
        cout << "Circle Details:" << endl;
        cout << "Circle with radius: " << radius << endl;
        cout << "Area: " << calculateArea() << endl;
    }

    T calculateArea() const override {
        return M_PI * radius * radius;
    }
};

// Cube class derived from Shape
template <typename T>
class Cube : public Shape<T> {
private:
    T sideLength;
    T centerX, centerY, centerZ;

public:
    Cube() : sideLength(0), centerX(0), centerY(0), centerZ(0) {}

    void readInput() override {
        std::cin >> sideLength >> centerX >> centerY >> centerZ;
    }

    void displayDetails() const override {
        cout << "Cube Details:" << endl;
        cout << "Cube with side length: " << sideLength << endl;
        cout << "Surface area: " << calculateArea() << endl;
    }

    T calculateArea() const override {
        return 6 * sideLength * sideLength;
    }
};

int main() {
    // Input
    int shapeType;
    cin >> shapeType;

    // Create shape objects based on the input type
    Shape<double>* shape = nullptr;

    if (shapeType == 1) {
        shape = new Circle<double>();
    } else if (shapeType == 2) {
        shape = new Cube<double>();
    } else {
        cout << "Invalid shape type selected." << endl;
        return 0;
    }

    shape->readInput();
    shape->displayDetails();

    delete shape;

    return 0;
}
