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
        double deposit [100];
        double withdraw [100];
    public:
        Account();
        Account (string name, long taxID, double balance);
        void setName (string name);
        void setTaxID(long taxID);
        void setBalance(double balance);
        string getName();
        long getTaxID();
        double getBalance();
        double makeDeposit(double amount);
        void display();
};
#endif