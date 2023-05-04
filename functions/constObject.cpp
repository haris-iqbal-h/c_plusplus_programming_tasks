#include <iostream>
using namespace std;

class Distance
{
	private:
		int feet; int inches;
    public:
	Distance():feet(0)
	{    }
	Distance(int ft): feet(ft)
	{     }
    int getDistance{tance()
	{ 
            cout<<“Enter Distance”;cin>>feet;
	}
	void showDistance() const
	{   
        cout<<“Feet = “<<feet;
        cout<<“Inches=“<<inches;
	}		
};

int main(){
    const Distance dist;
    cout<<dist.getDistance()<<endl; //error getDistance is not const function

    // you can use only const member functions with it
    dist.showDistance();
    
}
