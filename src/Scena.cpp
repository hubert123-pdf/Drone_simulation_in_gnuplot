/*!
 * \file
 * \brief Zawiera definicje metod klasy Scena oraz funkcji w tym pliku zawartych
 */
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
void otwarcie_pliku_fala(Powierzchnia Fala)
{
      std::fstream plik;
      plik.open("bryly/fala.dat",std::ios::out );
      if(plik.good()==true)
      {
        plik<<Fala;
      }
      else
      std::cout<<"nie udało się"<<std::endl;
      plik.close();
}
void otwarcie_pliku_dno(Dno Dno)
{
      std::fstream plik;
      plik.open("bryly/dno.dat",std::ios::out );
      if(plik.good()==true)
      {
        plik<<Dno;
      }
      else
      std::cout<<"nie udało się"<<std::endl;
      plik.close();
}
void otwarcie_plikow_przeszkod(Przeszkody przeszkody)
{

//Pierwszy pręt
std::fstream plik1;
plik1.open("bryly/pret1.dat",std::ios::out );
if(plik1.good()==true)
{
  plik1<<przeszkody.getPret1();
}
else
std::cout<<"nie udało się"<<std::endl;
plik1.close();

//Drugi pręt
std::fstream plik2;
plik2.open("bryly/pret2.dat",std::ios::out );
if(plik2.good()==true)
{
  plik2<<przeszkody.getPret2();
}
else
std::cout<<"nie udało się"<<std::endl;
plik2.close();

//Bloki
std::fstream plik3;
plik3.open("bryly/bloki.dat",std::ios::out );
if(plik3.good()==true)
{
  plik3<<przeszkody;
}
else
std::cout<<"nie udało się"<<std::endl;
plik3.close();
}

void Scena::StworzScene()
{
  Lacze.DodajNazwePliku("bryly/dron.dat");
  Lacze.DodajNazwePliku("bryly/fala.dat");
  Lacze.DodajNazwePliku("bryly/dno.dat");
  Lacze.DodajNazwePliku("bryly/pret1.dat");
  Lacze.DodajNazwePliku("bryly/pret2.dat");
  Lacze.DodajNazwePliku("bryly/bloki.dat");
  //Lacze.DodajNazwePliku("bryly/sruba2.dat");
  //Lacze.DodajNazwePliku("bryly/sruba1.dat");
  Lacze.ZmienTrybRys(PzG::TR_3D);
  Lacze.Inicjalizuj(); 
  Lacze.UstawZakresX(-100, 100);
  Lacze.UstawZakresY(-100, 100);
  Lacze.UstawZakresZ(-100, 100);
  Lacze.UstawRotacjeXZ(79,296);
  Lacze.Rysuj(); 
  Lacze.UsunWszystkieNazwyPlikow();      

}
void Scena::aktualizujScene()
{  
  Lacze.DodajNazwePliku("bryly/dron.dat");
  Lacze.DodajNazwePliku("bryly/fala.dat");
  Lacze.DodajNazwePliku("bryly/dno.dat");
  Lacze.DodajNazwePliku("bryly/pret1.dat");
  Lacze.DodajNazwePliku("bryly/pret2.dat");
  Lacze.DodajNazwePliku("bryly/bloki.dat");
 // Lacze.DodajNazwePliku("bryly/graniastoslup-osX.dat");
  Lacze.ZmienTrybRys(PzG::TR_3D);
  Lacze.Rysuj();  
  Lacze.UsunWszystkieNazwyPlikow();
}

bool sprawdzKolizja(Dron Dron, Dno Dno,Powierzchnia Fala,Przeszkody Obiekty)
{
  for(int i=0;i<18;i++)
  {
  if(Dno.CzyKolizja(Dron.getFigura(i)))
  {
  std::cout<<"Mozliwosc kolizji... zatrzymanie drona."<<std::endl;
  return true;
  }
  
  if(Dron.CzyKolizja(Dron.getFigura(i)))
  {
  std::cout<<"Mozliwosc kolizji... zatrzymanie drona."<<std::endl;
  return true;
  }
  if(Fala.CzyKolizja(Dron.getFigura(i)))
  {
  std::cout<<"Dron wyplynal z wody..."<<std::endl;
  return true;
  }

  }
  return false;
}
