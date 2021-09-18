#pragma once
#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

class Geometry {
public:
// virtual khong chi toi ham cha ma khi cout ra no se chi toi ham con
// dang tinh truu tuong cua class
	virtual double perimeter() = 0;
	virtual double area() = 0;
	virtual void display()
	{
		cout << "Perimeter: " << perimeter() << endl;
		cout << "Area: " << area() << endl;
	}
};
