#include <iostream>
#include <iomanip>
#include "Wektor3D.hh"
#include "Dron.hh"
#include "Scena.hh"
#include "Figura.hh"
#include "Dno.hh"

using namespace std;
void WyswietlMenu();

int main()
{
 char tmp;
 Dno Dno;
 Powierzchnia Fala;
 Dron Podwodniak;

 Podwodniak.setDron();
 Fala.setfale();
 Dno.setDno();

 otwarcie_pliku_dron(Podwodniak);
 otwarcie_pliku_fala(Fala);
 otwarcie_pliku_dno(Dno);
 StworzScene();
 WyswietlMenu();
 while(1)
{
    cin>>tmp;
    if(tmp=='r')
    {
    zadajRuch(Podwodniak);
    if(sprawdzkolizja1faza(Podwodniak))
    break;
    }

    if(tmp=='o')
    {
    zmianaOrientacji(Podwodniak);
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
cout<<endl<<endl<<"r-zadaj ruch na wprost"<<endl
 <<"o-zadaj zmiane orientacji"<<endl
 <<"m-wyswietl menu"<<endl<<endl
 <<"k-koniec działania programu"<<endl;
}
