#pragma once
class Pair
{
protected:
	double x, y;
public:
	Pair();
	Pair(const double a, const double b);
	Pair(const Pair&);
	bool operator ==(const Pair&);
	bool operator !=(const Pair&);
	bool operator >=(const Pair&);
	bool operator <=(const Pair&);
};