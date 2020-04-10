#include <iostream>
#include <fstream>
#include <cstdlib>

using namespace std;

int main()
{
    ofstream out("randoms.txt");
    if (!out) {
        cout << "Cannot open file." << endl;
        return 1;
    }
    else 
    {
        srand(time(0));

        for (int i=0; i < 1000; i++)
        {
            int myNumbers = -9999 + rand () % (9999 - (-9999) +1);
            out << myNumbers << endl;
        }
    }
    out.close();
    return 0;
}