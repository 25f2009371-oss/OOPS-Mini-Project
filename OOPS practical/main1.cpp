#include <iostream>
#include <string>
#include <chrono>
#include <thread>
using namespace std;

class student {
private:
    string name;
    int marks;

public:
    student* setName(string name) {
        this->name = name;
        return this;
    }

    student* setMarks(int marks) {
        this-> marks=marks;
        return this;
    }

    void display() {
        cout << "Name: " << name << endl;
        cout << "Marks: " << marks << endl;
                    this_thread::sleep_for(chrono::seconds(5)); // base wait time of 5 seconds

    }

};

int main() {
    
    student s;

    s.setName("Ayush")->setMarks(85)->display();
    return 0;
}
