#include "complexe.h"
#include <sstream>
#include <iostream>

using namespace std;

Complexe::Complexe(double R, double C)
{
    this->C = C;
    this->R = R;
}

Complexe::Complexe()
{
    this->C = 0;
    this->R = 0;
}

Complexe Complexe::operator+(Complexe z)
{
    return Complexe(this->R+z.R, this->C+z.C);
}

Complexe Complexe::operator*(Complexe z)
{
    return Complexe(this->R*z.R-this->C*z.C, this->R*z.C + z.R*this->C);
}

Complexe Complexe::operator*(double k)
{
    return Complexe(this->R*k, this->C*k);
}

ostream& operator<<(ostream& out, const Complexe& z)
{
    return out << z.R << "+" << z.C << "i";
}


