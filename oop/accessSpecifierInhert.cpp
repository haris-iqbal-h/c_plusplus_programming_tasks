#include <iostream>
using namespace std;

class A {
    public:              
        int     x;
    protected:       
        int     y;
    private:            
        int     z;
};
class B : public A{
    void display(){     
        cout<<"x="<<x<<endl;              
        cout<<"y="<<y<<endl;
        cout<<"z="<<z<<endl;         }
};
class C : protected A{
    void display(){	
        cout<<"x="<<x<<endl;	
        cout<<"y="<<y<<endl;
        cout<<"z="<<z<<endl;     }
};
class D : private A{
    void display(){	
        cout<<"x="<<x<<endl; 	
        cout<<"y="<<y<<endl;
        cout<<"z="<<z<<endl;     }
};
class E : public D{
	void display(){
        cout<<"x="<<x<<endl;   
        cout<<"y="<<y<<endl;  	
        cout<<"z="<<z<<endl;
	}
};
