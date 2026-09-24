#include <iostream>
using namespace std;

class Account {
public:
    virtual void withdraw() {  // make it virtual
        cout << "Withdrawing with standard rules" << endl;
    }
};

class SavingAccount : public Account {
public:
    void withdraw() override {  // override keyword is optional but recommended
        cout << "Withdrawing with saving account limits" << endl;
    }
};

int main() {
    SavingAccount sa;
    sa.withdraw();       // calls SavingAccount version
    Account* a = &sa;
    a->withdraw();       // now calls SavingAccount version (dynamic binding)
    return 0;
}
