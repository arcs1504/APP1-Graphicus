#include <iostream>
#include "carree.h"

using namespace std;

carree::carree()
{
	cote=1;
}

carree::carree(int x, int y, int cote)
{
	ancrage.x = x;
	ancrage.y = y;
	cote=1;
		
}

carree::~carree()
{

}

bool carree::checkCote(int cote)
{
	if ( cote < 0)
	{
		return false;
	}
	else
	{
		return true;
	}
}

void carree::getCote (int cote1)
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

int carree:: vraiCote()
{
	return cote;
}

 double carree:: aire()
{
	return cote * cote;
}

void carree::afficher(ostream & s)
{
	s << "le carrée a une aire de" << aire() << "u avec des cotés de longueure de" << cote << "avec des coordonnées de " << ancrage.x << ancrage.y << endl;
}
