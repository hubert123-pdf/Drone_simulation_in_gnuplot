#ifndef DRON_HH
#define DRON_HH
#include "Figura.hh"

#define PI 3.14159265

//stworzenie wiercholkow drona
//
class Dron
{
Figura dron[5];
Wektor3D MacierzObrotu[3];
public:
Figura getFigura(int index)const
{
  return dron[index];
}
Wektor3D getMacierzObrotu(int index)const
{
  return MacierzObrotu[index];
}

void setObrotDronax(int index,int index2,double wartosc)
{
  dron[index].getWierzcholki(index2).x=wartosc;
}
void setObrotDronay(int index,int index2,const double wartosc)
{
  dron[index].getWierzcholki(index2).y=wartosc;
}
void setObrotDronaz(int index,int index2,double wartosc)
{
  dron[index].getWierzcholki(index2).z=wartosc;
}

void setDron();
void setMacierzObrotu(double alfa);
};
//funkcje
std::ostream& operator<<(std::ostream &Str,Dron Dron);
double operator*(Wektor3D Wek1,Wektor3D Wek2);

#endif