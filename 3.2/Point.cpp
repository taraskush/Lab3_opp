#include "Point.h"

Point::Point()
{
	x = 0;
	y = 0;
	visibility = false;
}

Point::Point(const double a, const double b, bool c=false)
{
	x = a;
	y = b;
	visibility = c;
}

Point::Point(const Point& A)
{
	x = A.x;
	y = A.y;
	visibility = A.visibility;
}

Point::~Point(void)
{};

ostream& operator <<(ostream& out, const Point& A)
{
	out << "x = " << A.x << "; y = " << A.y << endl;
	return out;
}

void Point::Draw()
{
	visibility = true;
	cout << "The point is drown" << endl;
	cout << "x = " << x << "; y = " << y << endl;
}

istream& operator >>(istream& in, Point& A)
{
	cout << "x = "; in >> A.x;
	cout << "y = "; in >> A.y;
	int a;
	do {
		cout << "make visible? (1-yes; 0-no)"; in >> a;
	} while (a != 1 && a != 0);
	A.visibility = a;
	return in;
}

Point::operator string() const
{
	stringstream ss;
	ss << *this;
	return ss.str();
}