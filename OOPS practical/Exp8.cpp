#include <iostream>
using namespace std;

class Number {
    int value;

public:
    // Function to input data
    void input() {
        cout << "Enter value: ";
        cin >> value;
    }

    // Function to add two objects
    Number add(Number n) {
        Number result;
        result.value = value + n.value;
        return result;
    }

    // Function to display data
    void display() {
        cout << "Result = " << value << endl;
    }
};

int main() {
    Number n1, n2, n3;

    cout << "Enter first number:" << endl;
    n1.input();

    cout << "Enter second number:" << endl;
    n2.input();

    n3 = n1.add(n2);

    n3.display();

    return 0;
}