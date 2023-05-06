#include <iostream>
using namespace std;

// polimorphism
class Base {
    public:
    void print() {
        // code
    }
};

class Derived : public Base {
    public:
    void print() {
        // code
    }
};

// second example problem solution
class Base1 {
    public:
    virtual void print() {
        // code
    }
};
class Derived1 : public Base1 {
    public:
    void print() {
        cout << "Derived Function" << endl;
    }
};

int main() {
    Derived derived;
    Base* base = &derived;

    // calls function of Base class
    base->print();


    Derived1 derived1;

    // pointer of Base type that points to derived1
    Base1* base1 = &derived1;

    // calls member function of Derived class
    base1->print();

    return 0;
}