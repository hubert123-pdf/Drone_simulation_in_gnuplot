#ifndef SCENA_HH
#define SCENA_HH
#include "Dron.hh"
#include "lacze_do_gnuplota.hh"
#include <iostream>
#include <iomanip>

using namespace std;
void StworzScene()
{

  char znak;
  PzG::LaczeDoGNUPlota  Lacze;
    Lacze.DodajNazwePliku("bryly/blok.dat");
  Lacze.ZmienTrybRys(PzG::TR_3D);Lacze.Inicjalizuj();  // Tutaj startuje gnuplot.
  Lacze.UstawZakresX(-40, 100);
  Lacze.UstawZakresY(-90, 90);
  Lacze.UstawZakresZ(-20, 90);
  Lacze.UstawRotacjeXZ(40,60); // Tutaj ustawiany jest widok
  Lacze.Rysuj();        // Teraz powinno pojawic sie okienko gnuplota
  cin>>znak;                      // z rysunkiem, o ile istnieje plik "prostopadloscian1.dat"
  cout << "Nacisnij ENTER, aby wyjsc" << flush;
  Lacze.UsunWszystkieNazwyPlikow();
}
#endif 