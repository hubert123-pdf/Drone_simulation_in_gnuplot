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




void otwarcie_pliku_dron(Dron Podwodniak);
void otwarcie_pliku_fala(Powierzchnia Fala);
void otwarcie_pliku_dno(Dno Dno);
void StworzScene();
void aktualizujScene();
void zmianaOrientacji(Dron &Dron);
void zadajRuch(Dron &Dron);
bool sprawdzkolizja1faza(Dron Dron);
#endif 