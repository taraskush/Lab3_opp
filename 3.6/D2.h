#include <iostream>
#include "B1.h"

using namespace std;

class D2: private B1
{
    int d2;

public:
    D2(int x, int y) : B1(y)
    {
        d2 = x;
    }

    void show_D2()
    {
        cout << "class D2:" << endl;
        show_B1();
        cout << "show_D2()" << endl
             << "D2::d2 = " << d2 << endl
             << endl;
    }
};
