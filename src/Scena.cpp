#include "Scena.hh"

void otwarcie_pliku_dron(Dron Podwodniak)
{
std::fstream plik;
plik.open("bryly/dron.dat",std::ios::out );
if(plik.good()==true)
{
  plik<<Podwodniak;
}
else
std::cout<<"nie udało się"<<std::endl;
plik.close();
}
void otwarcie_pliku_fala(Powierzchnia Fala)
{
      std::fstream plik;
      plik.open("bryly/fala.dat",std::ios::out );
      if(plik.good()==true)
      {
        plik<<Fala;
      }
      else
      std::cout<<"nie udało się"<<std::endl;
      plik.close();
}
void otwarcie_pliku_dno(Dno Dno)
{
      std::fstream plik;
      plik.open("bryly/dno.dat",std::ios::out );
      if(plik.good()==true)
      {
        plik<<Dno;
      }
      else
      std::cout<<"nie udało się"<<std::endl;
      plik.close();
}
void otwarcie_plikow_przeszkod(Przeszkody przeszkody)
{

//Pierwszy pręt
std::fstream plik1;
plik1.open("bryly/pret1.dat",std::ios::out );
if(plik1.good()==true)
{
  plik1<<przeszkody.getPret1();
}
else
std::cout<<"nie udało się"<<std::endl;
plik1.close();

//Drugi pręt
std::fstream plik2;
plik2.open("bryly/pret2.dat",std::ios::out );
if(plik2.good()==true)
{
  plik2<<przeszkody.getPret2();
}
else
std::cout<<"nie udało się"<<std::endl;
plik2.close();

//Pierwszy Blok
std::fstream plik3;
plik3.open("bryly/blok1.dat",std::ios::out );
if(plik3.good()==true)
{
  plik3<<przeszkody;
}
else
std::cout<<"nie udało się"<<std::endl;
plik3.close();
}

void zadajRuch(Dron &Dron)
{
  double x;
  std::cout<<std::endl<<"Podaj wartosc przesuniecia do przodu ";
  std::cin>>x;
  Dron.setDron0();
  Dron.setWektorPrzesuniecia(x);
  Dron.setWektorPrzemieszczenia();
  for(int i=0;i<5;i++)
  {
    for(int j=0;j<4;j++)
    {
    double d,e,f;
    Dron.setRuchDronax(i,j,Dron.getFigura(i).getWierzcholki(j).x+Dron.getWektorPrzemieszczenia().x);
    Dron.setRuchDronay(i,j,Dron.getFigura(i).getWierzcholki(j).y+Dron.getWektorPrzemieszczenia().y);
    Dron.setRuchDronaz(i,j,Dron.getFigura(i).getWierzcholki(j).z+Dron.getWektorPrzemieszczenia().z);

    d=Dron.getFigura(i).getWierzcholki(j)*Dron.getMacierzObrotu(0);
    e=Dron.getFigura(i).getWierzcholki(j)*Dron.getMacierzObrotu(1);
    f=Dron.getFigura(i).getWierzcholki(j)*Dron.getMacierzObrotu(2);

    Dron.setRuchDronax(i,j,d);
    Dron.setRuchDronay(i,j,e);
    Dron.setRuchDronaz(i,j,f);

    Dron.setRuchDronax(i,j,Dron.getFigura(i).getWierzcholki(j).x+Dron.getWektorPrzemieszczenia().x);
    Dron.setRuchDronay(i,j,Dron.getFigura(i).getWierzcholki(j).y+Dron.getWektorPrzemieszczenia().y);
    Dron.setRuchDronaz(i,j,Dron.getFigura(i).getWierzcholki(j).z+Dron.getWektorPrzemieszczenia().z);

    }
  }
}

void StworzScene()
{
  PzG::LaczeDoGNUPlota  Lacze;
  Lacze.DodajNazwePliku("bryly/dron.dat");
  Lacze.DodajNazwePliku("bryly/fala.dat");
  Lacze.DodajNazwePliku("bryly/dno.dat");
  Lacze.DodajNazwePliku("bryly/pret1.dat");
  Lacze.DodajNazwePliku("bryly/pret2.dat");
  Lacze.DodajNazwePliku("bryly/blok1.dat");
  Lacze.ZmienTrybRys(PzG::TR_3D);
  Lacze.Inicjalizuj();  // Tutaj startuje gnuplot.
  Lacze.UstawZakresX(-50, 100);
  Lacze.UstawZakresY(-50, 100);
  Lacze.UstawZakresZ(-100, 100);
  Lacze.UstawRotacjeXZ(69,24); // Tutaj ustawiany jest widok
  Lacze.Rysuj();        // Teraz powinno pojawic sie okienko gnuplota                      // z rysunkiem, o ile istnieje plik "prostopadloscian1.dat"
  Lacze.UsunWszystkieNazwyPlikow();
}
void aktualizujScene(Dron Dron)
{  
  otwarcie_pliku_dron(Dron);
  PzG::LaczeDoGNUPlota  Lacze;
  Lacze.DodajNazwePliku("bryly/dron.dat");
  Lacze.Inicjalizuj();  // Tutaj startuje gnuplot. 
       // Teraz powinno pojawic sie okienko gnuplota                      
       // z rysunkiem, o ile istnieje plik "prostopadloscian1.dat
        // Teraz powinno pojawic sie okienko gnuplota 
}
bool sprawdzkolizja1faza(Dron Dron)
{
for(int i=0;i<5;i++)
  {
    for(int j=0;j<4;j++)
    {
      if(Dron[i][j].z>=100)
      {
        std::cout<<std::endl<<"Dron wypłynął na powierzchnie";
        return true;
      }
      if(Dron[i][j].z<=-100)
      {
       std::cout<<std::endl<<"Dron uderzył w dno";
       return true;
      }
    }
  }
  return false;
}