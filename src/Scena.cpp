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
  std::cout<<std::endl<<"Podaj wartosc kata: ";
  std::cin>>x;
  Dron.setMacierzObrotu(x);
  for(int i=0;i<5;i++)
  {
    for(int j=0;j<4;j++)
    {
    Dron.setObrotDronax(i,j,Dron.getFigura(i).getWierzcholki(j)*Dron.getMacierzObrotu(0));
    Dron.setObrotDronay(i,j,Dron.getFigura(i).getWierzcholki(j)*Dron.getMacierzObrotu(1));
    Dron.setObrotDronaz(i,j,Dron.getFigura(i).getWierzcholki(j)*Dron.getMacierzObrotu(2));      
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
  Lacze.ZmienTrybRys(PzG::TR_3D);Lacze.Inicjalizuj();  // Tutaj startuje gnuplot.
  Lacze.UstawZakresX(-50, 100);
  Lacze.UstawZakresY(-50, 100);
  Lacze.UstawZakresZ(-100, 100);
  Lacze.UstawRotacjeXZ(69,24); // Tutaj ustawiany jest widok
  Lacze.Rysuj();        // Teraz powinno pojawic sie okienko gnuplota                      // z rysunkiem, o ile istnieje plik "prostopadloscian1.dat"
  Lacze.UsunWszystkieNazwyPlikow();
}