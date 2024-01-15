#include <iostream>
#include "carree.h"

using namespace std;

Carree::Carree()
{
	cote = 1;
	ancrage.x = 0;
	ancrage.y = 0;
}

Carree::Carree(int cote, int x, int y)
{
	ancrage.x = x;
	ancrage.y = y;
	setCote(cote);		
}

Carree::~Carree()
{

}

bool Carree::checkCote(int cote)
{
	if (cote < 0)
	{
		return false;
	}
	else
	{
		return true;
	}
}

void Carree::setCote (int cote1)
{
	if(checkCote(cote1) == true )
	{
		cote = cote1;
	}
	else
	{
		cout << " Le coté est invalide " << endl;
	}
}

int Carree:: getCote()
{
	return cote;
}

double Carree:: aire()
{
	return cote * cote;
}

void Carree::afficher(ostream & s)
{
	s << "Carre (x=" << ancrage.x << ", y=" << ancrage.y << ", c=" << getCote() << ", aire=" << aire() << ")" << endl;
}
