#ifndef POWIERZCHNIA_HH
#define POWIERZCHNIA_HH
#include "Figura.hh"
/*!
*\file
*\brief Zawiera definicję klasy Powierzchnia
*
* Plik zawiera definicję klasy Powierzchnia która pozwala stworzyć 
* Falę nad układem współrzędnych
*/

/*!
*\brief Klasa Powierzchnia która dziedziczy z klasy Figura
*
* Klasa która dziedziczy z klasy Figura w celu stworzenia płaszczyzny
* nad układem współrzędnych
*/
class Powierzchnia:public Figura
{
/*!
* \brief tablica wierzcholków imitująca fale
*
* Tablica 10 elementów klasy Figura
*/
  Figura fala[10];

public:
Powierzchnia():Figura(){}
/*!
*\brief  Modół dostępu do wierchołków fali
*
* Modół który zwraca odpowiednie elmenty klasy parametru Figura
* \param index - decyduje który element z tablicy zostanie zwrócony
*/
Figura getFigura2(int index)const
{
  return fala[index];
}
/*!
* \brief Modół ustawiający wartośći wierzchołków fali
*
*Modół ustalający każdy punkt Powierzchni nad układem współrzędnych
*/
void setfale();
/*!
* \brief Metoda badająca czy dron wynurzył się z wody
*
* Metoda zwracająca wartość True jeśli Dron wynurzy się nad powierzchnię wody
*/
bool CzyKolizja(Figura Fig);
};
/*!
* \brief Funkcja wypisująca wartości klasy Powierzchnia
*
* Operator wypisujący wszystkie elementy klasy Powierzchnia
*/
std::ostream& operator<<(std::ostream &Str,const Powierzchnia powierzchnia);

#endif