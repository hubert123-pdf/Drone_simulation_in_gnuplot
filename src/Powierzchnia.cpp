
/*!
 * \file
 * \brief Zawiera definicje metod klasy Powierzchnia
 */
 #include "Powierzchnia.hh"

void Powierzchnia::setfale()
{
fala[0].getWierzcholki().push_back({-40, -90, 85});
fala[0].getWierzcholki().push_back({-20, -90, 90});
fala[0].getWierzcholki().push_back({0,   -90 ,85});
fala[0].getWierzcholki().push_back({20,  -90, 90});
fala[0].getWierzcholki().push_back({40,  -90 ,85});
fala[0].getWierzcholki().push_back({60,  -90 ,90});
fala[0].getWierzcholki().push_back({80,  -90, 85});
fala[0].getWierzcholki().push_back({100, -90, 90});

fala[1].getWierzcholki().push_back({-40, -70, 85});
fala[1].getWierzcholki().push_back({-20 ,-70, 90});
fala[1].getWierzcholki().push_back({ 0,  -70, 85});
fala[1].getWierzcholki().push_back({20 , -70, 90});
fala[1].getWierzcholki().push_back({40  ,-70, 85});
fala[1].getWierzcholki().push_back({60,  -70, 90});
fala[1].getWierzcholki().push_back({80 , -70, 85});
fala[1].getWierzcholki().push_back({100 ,-70, 90});

fala[2].getWierzcholki().push_back({-40, -50, 85});
fala[2].getWierzcholki().push_back({-20 ,-50, 90});
fala[2].getWierzcholki().push_back({0,   -50, 85});
fala[2].getWierzcholki().push_back({20,  -50, 90});
fala[2].getWierzcholki().push_back({40 , -50, 85});
fala[2].getWierzcholki().push_back({60 , -50, 90});
fala[2].getWierzcholki().push_back({80 , -50, 85});
fala[2].getWierzcholki().push_back({100 ,-50, 90});

fala[3].getWierzcholki().push_back({-40, -30, 85});
fala[3].getWierzcholki().push_back({-20 ,-30, 90});
fala[3].getWierzcholki().push_back({0,   -30, 85});
fala[3].getWierzcholki().push_back({20,  -30, 90});
fala[3].getWierzcholki().push_back({40 , -30, 85});
fala[3].getWierzcholki().push_back({60 , -30, 90});
fala[3].getWierzcholki().push_back({80 , -30, 85});
fala[3].getWierzcholki().push_back({100 ,-30, 90});

fala[4].getWierzcholki().push_back({-40, -10, 85});
fala[4].getWierzcholki().push_back({-20, -10, 90});
fala[4].getWierzcholki().push_back({0  , -10, 85});
fala[4].getWierzcholki().push_back({20 , -10, 90});
fala[4].getWierzcholki().push_back({40 , -10, 85});
fala[4].getWierzcholki().push_back({60 , -10, 90});
fala[4].getWierzcholki().push_back({80 , -10, 85});
fala[4].getWierzcholki().push_back({100 ,-10, 90});

fala[5].getWierzcholki().push_back({-40 , 10, 85});
fala[5].getWierzcholki().push_back({-20 , 10, 90});
fala[5].getWierzcholki().push_back({0  ,  10, 85});
fala[5].getWierzcholki().push_back({20 ,  10, 90});
fala[5].getWierzcholki().push_back({40 ,  10, 85});
fala[5].getWierzcholki().push_back({60 ,  10, 90});
fala[5].getWierzcholki().push_back({80 ,  10, 85});
fala[5].getWierzcholki().push_back({100 , 10, 90});

fala[6].getWierzcholki().push_back({-40 , 30, 85});
fala[6].getWierzcholki().push_back({-20 , 30, 90});
fala[6].getWierzcholki().push_back({0   , 30, 85});
fala[6].getWierzcholki().push_back({20 ,  30, 90});
fala[6].getWierzcholki().push_back({40 ,  30, 85});
fala[6].getWierzcholki().push_back({60 ,  30, 90});
fala[6].getWierzcholki().push_back({80 ,  30, 85});
fala[6].getWierzcholki().push_back({100 , 30, 90});

fala[7].getWierzcholki().push_back({-40 , 50, 85});
fala[7].getWierzcholki().push_back({-20 , 50, 90});
fala[7].getWierzcholki().push_back({0   , 50, 85});
fala[7].getWierzcholki().push_back({20  , 50, 90});
fala[7].getWierzcholki().push_back({40  , 50, 85});
fala[7].getWierzcholki().push_back({60  , 50, 90});
fala[7].getWierzcholki().push_back({80  , 50, 85});
fala[7].getWierzcholki().push_back({100 , 50 ,90});

fala[8].getWierzcholki().push_back({-40,  70, 85});
fala[8].getWierzcholki().push_back({-20,  70, 90});
fala[8].getWierzcholki().push_back({0  ,  70, 85});
fala[8].getWierzcholki().push_back({20 ,  70, 90});
fala[8].getWierzcholki().push_back({40 ,  70 ,85});
fala[8].getWierzcholki().push_back({60 ,  70 ,90});
fala[8].getWierzcholki().push_back({80 ,  70 ,85});
fala[8].getWierzcholki().push_back({100,  70 ,90});

fala[9].getWierzcholki().push_back({-40 , 90, 85});
fala[9].getWierzcholki().push_back({-20 , 90, 90});
fala[9].getWierzcholki().push_back({0   , 90, 85});
fala[9].getWierzcholki().push_back({20  , 90, 90});
fala[9].getWierzcholki().push_back({40  , 90, 85});
fala[9].getWierzcholki().push_back({60  , 90, 90});
fala[9].getWierzcholki().push_back({80  , 90, 85});
fala[9].getWierzcholki().push_back({100 , 90, 90});
}

std::ostream& operator<<(std::ostream &Str,const Powierzchnia powierzchnia)
{
    for(int i=0;i<10;i++)
    {
       Str<<powierzchnia.getFigura2(i)<<"#\n\n";
    }
    return Str;
}
bool Powierzchnia::CzyKolizja(Figura Fig)
{
    for(int i=0;i<Fig.getSize();i++)
    {
    if(Fig[i].z>=90)
    {
        return true;
    }
    }
return false;
}
