#include "account.h"
#include "checking.h"
#include "savings.h"
#include "creditcard.h"

using namespace std;

int main() 
{
    Savings savingAccount = Savings ("User1", 1111, 100);
    CreditCard creditAccount = CreditCard ("User2", 2222, 100);
    Checking checkingAccount = Checking ("User3", 3333, 100);
    int pressKey = -1;
    while(pressKey!=0)
    {
        cout <<"Choose the option \n1. Savings Deposit \n2. Savings withdrawal \n3. Checking Deposit \n4. Write A Check \n5. Credit Card Payment \n6. Make A Charge \n7. Display Savings \n 8. Display Checking \n9. Display Credit Card \n0. Exit\n";
        cin >> pressKey;
        string name;
        double amount;
        long checknum;
        switch(pressKey)
        {
            case 1:
                cout << "Enter the amount to deposit: " << endl;
                cin >> amount;
                savingAccount.makeDeposit(amount);
                break;
            case 2:
                cout << "Enter the amount to withdraw: " << endl;
                cin >> amount;
                savingAccount.doWithdraw(amount);
                break;
            case 3:
                cout << "Enter the amount to deposit: " << endl;
                cin >> amount;
                checkingAccount.makeDeposit(amount);
                break;
            case 4:
                cout<<"Enter the check number" << endl;
			    cin>> checknum;
			    cout<<"Enter the amount" <<endl;
			    cin>>amount;
			    checkingAccount.writeCheck(checknum, amount);
			    break;
            case 5:
                cout<<"Enter the amount: " << endl;
			    cin>> amount;
			    creditAccount.makePayment(amount);
			    break;
            case 6:
                cout<<"Enter the name" << endl;
			    cin>>name;
			    cout<<"Enter the amount" << endl;
			    cin>>amount;
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