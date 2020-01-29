#include <iostream>
using namespace std;

int main()
{
    int year = 0;

    cout << "\tCheck if The Year is Leap" << endl;
    cout << "Please enter a positive number: ";
    cin >> year;

    // Checking if the number entered is positive
    while (year <= 0)
    {
        cout << "You did not enter a positive number\nPlease enter a positive number: ";
        cin >> year;
    }

    while (true)
    {
        if (year % 4 == 0)
        {
            if (year % 100 == 0)
            {
                if (year % 400 == 0)
                {
                    cout << "The year " << year << " is a leap year." << endl;
                }
                else 
                {
                    cout << "The year " << year << " is not a leap year." << endl;;
                }
            }
            else 
            {
                cout << "The year " << year << " is a leap year." << endl;
            }
        }
        else 
        {
            cout << "The year " << year << " is not a leap year." << endl;
        }

        cout << "Please enter another positive number: ";
        cin >> year;
        while (year <= 0)
        {
            cout << "You did not enter a positive number\nPlease enter a positive number: ";
            cin >> year;
        }
    }    
    return 0;
}
