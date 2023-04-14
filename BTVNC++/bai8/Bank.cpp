#include <iostream>
#include <string>
using namespace std;

class BankAccount {
private:
    string accountNumber;
    string accountName;
    double balance;

public:
    BankAccount(string number, string name, double initialBalance) {
        accountNumber = number;
        accountName = name;
        balance = initialBalance;
    }

    void deposit(double amount) {
        balance += amount;
        cout << "Deposited " << amount << " into account " << accountNumber << endl;
    }

    void withdraw(double amount) {
        if (balance >= amount) {
            balance -= amount;
            cout << "Withdrawn " << amount << " from account " << accountNumber << endl;
        } else {
            cout << "Error: Insufficient balance in account " << accountNumber << endl;
        }
    }

    void checkBalance() {
        cout << "Account " << accountNumber << " has a balance of " << balance << endl;
    }
};

int main() {
    BankAccount myAccount("123456789", "John Smith", 1000.0);
    myAccount.checkBalance();  // Expected output: Account 123456789 has a balance of 1000
    myAccount.deposit(500.0);  // Expected output: Deposited 500 into account 123456789
    myAccount.checkBalance();  // Expected output: Account 123456789 has a balance of 1500
    myAccount.withdraw(2000.0);  // Expected output: Error: Insufficient balance in account 123456789
    myAccount.withdraw(1000.0);  // Expected output: Withdrawn 1000 from account 123456789
    myAccount.checkBalance();  // Expected output: Account 123456789 has a balance of 500

    return 0;
}
