#include "creditcard.h"

CreditCard::CreditCard()
{
    index = 0;
}

CreditCard::CreditCard(string name, long taxID, double balance) : Account (name, taxID, balance)
{
    index=0;
}

void CreditCard::doCharge(string name, double amount)
{
    if(amount > getBalance()) cout << "Insufficient Balance!";
    else 
    {
        setBalance(getBalance()-amount);
        numwithdraws++;
        if(numwithdraws < 100)
        {
            withdraw[numwithdraws] = getBalance();
        }
        last10charges[index] = name;
        index++;
    }
}

void CreditCard::makePayment(double amount)
{
    if(amount <=0) cout << "Amount is invalid!";
    else
    {
        setBalance(getBalance()+amount);
        numdeposits++;
        if(numdeposits < 100)
        {
            deposit[numdeposits] = getBalance();
        }
    }
}

void CreditCard::display()
{
    cout << "Name: " << getName() << " Balance: " << getBalance() << endl;
    cout << "Account Charges: " << endl;
    cout << " " << endl;
    for(int i=0; i<index; i++)
    {
        cout << i+1 << ": " << last10charges[index] << " Amount: " << withdraw[i] << endl;
    }

    cout << "Account Deposits: " << endl;
    for(int i=0; i<numdeposits; i++)
    {
        cout << i+1 << ": " << deposit[i] << endl;
    }
}