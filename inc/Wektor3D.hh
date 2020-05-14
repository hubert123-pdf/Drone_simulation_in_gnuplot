#ifndef WEKTOR3D_HH
#define WEKTOR3D_HH
#include <vector>

class Wektor3D
{
public:
    double x;
    double y;
    double z;

double getx()
{return x;}

void setx(double wartosc)
{x=wartosc;}

double gety()
{return y;}

void sety(double wartosc)
{y=wartosc;}

double getz()
{return z;}

void setz(double wartosc)
{z=wartosc;}
};
#endif