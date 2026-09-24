#include <iostream>
#include <string>
using namespace std;
class Bank{
public:
    int balance;
    Bank(){
        balance = 0; }

    void deposit(int cd) {
        balance += cd;
        cout << "Deposit successful. Current balance: " << balance << endl;
    }

    void withdraw(int wt) {
        if (balance < wt) {
            cout << "Insufficient balance" << endl;
        } else {
            balance -= wt;
            cout << "Withdrawal successful. Current balance: " << balance << endl;
        }
    }
};

int main() {
    string username;
    cout << "Enter User name: ";
    cin >> username;

    Bank account; 
    string choice;
    int amount;

    cout << "Welcome, " << username << "! Type 'd' to deposit, 'w' to withdraw, 'q' to quit." << endl;

    while (true) {
        cout << "\nEnter choice: ";
        cin >> choice;

        if (choice == "q") {
            cout << " Final balance: " << account.balance << endl;
            break;
        } else if (choice == "d") {
            cout << "Enter amount to deposit: ";
            cin >> amount;
            account.deposit(amount);
        } else if (choice == "w") {
            cout << "Enter amount to withdraw: ";
            cin >> amount;
            account.withdraw(amount);
        } else {
            cout << "Invalid choice. Try again." << endl;
        }
    }

    return 0;
}
