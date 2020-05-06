#include "checking.h"

using namespace std;


Checking::Checking():Account()
{
    for(int i=0; i<10; i++)
    {
        last10checks[i]=0;
    }
}

Checking::Checking(string name, long taxID, double balance) : Account(name, taxID, balance)
{
    for(int i=0;i<10;i++)
    {
        last10checks[i] = -1;
    }
}

void Checking::writeCheck(int checknum, double amount)
{
    if(amount > getBalance())
    {
        cout << "Insufficient Balance!" << endl;
    }
    else 
    {
        for(int i=9;i>=1;i--)
        {
            last10checks[i] = last10checks[i-1];
        }
        last10checks[0] = amount;
        makeDeposit(-amount);;
    }
}

void Checking::display()
{
    cout << "Name: " << getName() << " Balance: " << getBalance() << endl;
    cout << "Account Check Register: " << endl;

    for(int i=0; i<10; i++)
    {
        cout << "Check Number: " << last10checks[i] << " Amount: " << last10withdraws[i] << endl;
    }

    cout<< " " << endl;
    cout << "Account Deposits: " << endl;
    for(int i=0; i<10;i++)
    {
        cout << i+1 << ": " << last10deposits[i] << endl;
    }
}