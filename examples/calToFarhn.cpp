#include <iostream>
using namespace std;

int main(){
    float c;
    cout << "Enter temperature in Celsius\n"; 
    cin >> c;
    float f = (9 * c) / 5; 
    f += 32; 
    cout << "Temperature in Fahrenheit: " << f;
    return 0;
}