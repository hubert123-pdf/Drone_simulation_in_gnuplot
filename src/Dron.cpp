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

  dron[5].getWierzcholki().push_back({-12,10,-10});
  dron[5].getWierzcholki().push_back({-12,4,-10});
  dron[5].getWierzcholki().push_back({-10,4,-10});
  dron[5].getWierzcholki().push_back({-10,10,-10});

  dron[6].getWierzcholki().push_back({-12,10,-10});
  dron[6].getWierzcholki().push_back({-12,7,-4});
  dron[6].getWierzcholki().push_back({-10,7,-4});
  dron[6].getWierzcholki().push_back({-10,10,-10});

  dron[7].getWierzcholki().push_back({-12,10,-10});
  dron[7].getWierzcholki().push_back({-12,13,-4});
  dron[7].getWierzcholki().push_back({-10,13,-4});
  dron[7].getWierzcholki().push_back({-10,10,-10});

  dron[8].getWierzcholki().push_back({-12,10,-10});
  dron[8].getWierzcholki().push_back({-12,16,-10});
  dron[8].getWierzcholki().push_back({-10,16,-10});
  dron[8].getWierzcholki().push_back({-10,10,-10});

  dron[9].getWierzcholki().push_back({-12,10,-10});
  dron[9].getWierzcholki().push_back({-12,13,-16});
  dron[9].getWierzcholki().push_back({-10,13,-16});
  dron[9].getWierzcholki().push_back({-10,10,-10});

  dron[10].getWierzcholki().push_back({-12,10,-10});
  dron[10].getWierzcholki().push_back({-12,7,-16});
  dron[10].getWierzcholki().push_back({-10,7,-16});
  dron[10].getWierzcholki().push_back({-10,10,-10});

  dron[11].getWierzcholki().push_back({-12,10,-10});
  dron[11].getWierzcholki().push_back({-12,4,-10});
  dron[11].getWierzcholki().push_back({-10,4,-10});
  dron[11].getWierzcholki().push_back({-10,10,-10});

  dron[12].getWierzcholki().push_back({-12,-10,-10});
  dron[12].getWierzcholki().push_back({-12,-4,-10});
  dron[12].getWierzcholki().push_back({-10,-4,-10});
  dron[12].getWierzcholki().push_back({-10,-10,-10});

  dron[13].getWierzcholki().push_back({-12,-10,-10});
  dron[13].getWierzcholki().push_back({-12,-7,-4});
  dron[13].getWierzcholki().push_back({-10,-7,-4});
  dron[13].getWierzcholki().push_back({-10,-10,-10});


  dron[14].getWierzcholki().push_back({-12,-10,-10});
  dron[14].getWierzcholki().push_back({-12,-13,-4});
  dron[14].getWierzcholki().push_back({-10,-13,-4});
  dron[14].getWierzcholki().push_back({-10,-10,-10});


  dron[15].getWierzcholki().push_back({-12,-10,-10});
  dron[15].getWierzcholki().push_back({-12,-16,-10});
  dron[15].getWierzcholki().push_back({-10,-16,-10});
  dron[15].getWierzcholki().push_back({-10,-10,-10});

  dron[16].getWierzcholki().push_back({-12,-10,-10});
  dron[16].getWierzcholki().push_back({-12,-13,-16});
  dron[16].getWierzcholki().push_back({-10,-13,-16});
  dron[16].getWierzcholki().push_back({-10,-10,-10});


  dron[17].getWierzcholki().push_back({-12,-10,-10});
  dron[17].getWierzcholki().push_back({-12,-7,-16});
  dron[17].getWierzcholki().push_back({-10,-7,-16});
  dron[17].getWierzcholki().push_back({-10,-10,-10});

  dron[18].getWierzcholki().push_back({-12,-10,-10});
  dron[18].getWierzcholki().push_back({-12,-4,-10});
  dron[18].getWierzcholki().push_back({-10,-4,-10});
  dron[18].getWierzcholki().push_back({-10,-10,-10});
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

  dron[5].getWierzcholki()[0]={-12,10,-10};
  dron[5].getWierzcholki()[1]={-12,4,-10};
  dron[5].getWierzcholki()[2]={-10,4,-10};
  dron[5].getWierzcholki()[3]={-10,10,-10};

  dron[6].getWierzcholki()[0]={-12,10,-10};
  dron[6].getWierzcholki()[1]={-12,7,-4};
  dron[6].getWierzcholki()[2]={-10,7,-4};
  dron[6].getWierzcholki()[3]={-10,10,-10};

  dron[7].getWierzcholki()[0]={-12,10,-10};
  dron[7].getWierzcholki()[1]={-12,13,-4};
  dron[7].getWierzcholki()[2]={-10,13,-4};
  dron[7].getWierzcholki()[3]={-10,10,-10};

  dron[8].getWierzcholki()[0]={-12,10,-10};
  dron[8].getWierzcholki()[1]={-12,16,-10};
  dron[8].getWierzcholki()[2]={-10,16,-10};
  dron[8].getWierzcholki()[3]={-10,10,-10};

  dron[9].getWierzcholki()[0]={-12,10,-10};
  dron[9].getWierzcholki()[1]={-12,13,-16};
  dron[9].getWierzcholki()[2]={-10,13,-16};
  dron[9].getWierzcholki()[3]={-10,10,-10};

  dron[10].getWierzcholki()[0]={-12,10,-10};
  dron[10].getWierzcholki()[1]={-12,7,-16};
  dron[10].getWierzcholki()[2]={-10,7,-16};
  dron[10].getWierzcholki()[3]={-10,10,-10};

  dron[11].getWierzcholki()[0]={-12,10,-10};
  dron[11].getWierzcholki()[1]={-12,4,-10};
  dron[11].getWierzcholki()[2]={-10,4,-10};
  dron[11].getWierzcholki()[3]={-10,10,-10};

  dron[12].getWierzcholki()[0]={-12,-10,-10};
  dron[12].getWierzcholki()[1]={-12,-4,-10};
  dron[12].getWierzcholki()[2]={-10,-4,-10};
  dron[12].getWierzcholki()[3]={-10,-10,-10};

  dron[13].getWierzcholki()[0]={-12,-10,-10};
  dron[13].getWierzcholki()[1]={-12,-7,-4};
  dron[13].getWierzcholki()[2]={-10,-7,-4};
  dron[13].getWierzcholki()[3]={-10,-10,-10};

  dron[14].getWierzcholki()[0]={-12,-10,-10};
  dron[14].getWierzcholki()[1]={-12,-13,-4};
  dron[14].getWierzcholki()[2]={-10,-13,-4};
  dron[14].getWierzcholki()[3]={-10,-10,-10};

  dron[15].getWierzcholki()[0]={-12,-10,-10};
  dron[15].getWierzcholki()[1]={-12,-16,-10};
  dron[15].getWierzcholki()[2]={-10,-16,-10};
  dron[15].getWierzcholki()[3]={-10,-10,-10};

  dron[16].getWierzcholki()[0]={-12,-10,-10};
  dron[16].getWierzcholki()[1]={-12,-13,-16};
  dron[16].getWierzcholki()[2]={-10,-13,-16};
  dron[16].getWierzcholki()[3]={-10,-10,-10};

  dron[17].getWierzcholki()[0]={-12,-10,-10};
  dron[17].getWierzcholki()[1]={-12,-7,-16};
  dron[17].getWierzcholki()[2]={-10,-7,-16};
  dron[17].getWierzcholki()[3]={-10,-10,-10};

  dron[18].getWierzcholki()[0]={-12,-10,-10};
  dron[18].getWierzcholki()[1]={-12,-4,-10};
  dron[18].getWierzcholki()[2]={-10,-4,-10};
  dron[18].getWierzcholki()[3]={-10,-10,-10};
}
void Dron::setMacierzObrotu(double alfa)
{
  MacierzObrotu[0]={cos(alfa*PI/180),-sin(alfa*PI/180),0};
  MacierzObrotu[1]={sin(alfa*PI/180),cos(alfa*PI/180),0};
  MacierzObrotu[2]={0,0,1};
}
void Dron::setWektorPrzesuniecia(double a,double b)
{
  WektorPrzesuniecia={a*cos(kat2D*PI/180),a*sin(kat2D*PI/180),a*sin(b*PI/180)};
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

void Dron::obrocDrona()
{
  double x;
  std::cout<<std::endl<<"Podaj wartosc kata obrotu w stopniach: ";
  std::cin>>x;

  setDron0();
  setKat2D(x);
  setMacierzObrotu(kat2D);
}
void zmianaOrientacji(Dron &Dron)
{
  double a,b,c;
  for(int i=0;i<19;i++)
  {
  for(int j=0;j<4;j++)
  { 
      a=(Dron.getMacierzObrotu(0)*Dron.getFigura(i).getWierzcholki(j))+Dron.getWektorPrzemieszczenia().x;
      b=(Dron.getMacierzObrotu(1)*Dron.getFigura(i).getWierzcholki(j))+Dron.getWektorPrzemieszczenia().y;
      c=(Dron.getMacierzObrotu(2)*Dron.getFigura(i).getWierzcholki(j))+Dron.getWektorPrzemieszczenia().z;
      Dron.setRuchDronax(i,j,a);
      Dron.setRuchDronay(i,j,b);
      Dron.setRuchDronaz(i,j,c);
  }
  }
}
void Dron::PrzesunDrona()
{
  double x,y;
  std::cout<<std::endl<<"Podaj wartosc przesuniecia: ";
  std::cin>>x;
  std::cout<<std::endl<<"Podaj wartosc kata przesuniecia (gora/dol): ";
  std::cin>>y;
 
setWektorPrzesuniecia(x/200,y);
setKat3D(y);
}
void zadajRuch(Dron &Dron)
  {
  for(int i=0;i<19;i++)
  {
    for(int j=0;j<4;j++)
    {
    double a,b,c;
    a=Dron.getFigura(i).getWierzcholki(j).x+Dron.getWektorPrzesuniecia().x;
    b=Dron.getFigura(i).getWierzcholki(j).y+Dron.getWektorPrzesuniecia().y;
    c=Dron.getFigura(i).getWierzcholki(j).z+Dron.getWektorPrzesuniecia().z;
    Dron.setRuchDronax(i,j,a);
    Dron.setRuchDronay(i,j,b);
    Dron.setRuchDronaz(i,j,c);
    }
  }
  Dron.setWektorPrzemieszczenia();
}
std::ostream& operator<<(std::ostream &Str,Dron Dron)
{
    for(int i=0;i<19;i++)
    {
       Str<<Dron.getFigura(i)<<"#\n\n";
    }
    return Str;
}
void ZatrzymajDrona(Dron &Dron)
{
  Dron.setWektorPrzesuniecia(-0.5,0);
  for(int i=0;i<19;i++)
  {
    for(int j=0;j<4;j++)
    {
    double a,b,c;
    a=Dron.getFigura(i).getWierzcholki(j).x+Dron.getWektorPrzesuniecia().x;
    b=Dron.getFigura(i).getWierzcholki(j).y+Dron.getWektorPrzesuniecia().y;
    c=Dron.getFigura(i).getWierzcholki(j).z+Dron.getWektorPrzesuniecia().z;
    Dron.setRuchDronax(i,j,a);
    Dron.setRuchDronay(i,j,b);
    Dron.setRuchDronaz(i,j,c);
    }
  }
  Dron.setWektorPrzemieszczenia();
}
bool Dron::CzyKolizja(Figura Fig)
{

  double odleglosc1; //blok1
  double odleglosc2; //pret1
  double odleglosc3; //pret2
  double odleglosc4; //sciana
  double odleglosc5; //blok
  odleglosc1=sqrt((WektorPrzemieszczenia.x-30)*(WektorPrzemieszczenia.x-30)+
  (WektorPrzemieszczenia.y+42)*(WektorPrzemieszczenia.y+42));

  odleglosc2=sqrt((WektorPrzemieszczenia.x-60)*(WektorPrzemieszczenia.x-60)+
  (WektorPrzemieszczenia.y+30)*(WektorPrzemieszczenia.y+30));

  odleglosc3=sqrt((WektorPrzemieszczenia.x-20)*(WektorPrzemieszczenia.x-20)+
  (WektorPrzemieszczenia.z-50)*(WektorPrzemieszczenia.y-50));

 
  odleglosc5=sqrt((WektorPrzemieszczenia.x-65)*(WektorPrzemieszczenia.x-65)+
  (WektorPrzemieszczenia.y-30)*(WektorPrzemieszczenia.y-30));

  if((promienDrona()+(10*sqrt(2)))>odleglosc1)
  return true;

  if(promienDrona()>odleglosc2)
  return true;

  for(int i=0;i<19;i++)
  {
    for(int j=0;j<4;j++)
    {
      if(promienDrona()>odleglosc3&&getFigura(i).getWierzcholki(j).y>=45&&getFigura(i).getWierzcholki(j).z>=50)
      return true;
    }
  }
  for(int i=0;i<19;i++)
  {
    for(int j=0;j<4;j++)
    {
      for(int k=-30;k<30;k++)
      {
       odleglosc4=sqrt((WektorPrzemieszczenia.y-55)*(WektorPrzemieszczenia.y-55)+
       (WektorPrzemieszczenia.x-k)*(WektorPrzemieszczenia.x-k));
      if(odleglosc4<promienDrona()&&getFigura(i).getWierzcholki(j).z<=0)
              return true;
      }
    }
  }
  for(int i=0;i<19;i++)
  {
    for(int j=0;j<4;j++)
    {
  if(promienDrona()+15*sqrt(2)>odleglosc5&&getFigura(i).getWierzcholki(j).z<=-20)
  return true;
    }
  }
  return false;
  
}