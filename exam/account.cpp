#include "account.h"
#include <iostream>

using namespace std;

Account::Account()
{
    balance =0;
    numdeposits = -1;
    numwithdraws = -1;
}

Account::Account (string name1, long taxID1, double balance1)
{
    name = name1;
    taxID = taxID1;
    balance = balance1;
}

void Account::setName(string name1)
{
    name = name1;
}

void Account::setTaxID(long taxID1)
{
    taxID = taxID1;
}

void Account::setBalance(double balance1)
{
    balance = balance1;
}

string Account::getName()
{
    return name;
}

long Account::getTaxID()
{
    return taxID;
}

double Account::getBalance()
{
    return balance;
}

void Account::makeDeposit(double amount)
{
    if (amount > 0)
    {
        balance += amount;
        for(int i=9;i>=1;i--)
        {
            last10deposits[i] = last10deposits[i-1];
        }
        last10deposits[0] = amount;
        numdeposits += 1;
    }
        else if(amount<0)
        {
            balance += amount;
            for(int i=9;i>=1;i--)
            {
                last10withdraws[i] = last10withdraws[i-1];
            }
            last10withdraws[0] = amount;
            numwithdraws += 1;
    }
}

void Account::display()
{
    cout << "Name: " << name << endl;
    cout << "TaxID: " << taxID << endl;
    cout << "Balance: " << balance << endl;
}