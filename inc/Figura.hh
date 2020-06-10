#ifndef FIGURA_HH
#define FIGURA_HH
#include "Wektor3D.hh"
#include <iostream>
#include <math.h>
#include <memory>

/*!
*\file 
*\brief Zawiera definicję klasy Figura
*
* Plik zawiera definicję klasy Figura która 
* pomaga tworzyć wierzchołki figury. 
*/

/*!
*\brief Klasa umożliwiająca tworzenie punktów na osi 3D
*
* 
*/
class Figura
{
  /*!
  * \brief Tablica wierchołków na osi 3D tworzących odpowiednie płaszczyzny 
  *
  * wierzholki jako szablon vector w celu uniknięcia 
  * problemów z figurami o różnej ilości wierzcholków
  */
 std::vector<Wektor3D> wierzcholki;

public:
Figura()=default;

/*!
*\brief Operator umożliwiający łatwiejsze korzystanie z tablicy
*
*Operator indeksowania umożliwiający łatwiejsze korzystanie z tablicy
*\param index - decyduje który element z tablicy zostanie zwrócony
*/
Wektor3D operator[](int index)
{
  return wierzcholki[index];
}

/*!
* \brief Metoda zwracająca pewien element tablicy
*
* Metoda zwracająca oczekiwany element tablicy
* \param i - decyduje który element z tablicy zostanie zwrócony
*/
Wektor3D &getWierzcholki(int i)
{
    return wierzcholki[i];
}
/*!
* \brief Metoda zwracająca szystkie punkty wierzchołka
*
* Metoda zwracająca szablon typu vector jako tablice wierchołków
*/ 
std::vector<Wektor3D>& getWierzcholki()
{
  return wierzcholki;
}
/*!
* \brief Metoda zwracająca rozmiar szablonu
*
* Metoda zwracająca rozmiar szablonu
*/
int getSize() const
{
  return wierzcholki.size();
}
};
/*!
* \brief Operator wypisywania klasy Figura 
*
* Operator wypisywania wszystkich elementow klasy Figura
*/
std::ostream& operator<<(std::ostream &Strm,Figura Fig);
#endif
