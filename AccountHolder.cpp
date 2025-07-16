/*
Author: Jackline Mwaniki
Reg no: BSE-01-0058/2025
Description: AccountHolder
Date: 7/7/2025
version 1
*/

#include <iostream>
#include <string>

using namespace std;

class AccountHolder {
protected:
    string name;

public:
    void setName(string n) {
        name = n;
    }

    string getName() {
        return name;
    }
};

class BankAccount : public AccountHolder {
private:
    int accountNumber;
    double balance;

public:
    BankAccount(string n, int accNum, double bal) {
        setName(n);
        accountNumber = accNum;
        balance = bal;
    }

    int getAccountNumber() {
        return accountNumber;
    }

    double getBalance() {
        return balance;
    }
};

class SavingsAccount :
 public BankAccount {
private:
    double interestRate;

public:
    SavingsAccount(string n, int accNum, double bal, double rate)
        : BankAccount(n, accNum, bal) {
        interestRate = rate;
    }

    double getInterestRate() {
        return interestRate;
    }
};


int main()
{
    SavingsAccount sav("Jackline", 123456, 5000.0, 2.5);

    cout << "Name: " << sav.getName() << endl;
    cout << "Account Number: " << sav.getAccountNumber() << endl;
    cout << "Balance: " << sav.getBalance() << endl;
    cout << "Interest Rate: " << sav.getInterestRate() << "%" << endl;

    return 0;       
}