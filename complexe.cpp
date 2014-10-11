#include "complexe.h"
#include <sstream>
#include <iostream>

using namespace std;

Complexe::Complexe(double R, double I)
{
    this->I = I;
    this->R = R;
}

Complexe::Complexe()
{
    this->I = 0;
    this->R = 0;
}

Complexe Complexe::operator+(Complexe z)
{
    return Complexe(this->R+z.R, this->I+z.I);
}

Complexe Complexe::operator*(Complexe z)
{
    return Complexe(this->R*z.R-this->I*z.I, this->R*z.I + z.R*this->I);
}

Complexe Complexe::operator*(double k)
{
    return Complexe(this->R*k, this->I*k);
}

ostream& operator<<(ostream& out, const Complexe& z)
{
    if(z.I < 0)
    {
        return out << z.R << z.I << "i";
    }
    else
    {
        return out << z.R << "+" << z.I << "i";
    }
}

Complexe Complexe::conj()
{
    return Complexe(this->R,-this->I);
}

