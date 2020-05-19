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
void zmianaOrientacji(Dron &Dron)
{
  double x;
  std::cout<<std::endl<<"Podaj wartosc kata obrotu w stopniach: ";
  std::cin>>x;
  Dron.setMacierzObrotu(x);
  for(int i=0;i<5;i++)
  {
    for(int j=0;j<4;j++)
    {
      double a,b,c;
      a=Dron.getFigura(i).getWierzcholki(j)*Dron.getMacierzObrotu(0);
      b=Dron.getFigura(i).getWierzcholki(j)*Dron.getMacierzObrotu(1);
      c=Dron.getFigura(i).getWierzcholki(j)*Dron.getMacierzObrotu(2);
    Dron.setRuchDronax(i,j,a);
    Dron.setRuchDronay(i,j,b);
    Dron.setRuchDronaz(i,j,c);      
    }
  }
otwarcie_pliku_dron(Dron);
}

void zadajRuch(Dron &Dron)
{
  double kat,odl;
  std::cout<<std::endl<<"Podaj wartosc kata (wznoszenia/opadania) w stopniach. ";
  std::cin>>kat;
  std::cout<<std::endl<<"Podaj wartosc odleglosci, na ktora ma sie przemiescic dron. ";
  std::cin>>odl;
  Dron.setWektorPrzesuniecia(odl,kat);
  for(int i=0;i<5;i++)
  {
    for(int j=0;j<4;j++)
    {
    Dron.setRuchDronax(i,j,Dron.getFigura(i).getWierzcholki(j).x+Dron.getWektorPrzesuniecia().x);
    Dron.setRuchDronaz(i,j,Dron.getFigura(i).getWierzcholki(j).z+Dron.getWektorPrzesuniecia().z);

    }
  }
  otwarcie_pliku_dron(Dron);
}

void StworzScene()
{
  PzG::LaczeDoGNUPlota  Lacze;
  Lacze.DodajNazwePliku("bryly/dron.dat");
  Lacze.DodajNazwePliku("bryly/fala.dat");
  Lacze.DodajNazwePliku("bryly/dno.dat");
  Lacze.ZmienTrybRys(PzG::TR_3D);
  Lacze.Inicjalizuj();  // Tutaj startuje gnuplot.
  Lacze.UstawZakresX(-50, 100);
  Lacze.UstawZakresY(-50, 100);
  Lacze.UstawZakresZ(-100, 100);
  Lacze.UstawRotacjeXZ(69,24); // Tutaj ustawiany jest widok
  Lacze.Rysuj();        // Teraz powinno pojawic sie okienko gnuplota                      // z rysunkiem, o ile istnieje plik "prostopadloscian1.dat"
  Lacze.UsunWszystkieNazwyPlikow();
}
void aktualizujScene()
{  
  PzG::LaczeDoGNUPlota  Lacze;
  Lacze.DodajNazwePliku("bryly/dron.dat");
  Lacze.Inicjalizuj();  // Tutaj startuje gnuplot.
  Lacze.UstawZakresX(-50, 100);
  Lacze.UstawZakresY(-50, 100);
  Lacze.UstawZakresZ(-100, 100);
  Lacze.UstawRotacjeXZ(69,24); // Tutaj ustawiany jest widok
        // Teraz powinno pojawic sie okienko gnuplota 
  Lacze.UsunWszystkieNazwyPlikow();
}
