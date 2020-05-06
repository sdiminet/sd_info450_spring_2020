#include "account.h"

class Checking : public Account 
{
    private:
        int last10checks[10];
    public:
        Checking();
        Checking(string name, long taxID, double balance);
        void writeCheck(int checknum, double amount);
        void display();
};