#include "opPoint.h"

opPoint::opPoint()
{
	x = 0;
	y = 0;
}

opPoint::opPoint(double a, double b)
{
	x = a;
	y = b;
}

opPoint::opPoint(const opPoint& A)
{
	x = A.x;
	y = A.y;
}

void opPoint::toPolar() const
{
	const double PI = 3.141592653589783;
	double angle = (atan(y * 1.0 / x) * 180) / PI;
	cout << "Polar coordinates: " << angle << " angles" << endl;
	Distance();
}

bool opPoint::isEqual(const opPoint& A) const
{
	if (x == A.x && y == A.y)
		return true;
	else
		return false;
}
