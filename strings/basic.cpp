#include <iostream>
using namespace std;

int main()
{
    char str[100];      //characater array
    string str1;`       //string object

    //read single word only
    cout << "Enter a string: ";
    cin >> str;
    cout << "You entered: " << str << endl;

    //read line of text
    cout << "\nEnter Line of string: ";
    cin.get(str,100);
    cout << "You entered: "<<str<<endl;

    //readline of text in string object
    cout << "\nEnter Line of string: ";
    getline(cin,str);
    cout << "You entered: "<<str1<<endl;

    return 0;
}