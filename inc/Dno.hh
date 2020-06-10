#ifndef Dno_HH
#define Dno_HH
#include "Figura.hh"
/*!
*\file
*\brief Zawiera definicję klasy Dno
*
* Plik zawiera definicję klasy Dno która pozwala stworzyć Dno
* w najniższym miejscu układu współrzędnych
*/

/*!
*\brief Klasa Dno która dziedziczy z klasy Figura
*
* Klasa która dziedziczy z klasy Figura w celu stworzenia płaszczyzny
* pod układem współrzędnych
*/
class Dno:public Figura
{
/*!
* \brief Tablica wierzchołków imitująca dno 
*
* Tablica 10 elementów klasy Figura
*/
Figura dno[10];

public:
Dno():Figura(){}
/*!
* \brief Modół dostepu do Wierzchiłków dna
*
* Modół który zwraca odpowiednie elmenty klasy parametru Figura
* \param index - decyduje który element z tablicy zostanie zwrócony 
*/
Figura getFigura(int index)const
{
    return dno[index];
}
/*!
* \brief Modół ustawiający wartości wierzchołków dna
*
*  Modół ustalający każdy punkt powierzchni pod układem współrzędnych
*/
void setDno();
/*!
* \brief Metoda badająca czy zaszła kolizja drona z dnem 
*
* Metoda zwracająca wartość jeśli Dron przekroczy odpowiednią głębokość
*/
bool CzyKolizja(Figura Fig);
};
/*!
* \brief Funkcja wypisująca wartości klasy Dno
*
* Operator wypisujący wszystkie elementy klasy Dno
*/
std::ostream& operator<<(std::ostream &Str,const Dno dno);

#endif