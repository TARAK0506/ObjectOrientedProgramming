
#include <iostream>
using namespace std;

class Car {
public:
    string color;
    string model;
    int speed;

    // Constructor
    Car(string c, string m) : color(c), model(m), speed(0) {}
};

int main() {
    Car car1("Red", "Toyota");
    Car car2("Red", "Toyota");

    // Checking identity
    cout << "Address of car1: " << &car1 << endl;
    cout << "Address of car2: " << &car2 << endl;
    cout << "car1 and car2 are " << (&car1 == &car2 ? "the same" : "different") << " objects." << endl;
    return 0;
}