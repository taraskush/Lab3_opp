#include "incDecPoint.h"

int main()
{
	Point A;
	cin >> A;
	Point B(2, 3);
	Point C(B);
	cout << A;
	cout << B;
	cout << C;
	cout << "--------------------" << endl;
	opPoint A1;
	cin >> A1;
	opPoint B1(3, 4);
	cout << A1;
	cout << (string)B1;
	cout << "--------------------" << endl;
	incDecPoint A2;
	cin >> A2;
	incDecPoint B2(5, 5);
	cout << A2;
	cout << B2;
	++B2;
	cout << B2;
	if (B1.isEqual(B2))
		cout << "true" << endl;
	else
		cout << "false" << endl;
	cout << B2.GetX();
}