#include "Time.h"

int main()
{
	Triad a;
	Triad b; cin >> b;
	Triad c(3, 6, 10);
	a = c;
	cout << "Triad a: " << endl; cout << a;
	cout << "Triad b: " << endl; cout << b;
	cout << "Triad c: " << endl; cout << c;
	a.incHours();
	++b;
	c--;
	cout << "Triad a: " << endl; cout << a;
	cout << "Triad b: " << endl; cout << b;
	cout << "Triad c: " << endl; cout << c;
	Time a1;
	Time b1; cin >> b1;
	Time c1(c);
	cout << "Time a1: " << endl; cout << a1;
	cout << "Time b1: " << endl; cout << b1;
	cout << "Time c1: " << endl; cout << c1;
	a1.incHours();
	++b1;
	c1--;
	cout << "Time a1: " << endl; cout << a1;
	cout << "Time b1: " << endl; cout << b1;
	cout << "Time c1: " << endl; cout << c1;
	c1.addSeconds();
	cout << (string)c1;

}