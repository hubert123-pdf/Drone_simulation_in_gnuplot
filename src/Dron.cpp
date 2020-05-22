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

  dron2[0].getWierzcholki().push_back({0,-10,0});
  dron2[0].getWierzcholki().push_back({10,-10,10});
  dron2[0].getWierzcholki().push_back({10,10,10});
  dron2[0].getWierzcholki().push_back({0,10,0});
  
  dron2[1].getWierzcholki().push_back({0,-10,0});
  dron2[1].getWierzcholki().push_back({10,-10,-10});
  dron2[1].getWierzcholki().push_back({10,10,-10});
  dron2[1].getWierzcholki().push_back({0,10,0});

  dron2[2].getWierzcholki().push_back({0,-10,0});
  dron2[2].getWierzcholki().push_back({-10,-10,-10});
  dron2[2].getWierzcholki().push_back({-10,10,-10});
  dron2[2].getWierzcholki().push_back({0,10,0});

  dron2[3].getWierzcholki().push_back({0,-10,0});
  dron2[3].getWierzcholki().push_back({-10,-10,10});
  dron2[3].getWierzcholki().push_back({-10,10,10});
  dron2[3].getWierzcholki().push_back({0,10,0});

  dron2[4].getWierzcholki().push_back({0,-10,0});
  dron2[4].getWierzcholki().push_back({10,-10,10});
  dron2[4].getWierzcholki().push_back({10,10,10});
  dron2[4].getWierzcholki().push_back({0,10,0});
}
void Dron::setDron0()
{
  
  dron[0].getWierzcholki()[0]={0,-10,0};
  dron[0].getWierzcholki()[1]={10,-10,10};
  dron[0].getWierzcholki()[2]={10,10,10};
  dron[0].getWierzcholki()[3]={0,10,0};
  
  dron[1].getWierzcholki()[0]={0,-10,0};
  dron[1].getWierzcholki()[1]={10,-10,-10};
  dron[1].getWierzcholki()[2]={10,10,-10};
  dron[1].getWierzcholki()[3]={0,10,0};

  dron[2].getWierzcholki()[0]={0,-10,0};
  dron[2].getWierzcholki()[1]={-10,-10,-10};
  dron[2].getWierzcholki()[2]={-10,10,-10};
  dron[2].getWierzcholki()[3]={0,10,0};

  dron[3].getWierzcholki()[0]={0,-10,0};
  dron[3].getWierzcholki()[1]={-10,-10,10};
  dron[3].getWierzcholki()[2]={-10,10,10};
  dron[3].getWierzcholki()[3]={0,10,0};

  dron[4].getWierzcholki()[0]={0,-10,0};
  dron[4].getWierzcholki()[1]={10,-10,10};
  dron[4].getWierzcholki()[2]={10,10,10};
  dron[4].getWierzcholki()[3]={0,10,0};
}

void Dron::setMacierzObrotu(double alfa)
{
  MacierzObrotu[0]={cos(alfa*PI/180),-sin(alfa*PI/180),0};
  MacierzObrotu[1]={sin(alfa*PI/180),cos(alfa*PI/180),0};
  MacierzObrotu[2]={0,0,1};
}
void Dron::setWektorPrzesuniecia(double a,double b,double c)
{
  WektorPrzesuniecia={a,b,c};
}
void Dron::setWektorPrzemieszczenia()
{
  WektorPrzemieszczenia.x+=WektorPrzesuniecia.x;
  WektorPrzemieszczenia.y+=WektorPrzesuniecia.y;
  WektorPrzemieszczenia.z+=WektorPrzesuniecia.z;
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

