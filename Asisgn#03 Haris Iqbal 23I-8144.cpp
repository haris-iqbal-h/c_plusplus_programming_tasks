#include <iostream>
#include <string>
#include <cmath>
#include <ctime>
#include <stdio.h>
#include <fstream>
using namespace std;
class A
{
public:
    int x = 5;
    void fun()
    {
        cout << x << endl;
    }
};

class B : public A
{
public:
    int x = 10;
    void fun()
    {
        cout << x << endl;
    }
};

class Heater {
    int temperature;
    public:
        Heater(int temp=15) {
            temperature = temp;
        }
        void warmer(int temp) {
            temperature += temp;
        }
        void cooler(int temp){
            temperature -= temp;
        }
        int getTemperature(){
            return temperature;
        }
};

class Animal {
public:
    virtual void talk() = 0; 
};
class Dog:public Animal{
    void talk() {
        cout << "Dog" << endl;
    }
};
class Cat:public Animal{
    void talk() {
        cout << "Cat" << endl;
    }
};
class Interogator {
    public:
        void convinceToTalk(Animal* an) {
            an->talk();
        }
};

int main()
{
    // Question 01
    B b;
    cout<<b.A::x<<endl;
    b.A::fun();


    // Question 02 (a)
    Heater h;
    cout<<h.getTemperature()<<endl;
    h.warmer(5);
    cout<<h.getTemperature()<<endl;
    h.cooler(5);
    cout<<h.getTemperature()<<endl;

    // Question 02 (b)
    Interogator intero;
    Dog dog;
    Cat cat;

    intero.convinceToTalk(&dog);
    intero.convinceToTalk(&cat);
    
    

    return 0;
}
