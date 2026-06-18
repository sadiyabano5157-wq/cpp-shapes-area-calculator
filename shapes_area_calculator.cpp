#include<iostream>

using namespace std;

class Rectangle
{
public:
    float length;
    float width;
};

class Circle
{
public:
    float radius;
};

int main()
{
    Rectangle r1;
    r1.length = 10;
    r1.width = 5;

    Circle c1;
    c1.radius = 7;

    float rectangleArea = r1.length * r1.width;
    float circleArea = 3.14 * c1.radius * c1.radius;

    cout << "Length of Rectangle : " << r1.length << endl;
    cout << "Width of Rectangle : " << r1.width << endl;
    cout << "Area of Rectangle : " << rectangleArea << endl;

    cout << "Radius of Circle : " << c1.radius << endl;
    cout << "Area of Circle : " << circleArea << endl;

    return 0;
}
