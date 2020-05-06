#include "savings.h"

using namespace std;

Savings::Savings():Account()
{

}
Savings::Savings(string name, long taxID, double balance) : Account(name, taxID, balance)
{

}

void Savings::doWithdraw(double amount)
{
    if(amount > getBalance()) cout << "Insufficient funds!!!" << endl;
    else
    {
        makeDeposit(-amount);
    }
}

void Savings::display()
{
    cout << "Name: " << getName() << " Balance: " << getBalance() << endl;
    cout << "Account Withdrawal: " << endl;
    cout << " " << endl;
    for (int i=0; i<10; i++)
    {
        cout << i+1 << ": " << last10withdraws[i] << endl;
    }

    cout << "Account Deposits: " << endl;
    for(int i=0; i<10; i++)
    {
        cout << i+1 << ": " << last10deposits[i] << endl;
    }
}