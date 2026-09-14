#include <iostream>
#include <memory>
using namespace std;



int add(int a, int b){
    return a+b;
}

int add(int a, int b, int c){
    return a+b+c;
}


double add(double a, double b){
    return a+b;
}





int main() {

    shared_ptr<int> p1 = make_shared<int>(100);

    cout << "Value: " << *p1 << endl;
    cout << "Reference Count: " << p1.use_count() << endl;

    shared_ptr<int> p2 = p1;

    cout << "Reference Count: " << p1.use_count() << endl;

    return 0;
}