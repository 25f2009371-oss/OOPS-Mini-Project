#include <iostream>
#include <string>
using namespace std;
class Student {
private:
    int rollNo;
    string name;
    float marks;
public:
    void input() {
        cout << "Enter roll number: ";
        cin >> rollNo;
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter marks: ";
        cin >> marks;}

    void display() {
        cout << "Roll No: " << rollNo << endl;
        cout << "Name: " << name << endl;
        cout << "Marks: " << marks << endl;
        cout << "-------------------" << endl;}};
int main() {
    int n;
    cout << "Enter number of students: ";
    cin >> n;
    // Dynamically create an array of objects
    Student *students = new Student[n];
    // Input using pointer
    for (int i = 0; i < n; i++) {
        cout << "\nEnter details of student " << i + 1 << endl;

        (students + i)->input();}
    // Display using pointer
    cout << "\nStudent Details\n";
    cout << "====================\n";
    for (int i = 0; i < n; i++) {
        (students + i)->display();
    }
    // Free dynamically allocated memory
    delete[] students;
    return 0;}