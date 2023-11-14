#include <iostream>

class Color {
public:
    virtual void paint() const = 0;
};
class RedPaint : public Color {
public:
    void paint() const override {
        std::cout << "I'm Painting with Red color." << std::endl;
    }
};

class BluePaint : public Color {
public:
    void paint() const override {
        std::cout << "I'm Painting with Blue color." << std::endl;
    }
};

int main() {
    char userChoice;
    std::cin >> userChoice;

    Color* paintColor;

    if (userChoice == 'R' || userChoice == 'r') {
        paintColor = new RedPaint();
    } else if (userChoice == 'B' || userChoice == 'b') {
        paintColor = new BluePaint();
    } else {
   std::cout << "Invalid choice!" << std::endl;
        return 0;
    }

    paintColor->paint();
    delete paintColor;

    return 0;
}
