#ifndef COMPLEXE_H
#define COMPLEXE_H
#include <iostream>
#include <sstream>

class Complexe
{
public:
    double C;
    double R;

public:
    Complexe(double R, double C);
    Complexe();
    Complexe operator+(Complexe z);
    Complexe operator*(Complexe z);
    Complexe operator*(double k);

    friend std::ostream& operator<<(std::ostream&, const Complexe& z);

};



#endif // COMPLEXE_H
