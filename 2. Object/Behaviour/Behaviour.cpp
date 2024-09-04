
#include <iostream>
using namespace std;

class Car {
public:
    string color;
    string model;
    int speed;

    // Constructor
    Car(string c, string m) : color(c), model(m), speed(0) {}

    // Method to accelerate the car
    void accelerate(int amount) {
        speed += amount;
    }

    // Method to brake the car
    void brake() {
        if (speed >= 100) {
            speed -= 10;
            if (speed < 0) speed = 0;  // Prevent negative speed
        }
    }
};

int main() {
    Car myCar("Red", "Toyota");
    myCar.accelerate(100);
    cout << "Speed: " << myCar.speed << endl;  // Output: 100
    myCar.brake();
    cout << "Speed after brake: " << myCar.speed << endl;  // Output: 40
    return 0;
}

