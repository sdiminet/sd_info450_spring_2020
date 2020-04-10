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
            int max_number = 9999;
            int min_number = -9999;
            int myNumbers = (rand()%(max_number + 1 - min_number)) + (-9999);
            out << myNumbers << endl;
        }
    }
    out.close();
    return 0;
}