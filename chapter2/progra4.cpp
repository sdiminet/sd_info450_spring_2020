/* This program converts gallons to liters using 
floating point numbers. */

#include <iostream>
using namespace std;

int main()
{
    double gallons, liters;
    cout << "Enter number of gallons: ";
    cin >> gallons; // this inputs from the user

    liters = gallons * 3.7854; // converts to liters

    cout << "Liters: " << liters;

    return 0;
}