
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
    Car myCar("Red", "Toyota");
    cout << "Color: " << myCar.color << endl;  // Output: Red
    cout << "Model: " << myCar.model << endl;  // Output: Toyota
    cout << "Speed: " << myCar.speed << endl;  // Output: 0
    return 0;
}

