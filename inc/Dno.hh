#ifndef Dno_HH
#define Dno_HH
#include "Figura.hh"
class Dno
{
Figura dno[10];
public:
Figura getFigura(int index)const
{
    return dno[index];
}

void setDno();
};
std::ostream& operator<<(std::ostream &Str,const Dno dno);

#endif