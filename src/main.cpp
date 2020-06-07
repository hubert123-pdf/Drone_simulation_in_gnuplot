#include <iostream>
#include <unistd.h>
#include <iomanip>
#include "Wektor3D.hh"
#include "Dron.hh"
#include "Scena.hh"
#include "Figura.hh"
#include "Dno.hh"

using namespace std;

/*
* Myswietlanie Menu
*/
void WyswietlMenu();

int main()
{
/*
 * Inicjalizacja Sceny
 */
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
 
/*
 * Wyswyietanie Sceny z plików
 */
 otwarcie_plikow_przeszkod(Obiekty);
 otwarcie_pliku_dron(Podwodniak);
 otwarcie_pliku_fala(Fala);
 otwarcie_pliku_dno(Dno);
 Scena.StworzScene();
 WyswietlMenu();

/*
* Działanie programu do momentu przerwania
*/
 while(1)
{
    cout<<"Twoj wybor --> ";
    cin>>tmp;
    /*
    * Zadawanie ruchu a następnie powne wyswietlenie sceny z animacją drona
    * oraz zatrzymanie go w przypadku kolizji.
    */
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
    /*
    * obrót drona o zadany kąt a następnie wyswietlenie sceny
    */
    Podwodniak.obrocDrona();
    zmianaOrientacji(Podwodniak);
    otwarcie_pliku_dron(Podwodniak);
    Scena.aktualizujScene(); 
    }
     /*
     * ponowne wyswietlenie menu
     */
    if(tmp=='m')
    {
    WyswietlMenu();
    }
    /*
    * koniec programu
    */
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
