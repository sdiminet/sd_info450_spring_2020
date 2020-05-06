#include<iostream>
#ifndef ACCOUNT_H
#define ACCOUNT_H

using namespace std;
class Account 
{
    private:
        string name;
        long taxID;
        double balance;
    protected:
        int numdeposits;
        int numwithdraws;
        double last10deposits [10];
        double last10withdraws [10];
    public:
        Account();
        Account (string name, long taxID, double balance);
        void setName (string name);
        void setTaxID(long taxID);
        void setBalance(double balance);
        string getName();
        long getTaxID();
        double getBalance();
        void makeDeposit(double amount);
        void display();
};
#endif