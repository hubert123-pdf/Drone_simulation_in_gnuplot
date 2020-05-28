#include <iostream>
#include <iomanip>
#include "Wektor3D.hh"
#include "Dron.hh"
#include "Scena.hh"
#include "Figura.hh"
#include "Dno.hh"
#include <vector>
#define PI 3.14159265
using namespace std;

void WyswietlMenu();

class FiguraGeometryczna
{
public:
 double ObliczPolePowierzchni();
 string zwrocNazwe();
};


class Prostokat:public FiguraGeometryczna
{

    public:
double bok1;
double bok2;
double ObliczPolePowierzchni()
{
    return bok1*bok2;
}
 string zwrocNazwe()
 {
     return "Prostokat";
 }
};


class Kolo :public FiguraGeometryczna
{
public:
double promien;
double ObliczPolePowierzchni()
{
    return PI*promien*promien;
}
 string zwrocNazwe()
 {
     return "Kolo";
 }
};

int main()
{
 vector<Kolo> kola;
 vector<Prostokat> prostokaty;

 kola.push_back(2,3);
 prostokaty.push_back({2,3},{5,6});

for(int i=0;i<kola.size();i++)
{
    cout<<i<<kola[i].zwrocNazwe();
    cout<<"Pole :"<<kola[i].ObliczPolePowierzchni();
    cout<<endl;
}

cout<<endl;

for(int i=0;i<prostokaty.size();i++)
{
    cout<<i<<prostokaty[i].ObliczPolePowierzchni();
    cout<<"Pole: "<<prostokaty[i].zwrocNazwe();
    cout<<endl;
}

    /*
 char tmp;
 Dno Dno;
 Powierzchnia Fala;
 Dron Podwodniak;
 Przeszkody Obiekty;

 Obiekty.setPrzeszkody();
 Podwodniak.setDron();
 Podwodniak.setMacierzObrotu0();
 Fala.setfale();
 Dno.setDno();
 
 otwarcie_plikow_przeszkod(Obiekty);
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
    aktualizujScene(Podwodniak);
    if(sprawdzkolizja1faza(Podwodniak))
    break;
    }

    if(tmp=='o')
    {
    zmianaOrientacji(Podwodniak);
    aktualizujScene(Podwodniak);
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
 */
 
}
