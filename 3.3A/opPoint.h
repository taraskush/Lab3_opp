#pragma once
#include "Point.h"
#include <cmath>

class opPoint: public Point
{
public:
	opPoint();
	opPoint(double a, double b);
	opPoint(const opPoint& A);
	void SetX(double value) { x = value; };
	void SetY(double value) { y = value; };
	double GetX() const { return x; };
	double GetY() const { return y; };
	void toPolar() const;
	double Distance() const { double a = sqrt(x * x + y * y);  cout << "Polar radius: " << a << endl; return a;};
	bool isEqual(const opPoint& A) const;
};
