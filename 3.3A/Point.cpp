#include "Point.h"
Point::Point()
{
	x = 0;
	y = 0;
}
Point::Point(double a, double b)
{
	x = a;
	y = b;
}
Point::Point(const Point& A)
{
	x = A.x;
	y = A.y;
}
ostream& operator << (ostream& out, const Point& A)
{
	return out << "x= " << A.x << "; y= " << A.y << endl;
}
istream& operator >>(istream& in, Point& A)
{
	cout << "Enter x: "; in >> A.x;
	cout << "Enter y: "; in >> A.y;
	cout << endl;
	return in;
}
Point::operator string() const
{
	stringstream ss;
	ss << *this;
	return ss.str();
}