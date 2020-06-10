#ifndef PRZESZKODY_HH
#define PRZESZKODY_HH
#include "Figura.hh"
/*!
*\file
*\brief Zawiera definicję klasy przeszkody
*
* Plik zawiera definicję klasy Przeszkody która pozwala stworzyć 
* obiekty różnego kształtu w układzie współrzednych
*/

/*!
*\brief Klasa przeszkody która dziedziczy z klady Figura
*
* Klasa która dziedziczy z klasy Figura w celu stworzenia 
* obiektów jako przeszkody dla Drona
*/

class Przeszkody:public Figura
{
/*!
* \brief Zbiór obiektów klasy Figura jako przeszkody dla drona
*
* Zbiór przeszkód:
* -2 pręty
* -2 bloki
* -1 ściana
*/
    Figura Pret1;
    Figura Pret2;
    Figura Blok1[5];
    Figura Blok2[5];
    Figura sciana[2];

public:
double promienBlok1();
Przeszkody():Figura(){}
/*!
* \brief Dostęp do pierwszego pręta
*
* Metoda zwracjąca wartości wierchołków 1 pręta
*/
Figura getPret1()const
{
    return Pret1;
}
/*!
* \brief Dostęp do drugiego pręta
*
* Metoda zwracjąca wartości wierchołków 2 pręta
*/
Figura getPret2()const
{
    return Pret2;
}
/*!
* \brief Dostęp do pierwszego bloku
*
* Metoda zwracjąca wartości wierchołków 1 bloku
* \param index - decyduje który element z tablicy zostanie zwrócony
*/
Figura getBlok1(int index)const
{
return Blok1[index];
}
/*!
* \brief Dostęp do drugiego bloku
*
* Metoda zwracjąca wartości wierchołków 2 bloku
* \param index - decyduje który element z tablicy zostanie zwrócony
*/
Figura getBlok2(int index)const
{
return Blok2[index];
}
/*!
* \brief Dostęp do ściany
*
* Metoda zwracjąca wartości wierchołków dla ściany
* \param index - decyduje który element z tablicy zostanie zwrócony
*/
Figura getsciana(int index)const
{
return sciana[index];
}

/*!
* \brief Ustawienie wartości wierzchołków wszystkich przeszkód
*
* Metoda ustawiająca wartości wszystkich przeszkód klasy Przeszkody
*/
void setPrzeszkody();
};
/*!
* \brief Funkcja wypisująca wartości klasy przeszkody
*
* Operator wypisujący wszystkie elementy klasy przeszkody
*/
std::ostream& operator<<(std::ostream &Str,const Przeszkody pret);
bool CzyKolizja(Figura Fig);

#endif
