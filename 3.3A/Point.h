
#pragma once
#include <sstream>
#include <string>
#include <iostream>
using namespace std;
class Point
{
protected:
	double x;
	double y;
public:
	Point();
	Point(double a, double b);
	Point(const Point& A);
	void SetX(int a) { x = a; };
	void SetY(int a) { y = a; };
	double GetX() { return x; };
	double GetY() { return y; };
	operator string() const;
	friend ostream& operator << (ostream& out, const Point& A);
	friend istream& operator >> (istream& in, Point& A);
};