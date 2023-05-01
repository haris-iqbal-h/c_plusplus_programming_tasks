#include <iostream>
using namespace std;

float calculate_price(int,int,float,float);

int main(){
    cout << "Total price with default vat and discount = " << calculate_price(100, 5) << "\n";
    cout << "Total price with given vat and default discount = " << calculate_price(100, 5, 0.06) << "\n";
    cout << "Total price with given vat and discount = " << calculate_price(100, 5, 0.06, 0.10) << "\n";
    return 0;
}

float calculate_price(int price, int quantity, float vat=0.05, float discount=0.0){
    float total, vatAmount, discountAmount;
    vatAmount = (price * quantity) * vat;
    discountAmount = (price + vatAmount) * discount;
    total = price * quantity + vatAmount - discountAmount ;
    return total;
}