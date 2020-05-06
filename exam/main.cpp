#include "account.h"
#include "checking.h"
#include "savings.h"
#include "creditcard.h"

using namespace std;

double getAmount();

int main() 
{
    Savings savingAccount = Savings ("User_Savings", 1111, 100);
    CreditCard creditAccount = CreditCard ("User_Credit_Card", 2222, 100);
    Checking checkingAccount = Checking ("User_Checking", 3333, 100);
    int pressKey = -1;
    while(pressKey!=0)
    {
        cout <<"Choose the option \n1. Savings Deposit \n2. Savings withdrawal \n3. Checking Deposit \n4. Write A Check \n5. Credit Card Payment \n6. Make A Charge \n7. Display Savings \n8. Display Checking \n9. Display Credit Card \n0. Exit\n";
        cin >> pressKey;
        string name;
        double amount;
        long checknum;
        switch(pressKey)
        {
            case 1:
                amount = getAmount();
                savingAccount.makeDeposit(amount);
                break;
            case 2:
                amount = getAmount();
                savingAccount.doWithdraw(amount);
                break;
            case 3:
                amount = getAmount();
                checkingAccount.makeDeposit(amount);
                break;
            case 4:
                cout<<"Enter the check number" << endl;
			    cin>> checknum;
                while(checknum <=0 )
                {
                    cout << "Check number must be a positive number!" << endl;
                    cout<<"Enter the check number" << endl;
			        cin>> checknum;
                }
			    amount = getAmount();
			    checkingAccount.writeCheck(checknum, amount);
			    break;
            case 5:
                amount = getAmount();
			    creditAccount.makePayment(amount);
			    break;
            case 6:
                cout<<"Enter the charge name" << endl;
			    cin>>name;
			    amount = getAmount();
		    	creditAccount.doCharge(name, amount);
		    	break;
            case 7:
			    savingAccount.display();
			    break;
	    	case 8:
		    	checkingAccount.display();
			    break;
		    case 9:
			    creditAccount.display();
			    break;
		    case 0:
			    exit(0);
			    break;
        }
    }
    return 0;
}

double getAmount()
{
    double amount;
    cout << "Enter the amount: " << endl;
    cin >> amount;
    while(amount<=0)
    {
    cout << "Amount must be a positive number!" << endl;
    cout << "Enter the amount to deposit: " << endl;
    cin >> amount;
    }
    return amount;
}