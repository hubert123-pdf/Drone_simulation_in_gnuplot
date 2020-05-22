#ifndef POWIERZCHNIA_HH
#define POWIERZCHNIA_HH
#include "Figura.hh"

class Powierzchnia
{
  Figura fala[10];

public:
Figura getFigura2(int index)const
{
  return fala[index];
}
void setfale();

};
std::ostream& operator<<(std::ostream &Str,const Powierzchnia powierzchnia);

#endif