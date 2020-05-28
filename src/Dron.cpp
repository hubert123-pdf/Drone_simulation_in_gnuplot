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
void Dron::setMacierzObrotu0()
{
  MacierzObrotu[0]={cos(0),-sin(0),0};
  MacierzObrotu[1]={sin(0),cos(0),0};
  MacierzObrotu[2]={0,0,1};
}
void Dron::setWektorPrzesuniecia(double a)
{
  WektorPrzesuniecia={a,0,0};
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
void zmianaOrientacji(Dron &Dron)
{
  double a,b,c;
  double x;
  std::cout<<std::endl<<"Podaj wartosc kata obrotu w stopniach: ";
  std::cin>>x;
  //Dron.setDron0();
  Dron.setMacierzObrotu(x+Dron.getKatPrzesuniecia());
  for(int i=0;i<5;i++)
  {
  for(int j=0;j<4;j++)
  { 
    Dron.setRuchDronax(i,j,Dron.getFigura(i).getWierzcholki(j).x-Dron.getWektorPrzemieszczenia().x);
    Dron.setRuchDronay(i,j,Dron.getFigura(i).getWierzcholki(j).y-Dron.getWektorPrzemieszczenia().y);
    Dron.setRuchDronaz(i,j,Dron.getFigura(i).getWierzcholki(j).z-Dron.getWektorPrzemieszczenia().z);

    a=Dron.getFigura(i).getWierzcholki(j)*Dron.getMacierzObrotu(0)+Dron.getWektorPrzemieszczenia().x;
    b=Dron.getFigura(i).getWierzcholki(j)*Dron.getMacierzObrotu(1)+Dron.getWektorPrzemieszczenia().y;
    c=Dron.getFigura(i).getWierzcholki(j)*Dron.getMacierzObrotu(2)+Dron.getWektorPrzemieszczenia().z;
    Dron.setRuchDronax(i,j,a);
    Dron.setRuchDronay(i,j,b);
    Dron.setRuchDronaz(i,j,c);
  }
  }
  Dron.setKatPrzesuniecia(x+Dron.getKatPrzesuniecia());
  }
