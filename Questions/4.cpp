#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Account {
protected:
    string accountNumber;
    double balance;

public:
    Account(string accNum, double initialBalance)
        : accountNumber(accNum), balance(initialBalance) {}

    void deposit(double amount) {
        balance += amount;
        cout << "Deposited: " << amount << endl;
    }

    virtual void withdraw(double amount) {
        if (balance >= amount) {
            balance -= amount;
            cout << "Withdrawn: " << amount << endl;
        } else {
            cout << "Insufficient funds. Can't withdraw." << endl;
        }
    }

    void displayBalance() const {
        cout << "Account Balance: " << balance << endl;
    }

    virtual void displayAccountInfo() const {
        cout << "Account Number: " << accountNumber << "\nBalance: " << balance << endl;
    }
};

class SavingsAccount : public Account {
private:
    double interestRate;

public:
    SavingsAccount(string accNum, double initialBalance, double interestRate)
        : Account(accNum, initialBalance), interestRate(interestRate) {}

    void addInterest() {
        double interest = balance * (interestRate / 100);
        deposit(interest);
        cout << "Interest added: " << interest << endl;
    }

    void displayAccountInfo() const override {
        cout << "Savings Account\n";
        Account::displayAccountInfo();
    }
};

int main() {
    Account acc("123456", 1000);
    acc.displayAccountInfo();

    acc.deposit(500);
    acc.displayBalance();

    acc.withdraw(200);
    acc.displayBalance();

    SavingsAccount savingsAcc("789012", 2000, 5.0);
    savingsAcc.displayAccountInfo();

    savingsAcc.addInterest();
    savingsAcc.displayBalance();

    savingsAcc.withdraw(2500); // Should display "Insufficient funds. Can't withdraw."

    return 0;
}
