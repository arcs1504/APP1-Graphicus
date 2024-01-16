#ifndef CERCLE_H
#define CERCLE_H

#include "forme.h"
#include <math.h>
#include <iostream>

class Cercle:public Forme
{
	public:
		Cercle();
		Cercle(float rayon, int x, int y);
		~Cercle();

		void setRayon(float rayon1)
		{ rayon = rayon1; }

		float getRayon() const
		{ return rayon; };

		virtual double aire();

		virtual void afficher(ostream &s);
		
	protected:
		float rayon;

	private:
		bool checkValue(double value);
};
#endif
