#include "incDecPoint.h"

incDecPoint::incDecPoint()
{
	x = 0;
	y = 0;
}

incDecPoint::incDecPoint(double a, double b)
{
	x = a;
	y = b;
}

incDecPoint::incDecPoint(const incDecPoint& A)
{
	x = A.x;
	y = A.y;
}

incDecPoint& incDecPoint::operator --()
{
	--x;
	return *this;
}

incDecPoint& incDecPoint::operator ++()
{
	++x;
	return *this;
}

incDecPoint incDecPoint::operator --(int)
{
	incDecPoint tmp(*this);
	--y;
	return tmp;
}

incDecPoint incDecPoint::operator ++(int)
{
	incDecPoint tmp(*this);
	++x;
	return tmp;
}
