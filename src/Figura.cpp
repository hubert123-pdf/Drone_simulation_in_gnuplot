#include "Figura.hh"

std::ostream& operator<<(std::ostream &Strm, Figura Fig)
{
  for(int i=0;i<Fig.getSize();i++)
  {
  Strm<<Fig.getWierzcholki(i).x<<' '<<Fig.getWierzcholki(i).y<<' '
  <<Fig.getWierzcholki(i).z<<std::endl;
  }
  return Strm;
}
