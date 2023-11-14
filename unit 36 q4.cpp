#include <iostream>
#include <cstring>

class Book {
private:
    char *title;
    char *author;
    int year;

public:
    // Dynamic constructor
    Book(const char *title, const char *author, int year) {
        this->title = new char[strlen(title) + 1];
        strcpy(this->title, title);

        this->author = new char[strlen(author) + 1];
        strcpy(this->author, author);

        this->year = year;
    }

    // Destructor for memory deallocation
    ~Book() {
        delete[] title;
        delete[] author;
    }

    // Method to set book attributes
    void setAttributes(const char *title, const char *author, int year) {
        delete[] this->title;
        delete[] this->author;

        this->title = new char[strlen(title) + 1];
        strcpy(this->title, title);

        this->author = new char[strlen(author) + 1];
        strcpy(this->author, author);

        this->year = year;
    }

    // Method to update the year
    void updateYear(int newYear) {
        this->year = newYear;
    }

    // Method to display book details
    void displayDetails() const {
        std::cout << "Book Details:\n";
        std::cout << "Title: " << title << "\n";
        std::cout << "Author: " << author << "\n";
        std::cout << "Year of Publication: " << year << "\n";
    }
};

int main() {
    char title[100];
    char author[100];
    int publicationYear;
    int updatedYear;

    // Input
    std::cin.getline(title, sizeof(title));
    std::cin.getline(author, sizeof(author));
    std::cin >> publicationYear >> updatedYear;

    // Create a Book object using dynamic constructor
    Book book(title, author, publicationYear);

    // Display original book details
    book.displayDetails();

    // Update the year
    book.updateYear(updatedYear);

    // Display updated book details
    std::cout << "\nUpdated Year of Publication: " << updatedYear << "\n";

    return 0;
}
