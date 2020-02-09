#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    double numbers [10];
    double mean = 0;
    double standard_mean = 0;
    double standard_deviation = 0;

    for (int i=0; i<10; i++)
    {
        cout << "Enter the number for index " << i << ": ";
        cin >> numbers[i];
    }

    for (int i=0; i<10; i++)
    {
        mean = mean + numbers[i];
    }

    mean = mean/10;

    for (int i=0; i<10; i++)
    {
        numbers[i] = (numbers[i] - mean);
        numbers[i]= pow(numbers[i],2);
    }

    for (int i=0; i<10; i++)
    {
        standard_mean = standard_mean + numbers[i];
    }

    standard_mean = standard_mean/10;
    standard_deviation = sqrt(standard_mean);

    cout << "Results: Mean: " << mean << ", Standard Deviation: " << standard_deviation << endl;


    return 0;
}