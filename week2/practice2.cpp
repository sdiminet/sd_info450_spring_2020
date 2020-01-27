#include <iostream>
using namespace std;

int main()
{
    int myNumber = 0;
    int notPrime = 0;

    cout << "\tCheck if The Number is Prime" << endl;
    cout << "Enter a positive number: ";
    cin >> myNumber;

    //Checking if the number entered is positive
    while (myNumber < 0){
        cout << "You did not enter a positive number\nPlease enter a positive number: ";
        cin >> myNumber;
    }

    /* If number entered == 1, then it is not prime.
        Otherwise, using for loop, the number will be divided up until itself - 1 and check the remainder.
        If the remainder is 0, that means the number is not prime because it can be divided by another number. */

    while (myNumber >= 1){

        // had to reset it to 0 every time the loop restarted to get accurate results.
        notPrime = 0;

        if (myNumber == 0){
            break;
        }
    if (myNumber == 1){
        cout << "The number is not prime." << endl;
    }
    else {
    for (int i = 2; i <= myNumber - 1; i++){
        if (myNumber % i == 0){
            notPrime = 1;
        }
    }
      if (notPrime == 1){
        cout << "The number is not prime." << endl;
        } else {
        cout << "The number is prime." << endl;
    }
    }

        cout << "Please enter another positive number: ";
        cin >> myNumber;
        while (myNumber < 0){
        cout << "You did not enter a positive number\nPlease enter a positive number: ";
        cin >> myNumber;
    }
    }

    cout << "You entered 0\nThe program is terminated!";

    return 0;
}