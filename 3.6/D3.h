#include <iostream>
#include "B2.h"
#include "D1.h"
#include "D2.h"

using namespace std;

class D3: public D1, public D2, public B2
{
    int d3;

public:
    D3(int x, int y, int z, int i, int j, int o) : D1(y, z), D2(i, j), B2(o)
    {
        d3 = x;
    }

    void show_D3()
    {
        cout << "class D3:" << endl;
        show_D1();
        show_D2();
        show_B2();
        cout << "show_D3()" << endl
             << "D3::d3 = " << d3 << endl
             << endl;
    }
};
