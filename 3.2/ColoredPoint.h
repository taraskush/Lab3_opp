#pragma once
#include "Point.h"
enum color {
	NONE = 0, RED, BLUE, YELLOW, GREEN, BLACK,
	WHITE, GREY, ORANGE, PURPLE
};

class ColoredPoint: public Point
{
private:
	color c;
public:
	void SetColor(color);
	color GetColor() const;
	friend string toString(const ColoredPoint&);
	ColoredPoint();
	ColoredPoint(const double a, const double b, color s, bool x = false);
	ColoredPoint(const ColoredPoint&);
	~ColoredPoint(void);
	friend ostream& operator <<(ostream& out, const ColoredPoint&);
	friend istream& operator >>(istream& in, ColoredPoint&);
	void Draw();
	operator string() const;
};
