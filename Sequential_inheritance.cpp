#include <iostream>
#include <string>
using namespace std;

// Base class
class Food {
public:
    string cuisine = "Indian";
    void type() {
        cout << "Asian" << endl;
    }
};

// Derived class from Food
class Dish : public Food {
public:
    string dish = "Biryani";
};

// Derived class from Dish (multilevel inheritance)
class Restaurant : public Dish {
public:
    string name = "Spice Kitchen";
};

int main() {
    Restaurant f3;         // Object of most derived class

    f3.type();             // Function from Food class
    cout << f3.cuisine << " - " << f3.dish << endl;   // From Food & Dish
    cout << "Restaurant: " << f3.name << endl;        // From Restaurant

    return 0;
}
