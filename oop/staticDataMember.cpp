#include <iostream>
using namespace std;

class Circle
{
private:
    double radius;
    static int numberOfObjects;
public:
    Circle();
    Circle(double);
    double getArea();
    double getRadius();
    void setRadius(double);
    static int getNumberOfObjects();
};

int Circle::numberOfObjects = 0;
Circle::Circle()
{
    radius = 1;
    numberOfObjects++;
}

Circle::Circle(double radius)
{
    this->radius = radius;
    numberOfObjects++;
}
double Circle::getArea()
{
  return radius * radius * 3.14159;
}
double Circle::getRadius()
{
    return radius;
}
void Circle::setRadius(double radius)
{
    this->radius = (radius >= 0) ? radius : 0;
}
int Circle::getNumberOfObjects()
{
    return numberOfObjects;
}

int main()
{
    //fetch static member function with Circle::getNumberOfOjects
    cout << "Number of circle objects created: "<< Circle::getNumberOfObjects() << endl;

    Circle circle1;
    cout << "The area of the circle of radius "<< circle1.getRadius() << " is " << circle1.getArea() << endl;
    cout << "Number of circle objects created: "<< Circle::getNumberOfObjects() << endl;

    Circle circle2(5.0);
    cout << "The area of the circle of radius "<< circle2.getRadius() << " is " << circle2.getArea() << endl;
    cout << "Number of circle objects created: "<< Circle::getNumberOfObjects() << endl;

    circle1.setRadius(3.3);
    cout << "The area of the circle of radius "<< circle1.getRadius() << " is " << circle1.getArea() << endl;

    cout << "circle1.getNumberOfObjects() returns "<< circle1.getNumberOfObjects() << endl;
    cout << "circle2.getNumberOfObjects() returns "<< circle2.getNumberOfObjects() << endl;

    return 0;
}


