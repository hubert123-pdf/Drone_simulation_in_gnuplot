#ifndef DRON_HH
#define DRON_HH
#include "Figura.hh"
//stworzenie wiercholkow drona
//
class Dron
{
Figura dron[5];
public:
Figura getFigura(int index)
{
  return dron[index];
}
void setDron();
};
//funkcje
std::ostream& operator<<(std::ostream &Str,Dron Dron);


#endif