#include <iostream>
using namespace std;

class Fahrenheit; // Forward declaration

class Celsius {
    float temp;
public:
    // Constructor from float
    Celsius(float t) : temp(t) {}

    // Constructor from Fahrenheit object
    Celsius(const Fahrenheit& f);

    float getTemp() const { return temp; }
};

class Fahrenheit {
    float temp;
public:
    // Constructor from float
    Fahrenheit(float t) : temp(t) {}

    // Conversion operator to Celsius
    operator Celsius() const {
        return Celsius((temp - 32) * 5.0 / 9.0);
    }

    float getTemp() const { return temp; }
};

// Define Celsius constructor that takes Fahrenheit
Celsius::Celsius(const Fahrenheit& f) {
    temp = (f.getTemp() - 32) * 5.0 / 9.0;
}

int main() {
    float fTemp;
    cout << "Enter temperature in Fahrenheit: ";
    fTemp=32.01;

    Fahrenheit f(fTemp);
    Celsius c = f; // Implicit conversion using operator

    cout << f.getTemp() << "°F = " << c.getTemp() << "°C" << endl;

    return 0;
}
