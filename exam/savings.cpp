#include "savings.h"

using namespace std;

Savings::Savings(string name, long taxID, double balance) : Account(name, taxID, balance)
{

}

void Savings::doWithdraw(double amount)
{
    if(amount > getBalance())
    {
        cout << "Insufficient Balance!" << endl;
    }
    else 
    {
        setBalance(getBalance()-amount);
        numwithdraws++;
        if(numwithdraws < 100)
        {
            withdraw[numwithdraws] = getBalance();
        }
    }
}

void Savings::doDeposit(double amount)
{
    if(amount <=0) cout << "Amount is invalid!" <<endl;
    else 
    {
        setBalance(getBalance() + amount);
        numdeposits++;
        if(numdeposits < 100)
        {
            deposit[numdeposits] = getBalance();
        }
    }
}

void Savings::display()
{
    cout << "Name: " << getName() << " Balance: " << getBalance() << endl;
    cout << "Account Withdrawal: " << endl;
    cout << " " << endl;
    for (int i=0; i<numwithdraws; i++)
    {
        cout << i+1 << ": " << withdraw[i] << endl;
    }

    cout << "Account Deposits: " << endl;
    for(int i=0; i<numdeposits; i++)
    {
        cout << i+1 << ": " << deposit[i] << endl;
    }
}