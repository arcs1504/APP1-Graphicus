#ifndef CERCLE_H
#define CERCLE_H

#include <forme.h>

class Cercle:public Forme
{
	public:
		Cercle(float rayon, int x, int y);

		void setRayon(float rayon1)
		{ rayon = rayon1; }

		float getRayon() const
		{ return rayon; };
	
		virtual double aire(); 
		
	protected:
		float rayon;
};




#endif
