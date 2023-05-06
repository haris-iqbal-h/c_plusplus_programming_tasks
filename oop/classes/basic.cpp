#include <iostream>
using namespace std;

class Room {
    private:
        double length;
        double breadth;
        double height;   
    public:
        void initData(double len, double brth, double hgt) {
            length = len;
            breadth = brth;
            height = hgt;
        }
        double calculateArea(){   
            return length * breadth;
        }

        double calculateVolume(){   
            return length * breadth * height;
        }

};

int main(){
    // create objects 
    Room room1;

    //Error data members are private
    // room1.length = 42.5;
    // room1.breadth = 30.8;
    // room1.height = 19.2;

    room1.initData(42.5, 30.8, 19.2);       //setter function
    
    cout << "Area of Room =  " << room1.calculateArea() << endl;
    cout << "Volume of Room =  " << room1.calculateVolume() << endl;
}