#include "przeszkody.hh"
void Przeszkody::setPrzeszkody()
{
        Pret1.getWierzcholki().push_back({60,-30,-100});
        Pret1.getWierzcholki().push_back({60,-30,70});


        Pret2.getWierzcholki().push_back({20,90,50});
        Pret2.getWierzcholki().push_back({20,45,50});
   

        Blok1[0].getWierzcholki().push_back({ 30 ,-10,  -25 });
        Blok1[0].getWierzcholki().push_back({ 40 ,-10 , 50});
        Blok1[0].getWierzcholki().push_back( {40 , 10 , 50});
        Blok1[0].getWierzcholki().push_back({  30 , 10 , -25});

        Blok1[1].getWierzcholki().push_back({  30, -10 , -25});
        Blok1[1].getWierzcholki().push_back({ 40 ,-10  , -100});
        Blok1[1].getWierzcholki().push_back({ 40 , 10  , -100});
        Blok1[1].getWierzcholki().push_back({  30 , 10  ,-25});

        Blok1[2].getWierzcholki().push_back({  30, -10 , -25 });
        Blok1[2].getWierzcholki().push_back({20 ,-10  , -100});
        Blok1[2].getWierzcholki().push_back({20 , 10  , -100});
        Blok1[2].getWierzcholki().push_back({ 30  ,10 , -25});

        Blok1[3].getWierzcholki().push_back({  30 ,-10 , -25 });
        Blok1[3].getWierzcholki().push_back({20 ,-10 , 50}); 
        Blok1[3].getWierzcholki().push_back({20  ,10  ,50});
        Blok1[3].getWierzcholki().push_back({  30 , 10 , -25});

        Blok1[4].getWierzcholki().push_back({ 30 ,-10  ,-25});
        Blok1[4].getWierzcholki().push_back({ 40 ,-10 , 50});
        Blok1[4].getWierzcholki().push_back({ 40 , 10  ,50});
        Blok1[4].getWierzcholki().push_back({ 30 , 10 , -25});


        sciana[0].getWierzcholki().push_back({0 ,55, 0});
        sciana[0].getWierzcholki().push_back({40, 55 ,-100});
        sciana[0].getWierzcholki().push_back({40, 55 ,-100});
        sciana[0].getWierzcholki().push_back({0 ,55, 0});

        sciana[1].getWierzcholki().push_back({0 ,55, -100});
        sciana[1].getWierzcholki().push_back({40 ,55, 0});
        sciana[1].getWierzcholki().push_back({40 ,55, 0});
        sciana[1].getWierzcholki().push_back({0 ,55, -100});
        

        Blok2[0].getWierzcholki().push_back({  65, 15 , -60 });
        Blok2[0].getWierzcholki().push_back({  80, 15 , -20 });
        Blok2[0].getWierzcholki().push_back({  80, 50  ,-20 });
        Blok2[0].getWierzcholki().push_back({ 65 ,50 , -60 });

        Blok2[1].getWierzcholki().push_back({  65, 15 , -60 });
        Blok2[1].getWierzcholki().push_back({  80, 15 , -100 });
        Blok2[1].getWierzcholki().push_back({  80, 50  ,-100 });
        Blok2[1].getWierzcholki().push_back({ 65 ,50 , -60 });

        Blok2[2].getWierzcholki().push_back({  65, 15 , -60 });
        Blok2[2].getWierzcholki().push_back({  50, 15 , -100 });
        Blok2[2].getWierzcholki().push_back({  50, 50  ,-100 });
        Blok2[2].getWierzcholki().push_back({ 65 ,50 , -60 });

        Blok2[3].getWierzcholki().push_back({  65, 15 , -60 });
        Blok2[3].getWierzcholki().push_back({  50, 15 , -20 });
        Blok2[3].getWierzcholki().push_back({  50, 50  ,-20 });
        Blok2[3].getWierzcholki().push_back({ 65 ,50 , -60 });

        Blok2[4].getWierzcholki().push_back({  65, 15 , -60 });
        Blok2[4].getWierzcholki().push_back({  80, 15 , -20 });
        Blok2[4].getWierzcholki().push_back({  80, 50  ,-20 });
        Blok2[4].getWierzcholki().push_back({ 65 ,50 , -60 });

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