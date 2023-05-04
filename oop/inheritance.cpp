#include <iostream>
using namespace std;


//Base Class
class GeometricObject
{
public:
//function declaration

    GeometricObject();
    GeometricObject(string color, bool filled);
    string getColor();
    void setColor(string color);
    bool isFilled();
    void setFilled(bool filled);
    string toString();

private:
    string color;
    bool filled;
};

//function definition

GeometricObject::GeometricObject()
{   color = "white";  filled = false;   }

GeometricObject::GeometricObject(string color, bool filled)
{   this->color = color;  this->filled = filled;   }

string GeometricObject::getColor()
{     return color;    }

void GeometricObject::setColor(string color)
{   this->color = color;   }
bool GeometricObject::isFilled()
{    return filled;    }

void GeometricObject::setFilled(bool filled)
{    this->filled = filled;    }

string GeometricObject::toString()
{     return "Geometric object color " + color +
    " filled " + ((filled) ? "true" : "false");
}


//Derived Class 1
class Circle: public GeometricObject
{
public:
//function declaration
    Circle();
    Circle(double);
    Circle(double radius, string color, bool filled);
    double getRadius();
    void setRadius(double);
    double getArea();
    double getPerimeter();
    double getDiameter();

private:
    double radius;
};

//function definition
Circle::Circle() {   radius = 1;   }

Circle::Circle(double radius)
{   this->radius = radius;  }

double Circle::getRadius()
{    return radius;    }

void Circle::setRadius(double radius)
{    this->radius = (radius >= 0) ? radius : 0;    }

double Circle::getArea()
{    return radius * radius * 3.14159;  }

double Circle::getPerimeter()
{  return 2 * radius * 3.14159;    }

double Circle::getDiameter()
{  return 2 * radius;   }







