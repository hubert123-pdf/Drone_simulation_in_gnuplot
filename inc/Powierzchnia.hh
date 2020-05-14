#ifndef POWIERZCHNIA_HH
#define POWIERZCHNIA_HH
#include "Figura.hh"

class Powierzchnia
{
    Figura dno[5];

public:
Figura getFigura2(int index)const
{
  return dno[index];
}
void setPowierzchniaDna();

};
std::ostream& operator<<(std::ostream &Str,const Powierzchnia powierzchnia);

#endif