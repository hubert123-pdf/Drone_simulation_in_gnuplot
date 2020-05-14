#include "Dron.hh"

void Dron::setDron()
{
  dron[0].getWierzcholki().push_back({0,-20,40});
  dron[0].getWierzcholki().push_back({20,-20,80});
  dron[0].getWierzcholki().push_back({20,20,80});
  dron[0].getWierzcholki().push_back({0,20,40});

  std::cout<<dron[0].getWierzcholki().size();
  
  dron[1].getWierzcholki().push_back({0,-20,40});
  dron[1].getWierzcholki().push_back({20,-20,0});
  dron[1].getWierzcholki().push_back({20,20,0});
  dron[1].getWierzcholki().push_back({0,20,40});

  dron[2].getWierzcholki().push_back({0,-20,40});
  dron[2].getWierzcholki().push_back({-20,-20,0});
  dron[2].getWierzcholki().push_back({-20,20,0});
  dron[2].getWierzcholki().push_back({0,20,40});

  dron[3].getWierzcholki().push_back({0,-20,40});
  dron[3].getWierzcholki().push_back({-20,-20,80});
  dron[3].getWierzcholki().push_back({-20,20,80});
  dron[3].getWierzcholki().push_back({0,20,40});

  dron[4].getWierzcholki().push_back({0,-20,40});
  dron[4].getWierzcholki().push_back({20,-20,80});
  dron[4].getWierzcholki().push_back({20,20,80});
  dron[4].getWierzcholki().push_back({0,20,40});
}


std::ostream& operator<<(std::ostream &Str,Dron Dron)
{
    for(int i=0;i<5;i++)
    {
       Str<<Dron.getFigura(i);
    }
    return Str;
}
