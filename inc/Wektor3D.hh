#ifndef WEKTOR3D_HH
#define WEKTOR3D_HH
#include <vector>

/*!
*\file
*\brief Zawiera definicję klasy Wektor3D
* 
* Plik zawiera definicję klasy Wektor3D która przechowuje punkty
* dla każdej osi w układzie 3-wymiarowym
*/


/*!
* \brief Klasa Wektor przechowująca punkty układu 3D
*
*/
class Wektor3D
{
public:
/*!
* Wartość punktu na osi x
*/
double x;
/*!
* Wartość punktu na osi y
*/
double y;
/*!
* Wartość punktu na osi z
*/
double z;
};
#endif