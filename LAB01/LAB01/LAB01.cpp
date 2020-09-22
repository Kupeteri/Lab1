// LAB01.cpp: определяет точку входа для консольного приложения.
//
#include <iostream>
#include <string>
#include "stdafx.h"

using namespace std;

void first(){
	cout << 3 <<" " << 13 << " " << 49;
}

void second(){
	char ch;
	cin >> ch;
	cout << 3 << ch << 13 << ch << 49;
}

void is_polindrom(){
	string s;
	cin >> s;
	if (s[0] == s[6] && s[1] == s[5] && s[2] == s[4]){
		cout << "This is polindrom!";
	} else {
		cout << "Sorry, this is not polindrom!";
	}
}

int _tmain(int argc, _TCHAR* argv[])
{
	char ch;
	string s;
	long a, b, c;
	is_polindrom();
	first();
	second();
	system("pause");
	return 0;
}

