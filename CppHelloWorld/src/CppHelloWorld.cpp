//============================================================================
// Name        : CppHelloWorld.cpp
// Author      : Denny
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!
	char echoStr[100];
	//cin >> echoStr;
	cin.getline(echoStr, 100);
	cout << echoStr << endl;
	string str;
	getline(cin, str);
	cout << "getline for string" << str << endl;
	return 0;
}
