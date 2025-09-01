#include <iostream>
using namespace std;

// Base class 1
class Vehicle {
public:
    string brand = "Ford";
    void color() {
        cout << "Red!\n";
    }
};

// Base class 2
class Engine {
public:
    int horsepower = 450;
    void type() {
        cout << "V8 Engine\n";
    }
};

// Derived class (inherits from both Vehicle and Engine)
class Car : public Vehicle, public Engine {
public:
    string model = "Mustang";
};

int main() {
    Car myCar;
    myCar.color(); // From Vehicle
    myCar.type();  // From Engine
    cout << myCar.brand << " " << myCar.model << " with " << myCar.horsepower << " HP" << endl;
    return 0;
}

/*
Output:
Red!
V8 Engine
Ford Mustang with 450 HP
*/
