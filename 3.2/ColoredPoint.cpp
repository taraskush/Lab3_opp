#include "ColoredPoint.h"

ColoredPoint::ColoredPoint()
{
	x = 0;
	y = 0;
	c = NONE;
	visibility = false;
}

ColoredPoint::ColoredPoint(const double a, const double b, color s, bool x)
{
	x = a;
	y = b;
	c = s;
	visibility = x;
}

ColoredPoint::ColoredPoint(const ColoredPoint& A)
{
	x = A.x;
	y = A.y;
	c = A.c;
	visibility = A.visibility;
}

ColoredPoint::~ColoredPoint(void)
{};

string toString(const ColoredPoint& A)
{
	switch (A.c)
	{
	case NONE:   return "NONE"; case YELLOW: return "YELLOW";
	case RED:   return "RED";   case GREEN: return "GREEN";
	case BLUE: return "BLUE";   case BLACK: return "BLACK";
	case GREY: return "GREY";   case ORANGE: return "ORANGE";
	case PURPLE: return "PURPLE";
	default:      return "NONE";
	}
}

ostream& operator <<(ostream& out, const ColoredPoint& A)
{
	out << "x = " << A.x << "; y = " << A.y << "; color = " << toString(A);
	if (A.visibility == 1)
		out << "is visinle" << endl;
	else
		out << "is not visible" << endl;
	return out;
}

void ColoredPoint::Draw()
{
	visibility = true;
	cout << "The point is drown" << endl;
	cout << "x = " << x << "; y = " << y << "; color = " << toString(*this) << endl;
}

ColoredPoint::operator string() const
{
	stringstream ss;
	ss << *this;
	return ss.str();
}

color ColoredPoint::GetColor() const
{
	return c;
}

istream& operator >>(istream& in, ColoredPoint& A)
{
	cout << "x = "; in >> A.x;
	cout << "y = "; in >> A.y;
	int d;
	do {
		cout << "color(NONE = 0, RED=1, BLUE=2, YELLOW=3, GREEN=4,";
        cout << "BLACK=5, WHITE=6, GREY=7, ORANGE=8, PURPLE=9)= "; in >> d;
	} while (A.c < 0 || A.c>9);
	A.c = (color)d;
	return in;
}

void ColoredPoint::SetColor(color s)
{
	c = s;
}