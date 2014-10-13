#include <iostream>
#include "class/complexe.h"
#include <list>

using namespace std;

int main()
{
    cout << endl << endl << "***********************************" << endl << endl;

    Complexe z1(1.5, 1.0);
    Complexe z2(-1.0, 4.0);
    Complexe z3;
    Complexe z4(1.0,-2.0);

    cout << z1 << " et " << z2 << endl << endl;
    cout << "Addition : " << z1+z2 << endl;
    cout << "Multiplication : " << (z1+z2)*z2*2.0<< endl;
    cout << "Conjugue : " << z1.conj() << endl;
    cout << "Addition + conjugue : " << (z1+z2).conj() << endl;
    cout << "Norme de " << z4 << ": " << z4.norme();

    cout << endl << endl << "***********************************" << endl << endl;

    list<Complexe> maListe;
    maListe.push_back(Complexe(1.0, 1.0));
    maListe.push_back(Complexe(1.0, -2.0));

    list<Complexe>::const_iterator lit(maListe.begin()), endIt(maListe.end());

    for(;lit != endIt; lit++)
    {
        cout << *lit << endl;
    }

    return 0;
}

