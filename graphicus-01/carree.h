#ifndef CARREE_H
#define CARREE_H

#include <iostream>
#include "rectangle.h"

class Carree:public Rectangle
{
	public:
		Carree();
		~Carree();
		Carree(int cote, int x, int y);
		
		bool checkCote (int cote);
		void setCote(int cote1);
		int getCote();
		
		virtual double aire();
		virtual void afficher(ostream & s);
		
		
		
		
	protected:
		int cote;
};
#endif
