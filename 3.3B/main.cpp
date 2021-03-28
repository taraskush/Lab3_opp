#include "Point.h"
#include <iostream>

using namespace std;

int main()
{
	Pair A(2, 3);
	Point B;
	cin >> B;
	Point C(5, 5);
	cout << "B: " << B;
	if (A == Pair(2, 4))
		cout << "true" << endl;
	else
		cout << "false" << endl;

	cout << "C: " << C;
	C.toPolar();
	cout << C--;
	cout << C;
	Pair D(B);
	C.SetX(0);
	C.SetY(0);
	cout << C;
}