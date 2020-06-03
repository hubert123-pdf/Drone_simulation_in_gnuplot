#ifndef Dno_HH
#define Dno_HH
#include "Figura.hh"
class Dno:public Figura
{
/*
* Tablica wierzchołków imitująca dno 
*/
Figura dno[10];
public:
Dno():Figura(){}
/*
* Modół dostepu do Wierzchiłków dna
*/
Figura getFigura(int index)const
{
    return dno[index];
}
/*
* Modół ustawiający dno 
*/
void setDno();
};
/*
* Operator wypisujący dla klasy Dno
*/
std::ostream& operator<<(std::ostream &Str,const Dno dno);

#endif