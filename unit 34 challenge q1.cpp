#include <iostream>
#include <string>

class Fruit {
public:
    virtual std::string getTaste() const = 0;
};

class Apple : public Fruit {
public:
    std::string getTaste() const override {
        return "Sweet";
    }
};

class Banana : public Fruit {
public:
    std::string getTaste() const override {
        return "Creamy";
    }
};

class Orange : public Fruit {
public:
    std::string getTaste() const override {
        return "Tangy";
    }
};

class Grape : public Fruit {
public:
    std::string getTaste() const override {
        return "Juicy";
    }
};

class Pineapple : public Fruit {
public:
    std::string getTaste() const override {
        return "Sweet and Sour";
    }
};

int main() {
    int choice;
  //  std::cout << "Choose a fruit (1 = Apple, 2 = Banana, 3 = Orange, 4 = Grape, 5 = Pineapple): ";
    std::cin >> choice;

    Fruit* selectedFruit = nullptr;

    switch (choice) {
        case 1:
            selectedFruit = new Apple();
            break;
        case 2:
            selectedFruit = new Banana();
            break;
        case 3:
            selectedFruit = new Orange();
            break;
        case 4:
            selectedFruit = new Grape();
            break;
        case 5:
            selectedFruit = new Pineapple();
            break;
        default:
            std::cout << "Invalid choice, defaulting to generic fruit." << std::endl;
            break;
    }

    if (selectedFruit != nullptr) {
        std::cout << "The taste of the fruit is: " << selectedFruit->getTaste() << std::endl;
        delete selectedFruit;
    } else {
        std::cout << "The taste of the fruit is: Generic fruit taste" << std::endl;
    }

    return 0;
}

Copied to clipboard
