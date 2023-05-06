#include <iostream>
using namespace std;

void combineString(string msg) {
    cout<<"string before changing with in function :"<<msg<<endl;
    msg = msg + " added text.";
    cout<<"string after changing with in function changing :"<<msg<<endl;
}

int main() {
    string strVar;
    strVar="hello"
    cout << "Before calling the function:\n" << strVar << "\n";
    combineString(strVar);
    cout << "After calling the function:\n" << strVar << "\n";

    return 0;
}