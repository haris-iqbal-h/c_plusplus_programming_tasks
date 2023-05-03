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
    //pass by value

}
int main(){
    Circle c;

    //pass by value
    printCircle(c)
}
void printCircle(Circle c){
    cout<<"The Area is "<<c.getArea()<<endl;
}