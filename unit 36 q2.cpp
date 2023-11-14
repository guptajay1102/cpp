#include <iostream>
#include <string>
#include <cstring>

class Student {
private:
    std::string name;
    int age;
    int numCourses;
    std::string* courses;

public:
    // Dynamic constructor
    Student(const std::string& studentName, int studentAge, int numCourses)
        : name(studentName), age(studentAge), numCourses(numCourses) {
        // Allocate memory for courses array
        courses = new std::string[numCourses];
    }

    // Destructor to deallocate memory
    ~Student() {
        delete[] courses;
    }

    // Method to set student attributes
    void setDetails() {
        // Input courses
        for (int i = 0; i < numCourses; ++i) {
            std::cin >> courses[i];
        }
    }

    // Method to retrieve student attributes
    void displayDetails() const {
        std::cout << "Student Details:" << std::endl;
        std::cout << "Name: " << name << std::endl;
        std::cout << "Age: " << age << std::endl;
        std::cout << "Courses:";
        for (int i = 0; i < numCourses; ++i) {
            std::cout << " " << courses[i];
        }
        std::cout << std::endl;
    }

    // Method to check if student is enrolled in a specific course
    bool isEnrolled(const std::string& courseName) const {
        for (int i = 0; i < numCourses; ++i) {
            if (courses[i] == courseName) {
                return true;
            }
        }
        return false;
    }
};

int main() {
    std::string studentName;
    int studentAge, numCourses;

    // Input student details
    std::cin >> studentName >> studentAge >> numCourses;

    // Create dynamic student object
    Student* student = new Student(studentName, studentAge, numCourses);

    // Set student details
    student->setDetails();

    // Display student details
    student->displayDetails();

    // Check if the student is enrolled in a specific course
    std::string checkCourse;
    std::cin >> checkCourse;

    std::cout << "Is the student enrolled in " << checkCourse << "? ";
    if (student->isEnrolled(checkCourse)) {
        std::cout << "Yes" << std::endl;
    } else {
        std::cout << "No" << std::endl;
    }

    // Deallocate memory
    delete student;

    return 0;
}
