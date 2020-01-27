#include <iostream>
#include <cmath>

using namespace std;

int main ()
{
    double myNumber =0;
    double myResult = 0;

    cout << "Please Enter a positive number: ";
    cin >> myNumber;

    while (myNumber < 0)
    {
        cout << "You did not enter a positive number\nPlease enter a positive number: ";
        cin >> myNumber;
    }

    while (myNumber >= 1)
    {
        if (myNumber == 0)
        {
            break;
        }

        cout << "Your value squared is: " << pow(myNumber, 2) << endl;

        cout << "Please enter another positive number: ";
        cin >> myNumber;

        while (myNumber < 0)
        {
            cout << "You did not enter a positive number\nPlease enter a positive number: ";
            cin >> myNumber;
        }
    }

    cout << "You entered 0\nThe program is terminated!";

    return 0;
}