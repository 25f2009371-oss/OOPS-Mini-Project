#include <iostream>
using namespace std;

class Student {
    int roll;
    string name;

public:
    // Parameterized constructor
    Student(int r, string n) {
        roll = r;
        name = n;
    }

    // Delegating constructor (calls parameterized one)
    Student() : Student(101, "Ayush") {
        cout << "Default constructor called" << endl;
    }

    void display() {
        cout << "Roll no: " << roll << endl;
        cout << "Name: " << name << endl;
    }
};

int main() {
    Student s;   // Calls default constructor, which delegates to parameterized
    s.display();
    return 0;
}
