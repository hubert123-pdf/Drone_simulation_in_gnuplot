#include <iostream>
#include <unistd.h>
#include <iomanip>
#include "Scena.hh"

/*!
 * \file
 * \brief Główny plik w którym następuje sterowanie dronem oraz inicjalizacja sceny 
 */

using namespace std;

/*!
* \brief Myswietlanie możliwych opcji
*/
void WyswietlMenu();

int main()
{

 char tmp;

 Scena Scena;
 Dno Dno;
 Powierzchnia Fala;
 Dron Podwodniak;
 Przeszkody Obiekty;


 Obiekty.setPrzeszkody();
 Podwodniak.setDron();
 Fala.setfale();
 Dno.setDno();
 

 otwarcie_plikow_przeszkod(Obiekty);
 otwarcie_pliku_dron(Podwodniak);
 otwarcie_pliku_fala(Fala);
 otwarcie_pliku_dno(Dno);


 Scena.StworzScene();
 WyswietlMenu();
 while(1)
{
    cout<<"Twoj wybor --> ";
    cin>>tmp;
    if(tmp=='r')
    {
    Podwodniak.PrzesunDrona();
    for(int i=1;i<200;i++)
    {
    zadajRuch(Podwodniak);
    otwarcie_pliku_dron(Podwodniak);
    Scena.aktualizujScene(); 
    usleep(8000);
    if(sprawdzKolizja(Podwodniak,Dno,Fala,Obiekty))
    {
    ZatrzymajDrona(Podwodniak);
    otwarcie_pliku_dron(Podwodniak);
    break;
    }
    }
    }

    if(tmp=='o')
    {
    Podwodniak.obrocDrona();
    zmianaOrientacji(Podwodniak);
    otwarcie_pliku_dron(Podwodniak);
    Scena.aktualizujScene(); 
    }

    if(tmp=='m')
    {
    WyswietlMenu();
    }

    if(tmp=='k')
    break;
    
}
cout<<endl<<"Koniec działania programu"<<endl;
return 0;
}

void WyswietlMenu()
{
cout<<endl<<endl
 <<"r-zadaj ruch na wprost"<<endl
 <<"o-zadaj zmiane orientacji"<<endl
 <<"m-wyswietl menu"<<endl
 <<"k-koniec działania programu"<<endl<<endl;
}
