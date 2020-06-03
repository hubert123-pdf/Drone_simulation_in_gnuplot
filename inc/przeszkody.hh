#ifndef PRZESZKODY_HH
#define PRZESZKODY_HH
#include "Figura.hh"

class Przeszkody:public Figura
{
 /*
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
Przeszkody():Figura(){}
/*
* Dostęp do pierwszego pręta
*/
Figura getPret1()const
{
    return Pret1;
}
/*
* Dostęp do 2 pręta
*/
Figura getPret2()const
{
    return Pret2;
}
/*
* Dostęp do 1 Blkou
*/
Figura getBlok1(int index)const
{
return Blok1[index];
}
/*
* Dostęp do ściany
*/
Figura getsciana(int index)const
{
return sciana[index];
}
/*
* Dostęp do 2 Bloku
*/
Figura getBlok2(int index)const
{
return Blok2[index];
}
/*
* Ustawienie wartości wierzchołków wszystkich przeszkód
*/
void setPrzeszkody();
};
/*
* Operator wypisania dla klasy przeszkody
*/
std::ostream& operator<<(std::ostream &Str,const Przeszkody pret);

#endif
