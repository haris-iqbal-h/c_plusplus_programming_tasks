// class Base {
//   public:
//     int x;
//   protected:
//     int y;
//   private:
//     int z;
// };

// class PublicDerived: public Base {
//   // x is public
//   // y is protected
//   // z is not accessible from PublicDerived
// };

// class ProtectedDerived: protected Base {
//   // x is protected
//   // y is protected
//   // z is not accessible from ProtectedDerived
// };

// class PrivateDerived: private Base {
//   // x is private
//   // y is private
//   // z is not accessible from PrivateDerived
// };

// C++ program to demonstrate the working of protected inheritance

#include <iostream>
using namespace std;

class Base {
    private:
    int pvt = 1;

    protected:
    int prot = 2;

    public:
    int pub = 3;

    // function to access private member
    int getPVT() {
        return pvt;
    }
};

class ProtectedDerived : protected Base {
    public:
    // function to access protected member from Base
    int getProt() {
        return prot;
    }

    // function to access public member from Base
    int getPub() {
        return pub;
    }
};

int main() {
    ProtectedDerived object1;
    cout << "Private cannot be accessed." << endl;
    cout << "Protected = " << object1.getProt() << endl;
    cout << "Public = " << object1.getPub() << endl;
    return 0;
}