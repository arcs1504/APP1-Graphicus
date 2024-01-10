#include "forme.h"

class Vecteur
{
	public:
		void createNewRectangle();		
		void createNewSquare();		
		void createNewCercle(float rayon, int x, int y);		
	private:
		int index = 0;
		int taille;
		int nbElements;
		Forme formes[100];

		
};

