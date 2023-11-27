#include <iostream>
#include<bits/stdc++.h>
#include <cmath>
using namespace std;

// A constant value for pi
const double PI = 3.14159;

// A template class to represent a shape
template <typename T>
class Shape {
    protected:
        string name; // The name of the shape
    public:
        // A constructor to initialize the shape with the name
        Shape(string name) {
            this->name = name;
        }

        // A pure virtual function to calculate the area of the shape
        virtual T area() = 0;

        // A function to display the name and area of the shape
        void display() {
      //      cout << "The area of " << name << " is " << area() << endl;
        }
};

// A template class to represent a circle
// This class inherits from the Shape class template
template <typename T>
class Circle : public Shape<T> {
    private:
        T radius; // The radius of the circle
    public:
        // A constructor to initialize the circle with the name and the radius
        Circle(string name, T radius) : Shape<T>(name) {
            this->radius = radius;
        }

        // A function to calculate the area of the circle
        // This function overrides the area function of the base class
        T area() {
            return PI * pow(radius, 2);
        }
};

// A template class to represent a square
// This class inherits from the Shape class template
template <typename T>
class Square : public Shape<T> {
    private:
        T side; // The side length of the square
    public:
        // A constructor to initialize the square with the name and the side length
        Square(string name, T side) : Shape<T>(name) {
            this->side = side;
        }

        // A function to calculate the area of the square
        // This function overrides the area function of the base class
        T area() {
            return pow(side, 2);
        }
};

// A template class to represent a triangle
// This class inherits from the Shape class template
template <typename T>
class Triangle : public Shape<T> {
    private:
        T base; // The base length of the triangle
        T height; // The height of the triangle
    public:
        // A constructor to initialize the triangle with the name, the base length, and the height
        Triangle(string name, T base, T height) : Shape<T>(name) {
            this->base = base;
            this->height = height;
        }

        // A function to calculate the area of the triangle
        // This function overrides the area function of the base class
        T area() {
            return 0.5 * base * height;
        }
};

int main() {
    string name; // The name of the shape
    double radius, side, base, height; // The dimensions of the shape
    double totalArea = 0; // The total area of all shapes

    // Read the name and radius of the circle
   // cout << "Enter the name of the circle: ";
    getline(cin, name);
   // cout << "Enter the radius of the circle: ";
    cin >> radius;

    // Create a circle object using the name and the radius
    Circle<double> circle(name, radius);

    // Display the name and area of the circle
    circle.display();

    // Add the area of the circle to the total area
    totalArea += circle.area();

    // Read the name and side length of the square
   // cout << "Enter the name of the square: ";
    cin.ignore();
    getline(cin, name);
  //  cout << "Enter the side length of the square: ";
    cin >> side;

    // Create a square object using the name and the side length
    Square<double> square(name, side);

    // Display the name and area of the square
    square.display();

    // Add the area of the square to the total area
    totalArea += square.area();

    // Read the name and base and height of the triangle
   // cout << "Enter the name of the triangle: ";
    cin.ignore();
    getline(cin, name);
   // cout << "Enter the base and height of the triangle: ";
    cin >> base >> height;

    // Create a triangle object using the name, the base length, and the height
    Triangle<double> triangle(name, base, height);

    // Display the name and area of the triangle
    triangle.display();

    // Add the area of the triangle to the total area
    totalArea += triangle.area();

    // Display the total area of all shapes with two decimal places
    cout << "Total area of all shapes: "<<fixed <<setprecision(2)  << totalArea << endl;

    return 0;
}
