#ifndef CARREE_H
#define CARREE_H

#include <iostream>
#include "rectangle.h"

class carree:public Rectangle
{
	public:
		carree();
		~carree();
		carree(int x, int y, int cote);
		
		bool checkCote (int cote);
		void getCote (int cote1);
		int vraiCote();
		
		virtual double aire();
		virtual void afficher(ostream & s);
		
		
		
		
	protected:
		int cote;

};
#endif
