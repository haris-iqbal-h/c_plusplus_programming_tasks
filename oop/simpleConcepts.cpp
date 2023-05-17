#include <iostream>
using namespace std;

class Circle{

    private:
    double radius;
    public:

    double getRadius();

    Circle(){
        radius = 5.0;
    }

    Circle(double radius){
        this->radius = radius;
    }
    double getArea(){
        return 3.14*radius*radius;
    }
    void show() const {
        cout << "Radius: " << this->radius << endl;
    }

    Circle(const Circle &c){
        this->radius = c.radius;
    }
}

double Circle::getRadius(){
    return radius;
}

int main(){
    Circle c;
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