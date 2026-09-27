#include <iostream>
using namespace std;

class Calculator {
public:

    // Addition of two integers
    int add(int a, int b) {
        return a + b;}

    // Addition of two floating-point numbers
    float add(float a, float b) {
        return a + b;
    }

    // Addition of two double values
    double add(double a, double b) {
        return a + b;
    }

    // Addition of three integers
    int add(int a, int b, int c) {
        return a + b + c;
    }
};

int main() {

    Calculator calc;

    cout << "Addition of integers: "
         << calc.add(10, 20) << endl;

    cout << "Addition of floats: "
         << calc.add(10.5f, 20.5f) << endl;

    cout << "Addition of doubles: "
         << calc.add(10.25, 20.75) << endl;

    cout << "Addition of three integers: "
         << calc.add(10, 20, 30) << endl;

    return 0;
}