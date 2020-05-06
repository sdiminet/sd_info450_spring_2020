#include "account.h"

class CreditCard : public Account 
{
    private:
        long cardNumber;
        string last10charges[10];
    public:
        CreditCard();
        CreditCard(string name, long taxID, double balance);
        void doCharge(string name, double amount);
        void makePayment(double amount);
        void display();
};