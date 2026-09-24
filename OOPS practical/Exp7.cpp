#include <iostream>
using namespace std;

class Student {
string name;
int marks;
static int count;
public:
Student(string n, int m) {
name = n;
marks = m;
count++;
}
static void showCount() {
cout << "Total Students: " << count << endl;
}
friend void show(Student s);
};
int Student::count = 0;
void show(Student s) {
cout << "Name: " << s.name << endl;
cout << "Marks: " << s.marks << endl;
}
int main() {
string n1, n2;
int m1, m2;
cout << "Enter name and marks of student 1: ";
cin >> n1 >> m1;
cout << "Enter name and marks of student 2: ";
cin >> n2 >> m2;
Student s1(n1, m1);
Student s2(n2, m2);
show(s1);
show(s2);
Student::showCount();
}
