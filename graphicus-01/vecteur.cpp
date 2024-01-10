#include "vecteur.h"
#include "cercle.h"

void Vecteur::createNewCercle(float rayon, int x, int y)
{
	Cercle *newCercle = new Cercle(rayon, x, y);

}
