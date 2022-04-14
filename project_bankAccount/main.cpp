#include <iostream>
#include "Bank.h"
#include <string>

using namespace std;

int main()
{
    BankAccount mrpriness("Mr.Princess");
    BankAccount mrchicken("Mr.Chicken", 25);

    mrchicken.deposit(15);
    mrchicken.withdraw(30); // should be 10 dollars left after this execution

    cout << "Account A" << endl;
    cout << "Owner: " << mrpriness.getOwner() << endl;
    cout << "Balance: " << mrpriness.getBalance() << endl;

    cout << "Account B" << endl;
    cout << "Owner: " << mrchicken.getOwner() << endl;
    cout << "Balance: " << mrchicken.getBalance() << endl;

    return 0;
}