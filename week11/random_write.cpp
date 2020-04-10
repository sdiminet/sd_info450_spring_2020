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
            int myNumbers = -10000 + rand () % (10000 - (-10000) +1);
            out << myNumbers << endl;
        }
    }
    out.close();
    return 0;
}