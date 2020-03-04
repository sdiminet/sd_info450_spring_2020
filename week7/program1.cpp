#include <iostream>
#include <string>
#include <vector>
using namespace std;

string reverse(string *s1);

int main ()
{
    string user_input;
    string result;

    cout << "Please enter a string: " << endl;
    getline (cin,user_input);
    result = reverse(&user_input);

    cout << "Reversed: " << result << endl;

    return 0;
}

 string reverse(string *s1)
{
    string temp;
    for (int x=0; x < s1->length() / 2; x++)
    {
        temp = s1[x];
        s1[x] = s1[s1->length()-x-1];
        s1[s1->length()-x-1]=temp;
    }

    return s1;
}