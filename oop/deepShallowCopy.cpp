#include <iostream>
using namespace std;

class Test{
    private:
    int i;
    int *p;
    
    public:
    Test(int i, int *p):i(i),p(p){}

    //  shallow copy
    Test(Test &t){
        i=t.i;
        p=t.p;
    }

    //  deep copy
    Test(Test &t){
        i=t.i;
        p=new int(*t.p);
    }

    void setVal(int x, int y)
    { 	
        i = x; 	
        *p = y;     
    }
    void show() {
        cout<<"i = "<<i<<endl;
        cout<<"p = "<<*p<<endl;
    }


}