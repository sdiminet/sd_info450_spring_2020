#include <iostream>
#include<stdio.h>

using namespace std;

int main ()
{
    char names[10][100];
    int t = 0;
    int i = 0;

    for (t=0; t<10; t++)
    {
        cout << "Please enter student for index " << t << ": ";
        gets(names[t]);

        if (!names[t][0])
        {
            break;
        }
    }

    for (i=0; i<t; i++)
    {
        cout << "students [" << i << "] = " << names[i] << endl;
    }

    return 0;
}