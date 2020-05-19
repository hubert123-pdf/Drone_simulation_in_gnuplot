#include "Dron.hh"

void Dron::setDron()
{

  dron[0].getWierzcholki().push_back({0,-10,0});
  dron[0].getWierzcholki().push_back({10,-10,10});
  dron[0].getWierzcholki().push_back({10,10,10});
  dron[0].getWierzcholki().push_back({0,10,0});
  
  dron[1].getWierzcholki().push_back({0,-10,0});
  dron[1].getWierzcholki().push_back({10,-10,-10});
  dron[1].getWierzcholki().push_back({10,10,-10});
  dron[1].getWierzcholki().push_back({0,10,0});

  dron[2].getWierzcholki().push_back({0,-10,0});
  dron[2].getWierzcholki().push_back({-10,-10,-10});
  dron[2].getWierzcholki().push_back({-10,10,-10});
  dron[2].getWierzcholki().push_back({0,10,0});

  dron[3].getWierzcholki().push_back({0,-10,0});
  dron[3].getWierzcholki().push_back({-10,-10,10});
  dron[3].getWierzcholki().push_back({-10,10,10});
  dron[3].getWierzcholki().push_back({0,10,0});

  dron[4].getWierzcholki().push_back({0,-10,0});
  dron[4].getWierzcholki().push_back({10,-10,10});
  dron[4].getWierzcholki().push_back({10,10,10});
  dron[4].getWierzcholki().push_back({0,10,0});
}

void Dron::setMacierzObrotu(double alfa)
{
  MacierzObrotu[0]={cos(alfa*PI/180),-sin(alfa*PI/180),0};
  MacierzObrotu[1]={sin(alfa*PI/180),cos(alfa*PI/180),0};
  MacierzObrotu[2]={0,0,1};
}
void Dron::setWektorPrzesuniecia(double alfa,double beta)
{
  WektorPrzesuniecia={alfa,0,beta};
}


double operator*(Wektor3D Wek1,Wektor3D Wek2)
{
 double Wynik;
 Wynik=Wek1.x*Wek2.x+Wek1.y*Wek2.y+Wek1.z*Wek2.z;
 return Wynik;
}
std::ostream& operator<<(std::ostream &Str,Dron Dron)
{
    for(int i=0;i<5;i++)
    {
       Str<<Dron.getFigura(i)<<"#\n\n";
    }
    return Str;
}