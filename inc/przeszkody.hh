#ifndef PRZESZKODY_HH
#define PRZESZKODY_HH
#include "Figura.hh"

class Przeszkody:public Figura
{
    Figura Pret1;
    Figura Pret2;
    Figura Blok1[5];
    Figura Blok2[5];
    Figura sciana[2];

public:
Figura getPret1()const
{
    return Pret1;
}
Figura getPret2()const
{
    return Pret2;
}
Figura getBlok1(int index)const
{
return Blok1[index];
}
Figura getsciana(int index)const
{
return sciana[index];
}
Figura getBlok2(int index)const
{
return Blok2[index];
}
void setPrzeszkody();


};
std::ostream& operator<<(std::ostream &Str,const Przeszkody pret);

#endif
