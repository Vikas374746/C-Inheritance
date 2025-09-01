#include <iostream>
#include <string>
using namespace std;

// Base class
class Jeans {
public:
    string type[3] = {"Bootcut", "Wide Leg", "Skinny"};

    void brand() {
        cout << "H&M - Denim" << endl;
    }
};

// Derived class 1
class Bootcut : public Jeans {
public:
    string color = "Dark Blue";
};

// Derived class 2
class WL : public Jeans {
public:
    string color = "Black";
};

// Derived class 3
class Skinny : public Jeans {
public:
    string color = "Grey";
};

int main() {
    Bootcut j1;
    cout << endl;
    j1.brand();
    cout << j1.type[0] << " : " << j1.color << endl;

    WL j2;
    cout << endl;
    j2.brand();
    cout << j2.type[1] << " : " << j2.color << endl;

    Skinny j3;
    cout << endl;
    j3.brand();
    cout << j3.type[2] << " : " << j3.color << endl;

    return 0;
}
/*
H&M - Denim
Bootcut : Dark Blue

H&M - Denim
Wide Leg : Black

H&M - Denim
Skinny : Grey

*/
