#include "Pair.h"
Pair::Pair()
{
	x = 0;
	y = 0;
}

Pair::Pair(const double a, const double b)
{
	x = a;
	y = b;
}

Pair::Pair(const Pair& A)
{
	x = A.x;
	y = A.y;
}

bool Pair::operator ==(const Pair& A)
{
	if (x == A.x && y == A.y)
		return true;
	else
		return false;
}

bool Pair::operator !=(const Pair& A)
{
	if (x != A.x || y != A.y)
		return true;
	else
		return false;
}

bool Pair::operator >=(const Pair& A)
{
	if (x * x + y * y >= A.x * A.x + A.y * A.y)
		return true;
	else
		return false;
}

bool Pair::operator <=(const Pair& A)
{
	if (x * x + y * y <= A.x * A.x + A.y * A.y)
		return true;
	else
		return false;
}