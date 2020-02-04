#include <iostream>

using namespace std;
double calculateCircumference(double radius);

const float PI = 3.14159265358979323846;

int main()
{
    double radius = 0;
    double circumference = 0;

    cout << "Please enter the radius of a cirle: " << endl;
    cin >> radius;

    circumference = calculateCircumference(radius);

    cout << "The circumference of the circle is: " << circumference << endl;

    return 0;
}

double calculateCircumference(double radius)
{
    radius = 2*PI*radius;
    return radius;
}
