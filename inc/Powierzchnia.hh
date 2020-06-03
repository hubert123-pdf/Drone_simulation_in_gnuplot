#ifndef POWIERZCHNIA_HH
#define POWIERZCHNIA_HH
#include "Figura.hh"

class Powierzchnia:public Figura
{
/*
* tablica wierzcholków imitująca fale
*/
  Figura fala[10];

public:
Powierzchnia():Figura(){}
/*
* modół dostępu do wierchołków fali
*/
Figura getFigura2(int index)const
{
  return fala[index];
}
/*
* Modół ustawiający wartośći wierzchołków fali
*/
void setfale();

};
/*
* funkcja wypisująca wartości klasy Powierzchnia
*/
std::ostream& operator<<(std::ostream &Str,const Powierzchnia powierzchnia);

#endif