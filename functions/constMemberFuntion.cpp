#include <iostream>
using namespace std;

class Test
{
    private:
        int   alpha;
    public:
      void   nonFunc() //non-const member function
     { alpha = 99; } //OK
     void   conFunc() const  //const member function
     { alpha = 99; }           //ERROR: can’t modify a member
};
