#include <iostream>
using namespace std;

class Circle{

    // data encapsulation (hiding data from outside direct modification of attributes)

    private:
    double radius;
    public:

    double getRadius();

    //default constuctor
    // Circle(){}

    //  constructor overloading     (mutliple constructor with different signature)

    //constructor with inital values
    Circle(){
        radius = 5.0;
    }

    //can also write constructor
    // Circle():radius(1.0){}    

    //parameterized constructor
    Circle(double radius){
        //if parameter and data members are same we need to use "this" keyword with pointer "->"
        this->radius = radius;
    }
    double getArea(){
        return 3.14*radius*radius;
    }
    void show() const {
        cout << "Radius: " << this->radius << endl;
        // radius=3.5;      Error
    }

    //default coppy constructor
    Circle(const Circle &c){
        this->radius = c.radius;
    }
}

//outside member function
double Circle::getRadius(){
    return radius;
}

int main(){
    Circle c;
    // c.radius=10;
    cout<<"Area :"<<c.getArea()

    // getter -----  accesser
    // setter -----  mutator

    //default copy constructor
    Circle c1(c);   //  or
    // Circle c1 = c;  can be written as

    //memberwise copy       we dont use copy constructor
    Circle c2;
    c2=c1;

    //access the data member with Pointers
    Circle c3;
    Circle *pCircle=&c3;
    cout<<"The Radius "<<(*pCircle).radius<<endl;
    cout<<"The Area "<<(*pCircle).getArea()<<endl;
    
}