#include <iostream>
using namespace std;

class Bank
{
private:
    class Account
    {
    private:
        int accountNumber;
        string accountHolderName;
        double balance;

    public:
        // constructors
        Account()
        {
            accountNumber = 0;
            accountHolderName = "";
            balance = 0.0;
        }

        Account(int accNum, string accHolderName, double bal)
        {
            accountNumber = accNum;
            accountHolderName = accHolderName;
            balance = bal;
        }

        void deposit(double amount)
        {
            if (amount > 0)
            {
                balance += amount;
                cout << "Deposited: " << amount << endl;
                cout << "Updated balance: " << balance << endl;
            }
            else
            {
                cout << "Invalid deposit amount." << endl;
            }
        }

        void withdraw(double amount)
        {
            if (amount > 0 && amount <= balance)
            {
                balance -= amount;
                cout << "Withdrawn: " << amount << endl;
                cout << "Updated balance: " << balance << endl;
            }
            else
            {
                cout << "Invalid withdrawal amount." << endl;
            }
        }

        void displayAccountDetails()
        {
            cout << "Account Number: " << accountNumber << endl;
            cout << "Account Holder Name: " << accountHolderName << endl;
            cout << "Balance: " << balance << endl;
        }

        int getAccountNumber()
        {
            return accountNumber;
        }
    };

public:
    Account accounts[100];

    void createAccounts()
    {
        accounts[0] = Account(1001, "Ayush", 5000.0);
        accounts[1] = Account(1002, "Gurnani", 3000.0);
        accounts[2] = Account(1003, "Divyanshu", 7000.0);
        accounts[3] = Account(1004, "Gaurav", 2000.0);
    }

    int findAccount(int accNum)
    {
        for (int i = 0; i < 100; i++)
        {
            if (accounts[i].getAccountNumber() == accNum)
            {
                return i;
            }
        }
        return -1;
    }

    void displayAllAccounts()
    {
        for (int i = 0; i < 100; i++)
        {
            if (accounts[i].getAccountNumber() != 0)
            {
                accounts[i].displayAccountDetails();
                cout << endl;
            }
        }
    }
};

int main()
{
    Bank bank;
    bank.createAccounts();

    int choice;
    do
    {
        cout << "\n\n========================= Bank Menu =========================\n";
        cout << "1. Show all accounts\n";
        cout << "2. Show particular account\n";
        cout << "3. Deposit money\n";
        cout << "4. Withdraw money\n";
        cout << "5. Exit\n";
        cout << "=============================================================\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            bank.displayAllAccounts();
            break;

        case 2:
        {
            int accNum;
            cout << "Enter account number: ";
            cin >> accNum;
            int index = bank.findAccount(accNum);
            if (index != -1)
                bank.accounts[index].displayAccountDetails();
            else
                cout << "Account not found.\n";
            break;
        }

        case 3:
        {
            int accNum;
            double amount;
            cout << "Enter account number: ";
            cin >> accNum;
            int index = bank.findAccount(accNum);
            if (index != -1)
            {
                cout << "Enter amount to deposit: ";
                cin >> amount;
                bank.accounts[index].deposit(amount);
            }
            else
                cout << "Account not found.\n";
            break;
        }

        case 4:
        {
            int accNum;
            double amount;
            cout << "Enter account number: ";
            cin >> accNum;
            int index = bank.findAccount(accNum);
            if (index != -1)
            {
                cout << "Enter amount to withdraw: ";
                cin >> amount;
                bank.accounts[index].withdraw(amount);
            }
            else
                cout << "Account not found.\n";
            break;
        }

        case 5:
            cout << "Exiting program...\n";
            break;

        default:
            cout << "Invalid choice. Try again.\n";
        }

    } while (choice != 5);

    return 0;
}
