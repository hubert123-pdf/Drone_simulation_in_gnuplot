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
void otwarcie_pliku_dno(Powierzchnia Dno)
{
std::fstream plik;
plik.open("bryly/dno.dat",std::ios::out );
if(plik.good()==true)
{
 // plik<<Dno;
}
else
std::cout<<"nie udało się"<<std::endl;
plik.close();
}
void StworzScene()
{

  char znak;
  PzG::LaczeDoGNUPlota  Lacze;
  Lacze.DodajNazwePliku("bryly/dron.dat");
  Lacze.DodajNazwePliku("bryly/dno.dat");
  Lacze.ZmienTrybRys(PzG::TR_3D);Lacze.Inicjalizuj();  // Tutaj startuje gnuplot.
  Lacze.UstawZakresX(-100, 100);
  Lacze.UstawZakresY(-100, 100);
  Lacze.UstawZakresZ(-100, 100);
  Lacze.UstawRotacjeXZ(40,60); // Tutaj ustawiany jest widok
  Lacze.Rysuj();        // Teraz powinno pojawic sie okienko gnuplota
  std::cin>>znak;                      // z rysunkiem, o ile istnieje plik "prostopadloscian1.dat"
  Lacze.UsunWszystkieNazwyPlikow();
}