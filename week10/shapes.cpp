#include <iostream>
#include <cmath>

using namespace std;

const int PI = 3; // for simplicity, we'll pretend PI is 3

class shape {
public:
    virtual int get_perimeter_length() { return -1; }
    virtual int get_area() { return -1; }
};

class circle : public shape {
private:
    int radius;
public:
    circle(int radius) : radius(radius) {}
    int get_perimeter_length() { return 2 * PI * radius; }
    int get_area() { return PI * pow(radius,2); }
};

class rectangle : public shape {
private:
    int height;
    int width;
public:
    rectangle(int height, int width) : height(height), width(width) {}
    int get_perimeter_length() { return 2*(height+width); }
    int get_area() { return height*width; }
};

class square : public shape {
private:
    int side;
public:
    square(int side) : side(side) {}
    int get_perimeter_length() { return 4 * side; }
    int get_area() { return pow(side,2); }
};

int main() {
    shape *s1;
    circle c(3);
    s1 = &c;
    cout << "Perimeter: " << s1->get_perimeter_length() << " : Area " << s1->get_area() << endl;
    square s(3);
    s1 = &s;
    cout << "Perimeter: " << s1->get_perimeter_length() << " : Area " << s1->get_area() << endl;
    rectangle r(4, 5);
    s1 = &r;
    cout << "Perimeter: " << s1->get_perimeter_length() << " : Area " << s1->get_area() << endl;
    return 0;
}