#include <iostream>
#include "complexe.h"

using namespace std;

int main()
{
    cout << endl << endl << "***********************************" << endl << endl;

    Complexe z1(1.5, 1.0);
    Complexe z2(-1.0, 4.0);
    Complexe z3;

    cout << z1 << " et " << z2 << endl;
    cout << "Addition : " << z1+z2 << endl;
    cout << "Multiplication : " << z2*2.0 << endl;

    cout << endl << endl << "***********************************" << endl << endl;

    return 0;
}

