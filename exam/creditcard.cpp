#include "creditcard.h"

CreditCard::CreditCard() : Account ()
{
    for(int i=0;i<10;i++)
    {
        last10charges[i] = "";
    }
}

CreditCard::CreditCard(string name, long taxID, double balance) : Account (name, taxID, balance)
{
    for(int i=0;i<10;i++)
    {
        last10charges[i] = "";
    }
}

void CreditCard::doCharge(string name, double amount)
{
    if(amount > getBalance()) cout << "Insufficient Balance!";
    else 
    {
        for(int i=9;i>=1;i--)
        {
            last10charges[i] = last10charges[i-1];
        }
        last10charges[0] = name;
        makeDeposit(-amount);
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
            makeDeposit(amount);
        }
    }
}

void CreditCard::display()
{
    cout << "Name: " << getName() << " Balance: " << getBalance() << endl;
    cout << "Account Charges: " << endl;
    cout << " " << endl;
    for(int i=0; i<10; i++)
    {
        cout << i+1 << ": " << last10charges[i] << " Amount: " << last10withdraws[i] << endl;
    }

    cout << "Account Deposits: " << endl;
    for(int i=0; i<10; i++)
    {
        cout << i+1 << ": " << last10deposits[i] << endl;
    }
}