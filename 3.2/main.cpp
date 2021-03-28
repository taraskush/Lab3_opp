#include "ColoredPoint.h"

int main()
{
	Point A(2, 5, RED);
	ColoredPoint A1(3, 4, RED);
	cout << A;
	A.Draw();
	Point B(A1);
	A1.Draw();
}