/********
 * Fichier: canevas.cpp
 * Auteurs: C.-A. Brunet
 * Date: 04 janvier 2024 (creation)
 * Modifie par : ...
 * Date : ...
 * Description: Implementation des methodes des classes decrites dans
 *    canevas.h. Ce fichier fait partie de la distribution de Graphicus.
********/

#include "canevas.h"

Canevas::Canevas()
{
	
	couches[0].changeState(1);
	
}

Canevas::~Canevas()
{
}

bool Canevas::reinitialiser()
{
	activerCouche(0);
	for(int i=0; i<MAX_COUCHES; i++)
	{
		if(couches[i].initialised) //!= initialised)
		{
			couches[i].reset();
		}
		
	}	
   return true;
}

bool Canevas::reinitialiserCouche(int index)
{
	if(couches[index].active == true && index < MAX_COUCHES)
	{
		return couches[index].reset();
	}

   return false;
}

bool Canevas::activerCouche(int index)
{
	for(int i=0; i<MAX_COUCHES; i++)
	{
		if(couches[i].active)
		{
			couches[i].changeState(2);
		}
	}
	
	couches[index].changeState(1);

   return true;
}

bool Canevas::desactiverCouche(int index)
{
	couches[index].changeState(2);
	
   return true;
}

bool Canevas::ajouterForme(Forme *p_forme)
{
	for (int i=0; i<MAX_COUCHES; i++)
	{
		if (couches[i].active)// == active)
		{
			couches[i].addShape(p_forme);
		}
	}
		return true;

}

bool Canevas::retirerForme(int index)
{
	for(int i=0; i<MAX_COUCHES; i++)
	{
		if(couches[i].active)
		{
			couches[i].removeShape(index);
		}
	}

   return true;
}

double Canevas::aire()
{
	double aire=0.0;
	for(int i=0; i<MAX_COUCHES; i++)
	{
		aire=aire+couches[i].getArea();
	}
   return aire;
}

bool Canevas::translater(int deltaX, int deltaY)
{
	for(int i=0; i<MAX_COUCHES;i++)
	{
		if(couches[i].active == true)
		{
			couches[i].translaterFormes(deltaX, deltaY);
		}
	}

	return true;
}

void Canevas::afficher(ostream & s)
{
	for(int i=0; i<MAX_COUCHES;i++)
	{
		cout << "----------Couche " << i << "----------" << endl;
		couches[i].print(s);
	}
}
