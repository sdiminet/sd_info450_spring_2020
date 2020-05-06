#include "checking.h"

using namespace std;


Checking::Checking()
{

}

Checking::Checking(string name, long taxID, double balance) : Account(name, taxID, balance)
{

}

void Checking::writeCheck(int checknum, double amount)
{
    if(amount > getBalance())
    {
        cout << "Insufficient Balance!" << endl;
    }
    else 
    {
        setBalance(getBalance() - amount);
        numwithdraws++;
        if(numwithdraws < 100)
        {
            withdraw[numwithdraws] = getBalance();
        }
        last10checks[numdeposits] = checknum;
    }
}

void Checking::display()
{
    cout << "Name: " << getName() << " Balance: " << getBalance() << endl;
    cout << "Account Check Register: " << endl;
    cout << " " << endl;

    for(int i=0; i<numdeposits; i++)
    {
        cout << "Check Number: " << last10checks[i] << " Amount: " << withdraw[i] << endl;
    }

    cout<< " " << endl;
    cout << "Account Deposits: " << endl;
    for(int i=0; i<numdeposits;i++)
    {
        cout << i+1 << ":" << deposit[i] << endl;
    }
}