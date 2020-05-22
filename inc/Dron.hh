#ifndef DRON_HH
#define DRON_HH
#include "Figura.hh"

#define PI 3.14159265

//stworzenie wiercholkow drona
//
class Dron
{
Figura dron[5];
Figura dron2[5];
Wektor3D MacierzObrotu[3];

Wektor3D WektorPrzesuniecia;
Wektor3D WektorPrzemieszczenia={0,0,0};

public:
Dron operator=(Dron dron);
Figura operator[](int index)
{
  return dron[index];
}

Figura getFigura(int index)const
{
  return dron[index];
}
Wektor3D getMacierzObrotu(int index)const
{
  return MacierzObrotu[index];
}
Wektor3D getWektorPrzesuniecia() const
{
  return WektorPrzesuniecia;
}
Wektor3D getWektorPrzemieszczenia() const
{
  return WektorPrzemieszczenia;
}

void ustawDrona();
void setRuchDronax(int index,int index2,double wartosc)
{
  dron[index].getWierzcholki(index2).x=wartosc;
}
void setRuchDronay(int index,int index2,double wartosc)
{
  dron[index].getWierzcholki(index2).y=wartosc;
}
void setRuchDronaz(int index,int index2,double wartosc)
{
  dron[index].getWierzcholki(index2).z=wartosc;
}
void setWektorPrzemieszczenia();
void setDron0();
void setDron();
void setMacierzObrotu(double alfa);
void setWektorPrzesuniecia(double a,double b,double c);
void AnimacjaDrona();

};
//funkcje
std::ostream& operator<<(std::ostream &Str,Dron Dron);
double operator*(Wektor3D Wek1,Wektor3D Wek2);

#endif