#include "Point.h"

int main()
{
	Point a;
	cin >> a;
	Point b(3, 3);
	Point c(b);
	c--;
	++b;
	cout << a;
	cout << b;
	cout << c;
	if (a.isEqual(b))
		cout << "a==b" << endl;
	else
		cout << "a!=b" << endl;
	b.toPolar();
	cout << "Object count: " << Object::Count() << endl;
}