#include <iostream>
using namespace std;

class demo {
public:
    void add(int a, int b) {
        cout << a + b << endl;
    }
    void add(int a, int b, int c) {
        cout << a + b + c << endl;}

    int add_return(int a, int b)
        return a + b;
    }
};

int main() {
    demo d1;
    d1.add(1, 2);              
    d1.add(1, 2, 3);           
    cout << d1.add_return(1, 2); 
}
