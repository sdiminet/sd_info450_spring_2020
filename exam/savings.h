#include "account.h"

class Savings : public Account 
{
    public:
        Savings();
        Savings(string name, long taxID, double balance);
        void doWithdraw(double amount);
        void display();
};