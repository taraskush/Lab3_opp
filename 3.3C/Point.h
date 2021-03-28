#pragma once
#include <sstream>
#include <string>
#include <iostream>
#include "Object.h"
#include <cmath>

using namespace std;

class Point: public Object
{
private:
	double x;
	double y;
public:
	Point();
	Point(double a, double b);
	Point(const Point& A);
	friend ostream& operator << (ostream& out, const Point& A);
	friend istream& operator >> (istream& in, Point& A);
	operator string() const;
	void SetX(double value) { x = value; };
	void SetY(double value) { y = value; };
	double GetX() const { return x; };
	double GetY() const { return y; };
	void toPolar() const;
	double Distance() const { double a = sqrt(x * x + y * y); cout << "Polar radius: " << a << endl; return a; };
	bool isEqual(const Point& A) const;
	Point& operator --();
	Point& operator ++();
	Point operator --(int);
	Point operator ++(int);
};