#include <iostream>
#include <memory>
#include <string>
using namespace std;
class Student {
private:
    int rollNo;
    string name;
    float marks;
public:
    Student(int r, string n, float m) {
        rollNo = r;
        name = n;
        marks = m;
    }

    void display() {
        cout << "Roll No: " << rollNo << endl;
        cout << "Name: " << name << endl;
        cout << "Marks: " << marks << endl;
    }

    ~Student() {
        cout << "Student object destroyed: " << name << endl;
    }
};

int main() {

    // --------------------------------
    // UNIQUE_PTR
    // --------------------------------

    cout << "Using unique_ptr\n";
    cout << "================\n";

    unique_ptr<Student> student1 =
        make_unique<Student>(101, "Ayush", 85.5);

    student1->display();

    cout << endl;


    // --------------------------------
    // SHARED_PTR
    // --------------------------------

    cout << "Using shared_ptr\n";
    cout << "================\n";

    shared_ptr<Student> student2 =
        make_shared<Student>(102, "Rahul", 90.0);

    shared_ptr<Student> student3 = student2;

    cout << "Student using student2:\n";
    student2->display();

    cout << "\nStudent using student3:\n";
    student3->display();

    cout << "\nNumber of owners: "
         << student2.use_count() << endl;

    return 0;
}