#pragma once
#include <sstream>
#include <string>
#include <iostream>

using namespace std;

class Point
{
protected:
	double x, y;
	bool visibility;
public:
	Point();
	Point(const double a, const double b, bool c);
	Point(const Point&);
	~Point(void);
	void SetX(double a) { x = a; };
	void SetY(double a) { x = a; };
	double GetX() const { return x; };
	double GetY() const { return y; };
	friend ostream& operator <<(ostream& out, const Point&);
	friend istream& operator >>(istream& out, Point&);
	void Draw();
	operator string() const;
};