#include <iostream>
#include <memory>
using namespace std;

class student {
public:
    void display() {
        cout << "Student object is created" << endl;
    }
};

int main() {

    unique_ptr<student> ptr1 = make_unique<student>();

    ptr1->display();
unique_ptr <student> ptr2=move(ptr1);
    ptr2->display();



    
    return 0;
}