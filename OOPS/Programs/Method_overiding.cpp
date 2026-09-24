#include <iostream>
using namespace std;

class Payment {
public:
    virtual void pay(int amount) {   // make it virtual
        cout << "Paying Rs. " << amount << " using generic payment method" << endl;
    }
};

class CreditCard : public Payment {
public:
    void pay(int amount) override {
        cout << "Paying Rs. " << amount << " using credit card" << endl;
    }
};

class UPI : public Payment {
public:
    void pay(int amount) override {
        cout << "Paying Rs. " << amount << " using UPI" << endl;
    }
};

int main() {
    Payment* method;   // base pointer

    CreditCard cc;
    UPI upi;

    method = &cc;      // point to CreditCard
    method->pay(500);  // calls CreditCard::pay()

    method = &upi;     // point to UPI
    method->pay(200);  // calls UPI::pay()

    return 0;
}
