#include "przeszkody.hh"
void Przeszkody::setPrzeszkody()
{
        Pret1.getWierzcholki().push_back({60,-30,-100});
        Pret1.getWierzcholki().push_back({60,-30,70});


        Pret2.getWierzcholki().push_back({20,100,50});
        Pret2.getWierzcholki().push_back({20,45,50});
   

        Blok1[0].getWierzcholki().push_back({ 30 ,-47,  -25 });
        Blok1[0].getWierzcholki().push_back({ 40 ,-47 , 50});
        Blok1[0].getWierzcholki().push_back( {40 , -37 , 50});
        Blok1[0].getWierzcholki().push_back({  30 , -37 , -25});

        Blok1[1].getWierzcholki().push_back({  30, -47 , -25});
        Blok1[1].getWierzcholki().push_back({ 40 ,-47  , -100});
        Blok1[1].getWierzcholki().push_back({ 40 , -37  , -100});
        Blok1[1].getWierzcholki().push_back({  30 , -37  ,-25});

        Blok1[2].getWierzcholki().push_back({  30, -47 , -25 });
        Blok1[2].getWierzcholki().push_back({20 ,-47  , -100});
        Blok1[2].getWierzcholki().push_back({20 , -37  , -100});
        Blok1[2].getWierzcholki().push_back({ 30  ,-37 , -25});

        Blok1[3].getWierzcholki().push_back({  30 ,-47 , -25 });
        Blok1[3].getWierzcholki().push_back({20 ,-47 , 50}); 
        Blok1[3].getWierzcholki().push_back({20  ,-37  ,50});
        Blok1[3].getWierzcholki().push_back({  30 , -37 , -25});

        Blok1[4].getWierzcholki().push_back({ 30 ,-47  ,-25});
        Blok1[4].getWierzcholki().push_back({ 40 ,-47 , 50});
        Blok1[4].getWierzcholki().push_back({ 40 , -37  ,50});
        Blok1[4].getWierzcholki().push_back({ 30 , -37 , -25});


        sciana[0].getWierzcholki().push_back({-30 ,55, 0});
        sciana[0].getWierzcholki().push_back({30, 55 ,-100});
        sciana[0].getWierzcholki().push_back({30, 55 ,-100});
        sciana[0].getWierzcholki().push_back({-30 ,55, 0});

        sciana[1].getWierzcholki().push_back({-30 ,55, -100});
        sciana[1].getWierzcholki().push_back({30 ,55, 0});
        sciana[1].getWierzcholki().push_back({30 ,55, 0});
        sciana[1].getWierzcholki().push_back({-30 ,55, -100});
        

        Blok2[0].getWierzcholki().push_back({  65, 15 , -60 });
        Blok2[0].getWierzcholki().push_back({  80, 15 , -20 });
        Blok2[0].getWierzcholki().push_back({  80, 45  ,-20 });
        Blok2[0].getWierzcholki().push_back({ 65 ,45 , -60 });

        Blok2[1].getWierzcholki().push_back({  65, 15 , -60 });
        Blok2[1].getWierzcholki().push_back({  80, 15 , -100 });
        Blok2[1].getWierzcholki().push_back({  80, 45  ,-100 });
        Blok2[1].getWierzcholki().push_back({ 65 ,45 , -60 });

        Blok2[2].getWierzcholki().push_back({  65, 15 , -60 });
        Blok2[2].getWierzcholki().push_back({  50, 15 , -100 });
        Blok2[2].getWierzcholki().push_back({  50, 45  ,-100 });
        Blok2[2].getWierzcholki().push_back({ 65 ,45 , -60 });

        Blok2[3].getWierzcholki().push_back({  65, 15 , -60 });
        Blok2[3].getWierzcholki().push_back({  50, 15 , -20 });
        Blok2[3].getWierzcholki().push_back({  50, 45  ,-20 });
        Blok2[3].getWierzcholki().push_back({ 65 ,45 , -60 });

        Blok2[4].getWierzcholki().push_back({  65, 15 , -60 });
        Blok2[4].getWierzcholki().push_back({  80, 15 , -20 });
        Blok2[4].getWierzcholki().push_back({  80, 45  ,-20 });
        Blok2[4].getWierzcholki().push_back({ 65 ,45 , -60 });

}
std::ostream& operator<<(std::ostream &Str,const Przeszkody pret)
{
   for(int i=0;i<5;i++)
   {
        Str<<pret.getBlok1(i)<<"#\n\n";
   }
   Str<<std::endl;
    for(int i=0;i<2;i++)
   {
        Str<<pret.getsciana(i)<<"#\n\n";
   }
   Str<<std::endl;
    for(int i=0;i<5;i++)
   {
        Str<<pret.getBlok2(i)<<"#\n\n";
   }

     return Str;
}
double promienBlok1()
{
  double R;
  R=10*sqrt(2);
  return R;
}

