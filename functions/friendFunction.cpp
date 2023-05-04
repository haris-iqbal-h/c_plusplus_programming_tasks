#include <iostream>
using namespace std;

//for the instance of a friend function of On Class to another we have to delcare
class Beta;
clasc Alpha{
    private:
        int data1;
    public:
    Alpha():data1(10){}
    int friend addData(Alpha,Beta);
}
class Beta{
    private:
        int data2;
    public:
    Beta():data2(5){}
    int friend addData(Alpha,Beta);
}
int addData(Alpha a,Beta b){
    return a.data1 + b.data2;
}

int main(){
    Alpha a;
    Beta b;
    cout<<"Add Data "<<addData(a,b);
}