#ifndef FIGURA_HH
#define FIGURA_HH
#include "Wektor3D.hh"
#include <iostream>
#include <math.h>
#include <memory>

class Figura
{
  /*
  * wierzholki jako szablon vector w celu uniknięcia 
  * problemów z figurami o różnej ilości wierzcholków
  */
 std::vector<Wektor3D> wierzcholki;

public:
Figura()=default;

/*inc/przeszkody.hh:33:12: error: cannot allocate an object of abstract type ‘Figura’
     return Pret2;
* operator umożliwiające łatwiejsze korzystanie z tablicy
*/
Wektor3D operator[](int index)
{
  return wierzcholki[index];
}

/*
* metoda zwracająca pewien element tablicy
*/
Wektor3D &getWierzcholki(int i)
{
    return wierzcholki[i];
}
/*
* metoda zwracająca szystkie punkty wiercholka
*/ 
std::vector<Wektor3D>& getWierzcholki()
{
  return wierzcholki;
}
/*
* metoda zwracająca rozmiar szablonu
*/
int getSize() const
{
  return wierzcholki.size();
}

};
/*
* operator wypisywania klasy Figura 
*/
std::ostream& operator<<(std::ostream &Strm,Figura Fig);
#endif
