// This program converts gallons to liters.

#include <iostream>
using namespace std;

int main()
{
    int gallons, liters;
    
    cout << "Enter number of gallons: ";
    cin >> gallons; // this inputs from the user

    liters = gallons * 4; // convert to liters

    cout << "Liters: " << liters;

    return 0;
}