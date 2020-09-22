// LAB01.cpp: определяет точку входа для консольного приложения.
//

#define _USE_MATH_DEFINES

#include <iostream>
#include <string>
#include "stdafx.h"
#include <cmath>
#include <math.h>

using namespace std;

void first(){
	cout << 3 <<" " << 13 << " " << 49;
}

void second(){
	char ch;
	cin >> ch;
	cout << 3 << ch << 13 << ch << 49;
}

void third(){
	char ch;
	cin >> ch;
	int a, b, c;
	cin >> a >> b >> c;
	cout << a << ch << b << ch << c;
}

int func_x(int a){
	return 12 * a * a + 7 * a - 12;
}

int func_y(int x){
	return 3 * x * x * x + 4 * x * x - 11 * x + 1; 
}

double density(double m, double v){
	return m / v;
}

double linear(double a, double b){
	return (-1) * b / a;
}

double distance(double x1, double x2, double y1, double y2){
	return sqrt(pow((x1 - x2), 2) + pow((y1 - y2), 2));
}

double geometry(double a, double b, double h){
	return a + b + 2 * sqrt(pow(abs(b - a), 2) +  h*h);
}

double ring(double r_1, double r_2){
	return abs(M_PI * r_1 * r_1 - M_PI * r_2 * r_2);
}

double cube_volume(double a){
	return (a * a * a);
}

double side(double a){
	return (a * a);
}

double square_perim(double a){
	return (a * 4);
}

double rad_to_d(double r){
	return r * 2;
}

void hello(string s){
	cout << "Hello, " << s << "! My name is C++.";
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
	system("pause");
	return 0;
}

