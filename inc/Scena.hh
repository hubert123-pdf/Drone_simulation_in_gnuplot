#ifndef SCENA_HH
#define SCENA_HH
#include "Dno.hh"
#include "Dron.hh"
#include "lacze_do_gnuplota.hh"
#include "Figura.hh"
#include "Powierzchnia.hh"
#include <iomanip>
#include <fstream>
#include <unistd.h>
#include "przeszkody.hh"


class Scena
{
PzG::LaczeDoGNUPlota  Lacze;
    public:

/*
* Stworzenie sceny wraz z przeszkodami
*/
    void StworzScene();
/*
* zmiana położenia drona po każdym wykonanym ruchu
*/
    void aktualizujScene();
};
/*
* funkcje wypisujące wartości wierzchołków do plików .dat
*/
void otwarcie_pliku_dron(Dron Dron);
void otwarcie_pliku_fala(Powierzchnia Fala);
void otwarcie_pliku_dno(Dno Dno);
void otwarcie_plikow_przeszkod(Przeszkody przeszkody);


/*
* sprawdzenie kolizji z dnem i wypłynięcie drona 
*/
bool sprawdzkolizja1faza(Dron Dron);


#endif 