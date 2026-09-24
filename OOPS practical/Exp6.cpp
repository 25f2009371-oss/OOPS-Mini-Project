#include <iostream>
using namespace std;
class Demo {
public:
// 1. Default Constructor
Demo() {
cout << "Default Constructor called\n";
}

// 2. Parameterized Constructor
Demo(int value) {
cout << "Parameterized Constructor called with value: " << value << "\n";
}

// 3. Copy Constructor
Demo(const Demo& obj) {
cout << "Copy Constructor called\n";
}

// 4. Destructor
~Demo() {
cout << "Destructor called\n";
}
};

int main() {
cout << "--- Creating Objects ---\n";

Demo obj1;           // Triggers Default Constructor
Demo obj2(10);       // Triggers Parameterized Constructor
Demo obj3 = obj1;    // Triggers Copy Constructor
cout << "\n--- Exiting Program (Destructors run automatically) ---\n";
return 0;
} // obj3, obj2, and obj1 are destroyed here in reverse order
