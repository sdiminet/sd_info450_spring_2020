#include <iostream>
#include <stdio.h>
#include <string>
#include <vector>
using namespace std;

string reverse(string *s1);

int main ()
{
    string user_input;
    
    while (true)
    {
        cout << "Please enter a string: ";
        getline (cin,user_input);
        if (user_input =="\0")
        {
            break;
        }
        cout << "Reversed string: " << reverse(&user_input) << endl;
    }

    cout << "The Program is Terminated!" << endl;

    return 0;
}

 string reverse(string *s1)
{
    char temp;
    string myString = *s1;
    int x=0;
    int j = myString.length()-1;

    while (x<j)
    {
        temp = myString[x];
        myString[x]=myString[j];
        myString[j]= temp; 

        x++;
        j--;
    }
    return myString;
}