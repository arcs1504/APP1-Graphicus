#include <cercle.h>
#include <math.h>

Cercle::Cercle(float rayon, int x, int y):Forme(x, y)
{
	setRayon(rayon);
	Coordonnee ancrageCercle;
	ancrageCercle.x = x;
	ancrageCercle.y = y;
	setAncrage(ancrageCercle);
}

double Cercle::aire() 
{
	return M_PI * rayon * rayon;
}
