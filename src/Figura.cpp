#include "Figura.hh"

std::ostream& operator<<(std::ostream &Strm, Figura Fig)
{
  for(int i=0;i<Fig.getSize();i++)
  {
  Strm<<Fig.getWierzcholki(i).getx()<<' '<<Fig.getWierzcholki(i).gety()<<' '
  <<Fig.getWierzcholki(i).getz()<<std::endl;
  }
  return Strm;
}