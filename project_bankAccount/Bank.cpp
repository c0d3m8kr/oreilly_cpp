#include <iostream>
#include <string>
#include "Bank.h"

using namespace std;

BankAccount::BankAccount(string owner)
{
    this->owner = owner;
    this->balance = 0;
}


BankAccount::BankAccount(string owner, int balance)
{
    this->owner = owner;
    if (balance > 0)
        this->balance = balance;
    else{
        cout << "Balance must be greater than $0." << endl;
    }
}

void BankAccount::deposit(int amount)
{
    if (amount > 0)
        this->balance += amount;
    else{
        cout << "Deposit must be greater than $0." << endl;
    }
}

void BankAccount::withdraw(int amount)
{
    if (amount > 0)
        this->balance -= amount;
    else{
        cout << "Withdraw must be greater than $0." << endl;
    }
}

string BankAccount::getOwner() const
{
    return owner;
}

int BankAccount::getBalance()
{
    return balance;
}