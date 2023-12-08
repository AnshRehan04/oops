#include<iostream>
#include<string>
#include<vector>
using namespace std;

class Account{
    protected:
    string accountNumber;
    double balance;
    public:
    Account(string accNum,double initialBalance):
    accountNumber(accNum),balance(initialBalance){}

    void deposit(double amount){
        balance +=amount;
    }
    //virtual
    void withdraw(double amount){
        if (balance >= amount){
            balance -= amount;
        }else{
            cout<<"Can't withdraw"<<endl;
        }
    }
    void displayBalance() {
        cout<<balance<<endl;
    }
};