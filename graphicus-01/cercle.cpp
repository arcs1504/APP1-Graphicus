#include "cercle.h"
#include <iostream>

Cercle::Cercle()
{
	rayon = 1;
	ancrage.x = 0;
	ancrage.y = 0;
}

Cercle::Cercle(float rayon, int x, int y):Forme(x, y)
{
	if (checkValue(rayon))
	{
		setRayon(rayon);
	}
	else
	{	
		std::cout << "rayon is negative";
	}
	Coordonnee ancrageCercle; //les 4 prochaines lignes sont elles utiles?
	ancrageCercle.x = x;
	ancrageCercle.y = y;
	setAncrage(ancrageCercle);
}

Cercle::~Cercle()
{
}

bool Cercle::checkValue(double value)
{
	if(value < 0)
	{
		return false;
	}
	else 
	{
		return true;
	}
}

double Cercle::aire()
{
	return M_PI * rayon * rayon;
}

void Cercle::afficher(ostream &s)
{
	s << "Cercle (x=" << ancrage.x << ", y=" << ancrage.y << ", r=" << rayon << ", aire=" << aire() << ")" << endl;
}
