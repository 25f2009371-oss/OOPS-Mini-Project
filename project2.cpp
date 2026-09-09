#include <iostream>
using namespace std;

class Bank {
public:
    class Account {
    private:
        int accountNumber;
        double balance;

    public:
        // Default constructor
        Account() {
            accountNumber = 0;
            balance = 0;
        }

        // Parameterized constructor
        Account(int number, double bal) {
            accountNumber = number;
            balance = bal;
        }

        // Deposit method
        void deposit(double amount) {
            if (amount > 0) {
                balance += amount;
                cout << "Amount deposited successfully!" << endl;
                cout << "Updated Balance: " << balance << endl;
            } else {
                cout << "Invalid deposit amount!" << endl;
            }
        }



void withdraw(double amount){
if(amount<=0){
    cout<<"Invalid withdrawl amount. \n";

}

else if(amount >balance){

    cout<<"insufficient balance \n";
}



}



        // Display account info
        void display() {
            cout << "Account Number: " << accountNumber << endl;
            cout << "Balance: " << balance << endl;
        }
    };
};

int main() {
    // Create an account with account number 101 and initial balance 500
    Bank::Account acc1(101, 500);

    acc1.display();       // Show initial details
    acc1.deposit(200);    // Deposit money
    acc1.display();       // Show updated details

    return 0;
}
