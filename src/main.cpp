#include <iostream>
#include <iomanip>
#include "Wektor3D.hh"
#include "Dron.hh"
#include "Scena.hh"
#include "Figura.hh"
using namespace std;


int main()
{
   
 //Powierzchnia Dno;
 Dron Podwodniak;
 Podwodniak.setDron();
 cout<<Podwodniak.getFigura(0).getSize();
 //Dno.setPowierzchniaDna();
 //otwarcie_pliku_dron(Podwodniak);
 //otwarcie_pliku_dno(Dno);
 //StworzScene();

}
