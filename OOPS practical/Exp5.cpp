#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
class BankAccount
{
private:
string accountNumber;
string accountHolderName;
double balance;

public:
BankAccount(string accNum, string accName, double initialBalance)
{
accountNumber = accNum;
accountHolderName = accName;
if (initialBalance >= 0)
{
balance = initialBalance;
}
else
{
balance = 0.0;
cout << "Warning: Initial balance cannot be negative. Set to $0.00.\n";
}
}
void deposit(double amount)
{
if (amount > 0)
{
balance += amount;
cout << "Successfully deposited $" << amount << ".\n";
}
else
{
cout << "Error: Deposit amount must be greater than zero.\n";
}
}

void withdraw(double amount)
{
if (amount <= 0)
{
cout << "Error: Withdrawal amount must be greater than zero.\n";
return;
}
if (amount > balance)
{
cout << "Error: Insufficient funds. Current balance is $" << balance << ".\n";
}
else
{
balance -= amount;
cout << "Successfully withdrew $" << amount << ".\n";
}
}

double getBalance() const
{
return balance;
}

void displayAccountInfo() const
{
cout << "\n--- Account Details ---\n";
cout << "Account Holder : " << accountHolderName << "\n";
cout << "Account Number : " << accountNumber << "\n";
cout << "Current Balance: $" << fixed << setprecision(2) << balance << "\n";
cout << "-----------------------\n\n";
}
};

int main()
{
BankAccount myAccount("CHK-12345", "Aditya Tilak Sharma", 500000.00);

myAccount.displayAccountInfo();

myAccount.deposit(8000.0);
myAccount.withdraw(50000.0);

myAccount.withdraw(90000.0);
myAccount.deposit(-80000.0);
cout << "\nFinal Balance: $" << myAccount.getBalance() << "\n";

return 0;
}
