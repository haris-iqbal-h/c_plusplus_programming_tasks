#include <iostream>
using namespace std;

class Circle{

    private:
    double radius;
    public:
    Circle(){
        radius=1.0;
    }
    double getArea(){
        return 3.14*radius*radius;
    }
}

int main(){
    Circle c;
    Circle *c1=&c;

    //access data members and member complete operator
    cout<<"The Radius is "<<(*c1).radius<<endl;
    cout<<"The Area is "<<(*c1).getArea()<<endl;

    //access data members and member shorthand operator
    cout<<"The Radius is "<<c1->radius<<endl;
    cout<<"The Area is "<<c1->getArea()<<endl;



}