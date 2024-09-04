#include <iostream>
#include <string>
using namespace std;

class Student {
    private:
        int age;
        string name;
        char grade;
        bool result;
    public:
        // Default Constructor
        Student() : name("Tarak"), age(23), grade('A'), result(true) {}

        // Parameterized Constructor
        Student(string n, int a, char g, bool r) : name(n), age(a), grade(g), result(r) {}

        // Method to display student details
        void display() const {
            cout << "Name of the student: " << name << endl;
            cout << "Age of the student: " << age << endl;
            cout << "Academic Grade: " << grade << endl;
            cout << "Result: " << (result ? "Pass" : "Fail") << endl;
        }
};

int main() {
    // Using the parameterized constructor
    Student s1("Ram", 20, 'B', false);
    s1.display();

    // Using the default constructor
    Student s2;
    s2.display();

    return 0;
}
