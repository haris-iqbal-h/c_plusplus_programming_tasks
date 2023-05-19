#include <iostream>
#include <string>  //for using string data type
#include <cstdio>  //for using getline function to input string
using namespace std;

int main(){
	string s;
	cout << "Enter a string\n";
	getline(cin, s);  //taking input in the string
	cout << "Length of the given string=" << s.length();
}