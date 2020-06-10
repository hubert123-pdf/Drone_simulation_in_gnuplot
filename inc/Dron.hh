#ifndef DRON_HH
#define DRON_HH
#include "Figura.hh"
#include "przeszkody.hh"
#define PI 3.14159265
/*!
*\file
*\brief Zawiera definicję klasy Dron
*
* Plik zawiera definicję klasy Dron która pozwala stworzyć 
* Drona wraz z wirnikami oraz umożliwia mu poruszanie
*/

/*!
*\brief Klasa Dron która dziedziczy z klady Figura
*
* Klasa która dziedziczy z klasy Figura w celu stworzenia 
* najważniejszego obiektu czyli drona, który będzie poruszał się po całym 
* układzie współrzędnych
*/
class Dron:public Figura
{
/*!
* \brief  Dron jako połączone płaszczyzny 
*
* Dron jako tablica 19-elementowa
* posiadająca wierzchołki dla Drona oraz jego wierników
*/
Figura dron[19];
/*!
* \brief  Macierz dla obrotu względem osi Z
*
* Macierz dla obrotu względem osi Z jako 3-elementowa tablica klasy wektor
*/
Wektor3D MacierzObrotu[3];
/*!
* \brief  Wektor przemieszczenia 
*
* Wektor który przedstawia jak daleko od początku ukłądu znajduje się dron
*/
Wektor3D WektorPrzemieszczenia={0,0,0};
/*!
* \brief  Wektor Przesuniecia 
*
* Wektor który zmienia się w zależności od następnego ruchu
*/
Wektor3D WektorPrzesuniecia;
/*!
* \brief  Wartość kata dla przesuwania wzgledem osi X i Y
*/
double kat2D=0;
/*!
* \brief  Wartość kata dla przesuwania wzgledem osi Z
*/
double kat3D;

public:
/*!
* \brief Metoda zwracająca wartość promienia drona 
*/
double promienDrona()
{
  double R;
  return R=10*sqrt(2);
}
/*!
* \brief operator łątwiejszego dostępu do wierzcholków Drona
*
* \param index - decyduje który element z tablicy zostanie zwrócony
*/
Figura operator[](int index)
{
  return dron[index];
}
/*!
* \brief Modół dostępu do wierzcholkow Drona
*
* \param index - decyduje który element z tablicy zostanie zwrócony
*/
Figura getFigura(int index)const
{
  return dron[index];
}
/*!
* \brief Modół dostępu do Macierzy obrotu
*
* 
* \param index - decyduje który element z tablicy zostanie zwrócony
*/
Wektor3D getMacierzObrotu(int index)const
{
  return MacierzObrotu[index];
}
/*!
* \brief Modół ustawia Macierz Obrotu dla odpowiedniego kąta
*
* \param alfa - kąt w stopniach pod któru ustawiana jest wartość macierzy 
*/
void setMacierzObrotu(double alfa);
/*!
*  \brief Modół dostępu do Wektoru Translacji dla następnego ruchu
*/
Wektor3D getWektorPrzesuniecia() const
{
  return WektorPrzesuniecia;
}
/*!
* \brief Modół ustawienia wektora przesuniecia dla następnego ruchu
*
* \param a - wartość przesunięcia dla osi X i Y
* \param b - wartość przesunięcia dla Z
*/
void setWektorPrzesuniecia(double a,double b);
/*!
*   \brief Modół dostępu do Wektora całkowitego przemieszczenia
*/
Wektor3D getWektorPrzemieszczenia() const
{
  return WektorPrzemieszczenia;
}
/*!
*\brief Modół ustawiający wektor przemieszczenia 
*
* Modół ustawiający całkowity Wektor przemieszczenia poprzez 
* dodanie wcześniejszych ruchów.
*/
void setWektorPrzemieszczenia();
/*!
* \brief Modół dostępu do kata dla osi x i y
*/
double getKat2D()const
{
  return kat2D;
}
/*!
* \brief Modół ustawienia kata dla osi x i y
*
*\param wartosc - wartość kąta jaki ma być dodany do całkowitego obrotu drona
*/
void setKat2D(double wartosc)
{
  kat2D+=wartosc;
}
/*!
* \brief Modół dostępu do kata dla osi z
*/
double getKat3D()const
{
  return kat3D;
}
/*!
* \brief Modół Ustwaienia kąta dla osi Z
*
*\param wartosc - wartość kąta jaki ma być dodany do całkowitego obrotu drona
*/
void setKat3D(double wartosc)
{
  this->kat3D+=wartosc;
}
/*!
*  \brief Ustawienie wszystkich wierzcholków Drona
*/
void setDron();
/*!
*\brief Zmiana wierzcholków drona na osi X
*
* \param index - numer Figury
* \param index2 - numer Wierzcholka
* \param wartosc - wartość na jaką ustawiony będzie dany punkt drona
*/
void setRuchDronax(int index,int index2,double wartosc)
{
  dron[index].getWierzcholki(index2).x=wartosc;
}
/*!
* \brief Zmiana wierzcholków drona na osi Y
*
* \param index - numer Figury
* \param index2 - numer Wierzcholka
* \param wartosc - wartość na jaką ustawiony będzie dany punkt drona
*/
void setRuchDronay(int index,int index2,double wartosc)
{
  dron[index].getWierzcholki(index2).y=wartosc;
}
/*!
* \brief Zmiana wierzcholków drona na osi Z
*
* \param index - numer Figury
* \param index2 - numer Wierzcholka
* \param wartosc - wartość na jaką ustawiony będzie dany punkt drona
*/
void setRuchDronaz(int index,int index2,double wartosc)
{
  dron[index].getWierzcholki(index2).z=wartosc;
}
/*!
* \brief Ustawienie drona do położenia początkowego
*/
void setDron0();
/*!
* \brief Metoda ustawiająca wartości do przsuniecia drona
*/
void PrzesunDrona();
/*!
* \brief Metoda ustawiająca wartośći do obrotu drona
*/
void obrocDrona();
/*!
* \brief Metoda badająca czy zachodzi kolizja między przeszkodami
*/
bool CzyKolizja(Figura Fig);

};

/*!
* \brief operator wypisania dla klasy Dron
*/
std::ostream& operator<<(std::ostream &Str,Dron Dron);
/*!
* \brief Operator zwracający iloczyn skalarny dwóch Wektrów
*/
double operator*(Wektor3D Wek1,Wektor3D Wek2);
/*!
* \brief funkcja wykonująca obrót Drona
*
* Funkcja Ta obraca drona przywracając go do początku układu współrzędnych
* a następnie obraca przy pomocy macierzy rotacji oraz wartości kąta 2D
*/
void zmianaOrientacji(Dron &Dron);
/*!
* \brief Funkcja wykonująca Ruch Drona
*
* Funkcja wykonuje Ruch drona bazując na tym 
* o jaką odległość użytkownik chce przesunąć drona oraz ile wynosi kąt obrotu Drona
*/
void zadajRuch(Dron& Dron);
/*!
* \brief Funkcja ustawiająca drona w odległości od przeszkody umożliwiającej cofnięcie
*
* Funkcja ustawia drona cofając go nieco aby mógł on bezpiecznie się wycofać
*/
void ZatrzymajDrona(Dron &Dron);
#endif