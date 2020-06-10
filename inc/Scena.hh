#ifndef SCENA_HH
#define SCENA_HH
#include "Dno.hh"
#include "Dron.hh"
#include "lacze_do_gnuplota.hh"
#include "Powierzchnia.hh"
#include <iomanip>
#include <fstream>
#include <unistd.h>
#include "przeszkody.hh"
/*!
*\file
*\brief Zawiera definicję klasy Scena
*
* Plik zawiera definicję klasy Scena która pozwala stworzyć 
* jedną scenę dla wszystkich obiektów, łącząc się jednocześnie z 
* programem \e gnuplot. Ponadto klasa pozwala sprawdzić czy nie doszło
* do kolizji między obiektami oraz umożliwia wypisanie wierzchołków figur 
* do odpowiednich plików.
*/

/*!
*\brief Klasa umożliwiająca stworzenie sceny oraz jej aktualizaje.
*/
class Scena
{
PzG::LaczeDoGNUPlota  Lacze;

public:
/*!
* \brief Stworzenie Układu wspórzędnych 3D.
*
* Funkcja stwarza układa 3D ze wszystkimi elementami dzidziczącymi z klasy Figura.
* Następuje również odpowiednie ustawienie widoku oraz zakresu.
*/
    void StworzScene();
/*!
* \brief Zmiana położenia drona po każdym wykonanym ruchu
*/
    void aktualizujScene();
};
/*!
* \brief Funkcja wypisujące wartości wierzchołków Drona do plików .dat
*/
void otwarcie_pliku_dron(Dron Dron);
/*!
* \brief Funkcja wypisujące wartości wierzchołków fali do plików .dat
*/
void otwarcie_pliku_fala(Powierzchnia Fala);
/*!
* \brief Funkcja wypisujące wartości wierzchołków Dna do plików .dat
*/
void otwarcie_pliku_dno(Dno Dno);
/*!
* \brief Funkcja wypisujące wartości wierzchołków wszystkich przeszkód do plików .dat
*/
void otwarcie_plikow_przeszkod(Przeszkody przeszkody);


/*!
* \brief Sprawdzenie czy doszło do klizji
*
* Funkcja ta sprawdza czy doszło do kolizji Drona z jakąkolwiek płaszczyzną
*/
bool sprawdzKolizja(Dron Dron,Dno Dno,Powierzchnia Fala, Przeszkody obietky);

#endif 