#ifndef DRON_HH
#define DRON_HH
#include "Figura.hh"

#define PI 3.14159265


class Dron
{
/*
* elementy Klasy Dron:
* -Wierzholki Drona
* -Macierz Obrotu Drona
* -Wektor całkowitej Translacji oraz tej dla następnego ruchu
* -Kat przesuniecia dla osi x i y
* -Kat przesuniecia dla osi z 
*/
Figura dron[5];
Wektor3D MacierzObrotu[3];

Wektor3D WektorPrzemieszczenia={0,0,0};
Wektor3D WektorPrzesuniecia;

double kat2D=0;
double kat3D=0;

public:
/*
*operator łątwiejszego dostępu do wierzcholków
*/
Figura operator[](int index)
{
  return dron[index];
}
/*
* modół dostępu do wierzcholkow Drona
*/
Figura getFigura(int index)const
{
  return dron[index];
}
/*
* Modół dostępu do Macierzy obrotu
*/
Wektor3D getMacierzObrotu(int index)const
{
  return MacierzObrotu[index];
}
/*
 * Modół ustawia Macierz Obrotu dla odpowiedniego kąta
*/
void setMacierzObrotu(double alfa);
/*
* Modół dostępu do Wektoru Translacji dla następnego ruchu
*/
Wektor3D getWektorPrzesuniecia() const
{
  return WektorPrzesuniecia;
}
/*
* Modół ustawienie wektora Translacji dla następnego ruchu
*/
void setWektorPrzesuniecia(double a,double b);
/*
*  Modół dostępu do Wektora całkowitej Translacji
*/
Wektor3D getWektorPrzemieszczenia() const
{
  return WektorPrzemieszczenia;
}
/*
* Modół ustawiający całkowity Wektor przemieszczenia poprzez 
* dodanie wcześniejszych ruchów.
*/
void setWektorPrzemieszczenia();
/*
* Modół dostępu do kata dla osi x i y
*/
double getKat2D()
{
  return kat2D;
}
/*
* Modół ustawienia kata dla osi x i y
*/
void setKat2D(double wartosc)
{
  kat2D+=wartosc;
}
/*
* Modół dostępu do kata dla osi z
*/
double getKat3D()
{
  return kat3D;
}
/*
* Modół Ustwaienia kąta dla osi z
*/
void setKat3D(double wartosc)
{
  kat3D+=wartosc;
}
/*
* Ustawienie wszystkich wiercholków Drona
*/
void setDron();
/*
* Zmiana wiercholków drona na osi x
*/
void setRuchDronax(int index,int index2,double wartosc)
{
  dron[index].getWierzcholki(index2).x=wartosc;
}
/*
* Zmian wierzcholków drona na  osi y
*/
void setRuchDronay(int index,int index2,double wartosc)
{
  dron[index].getWierzcholki(index2).y=wartosc;
}
/*
* Zmiana wiercholków drona na osi z
*/
void setRuchDronaz(int index,int index2,double wartosc)
{
  dron[index].getWierzcholki(index2).z=wartosc;
}
/*
* Ustawienie drona do położenia początkowego
*/
void setDron0();
};

/*
* operator wypisania klasy Dron
*/
std::ostream& operator<<(std::ostream &Str,Dron Dron);
/*
* Operator zwracający iloczyn skalarny dwóch Wektrów
*/
double operator*(Wektor3D Wek1,Wektor3D Wek2);
/*
* funkcja wykonująca obrót Drona
*/
void zmianaOrientacji(Dron &Dron);
/*
* Funkcja wykonująca Ruch Drona
*/
void zadajRuch(Dron& Dron);


#endif