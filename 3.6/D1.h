#include <iostream>
#include "B1.h"

using namespace std;

class D1: public B1
{
    int d1;

public:
    D1(int x, int y) : B1(y)
    {
        d1 = x;
    }

    void show_D1()
    {
        cout << "class D1:" << endl;
        show_B1();
        cout << "show_D1()" << endl
             << "D1::d1 = " << d1 << endl
             << endl;
    }
};
