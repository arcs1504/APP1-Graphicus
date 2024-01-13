/********
 * Fichier: couche.h
 * Auteurs: C.-A. Brunet
 * Date: 04 janvier 2024 (creation)
 * Modifie par : ...
 * Date : ...
 * Description: Declaration de la classe pour une couche dans un
 *    canevas. La classe Couche gere un vecteur de pointeur de formes
 *    geometriques en accord avec les specifications de Graphicus.
 *    Ce fichier fait partie de la distribution de Graphicus.
********/

#ifndef COUCHE_H
#define COUCHE_H

#include "vecteur.h"

class Couche
{
	Couche();
	
	bool addShape(Forme *shape);

	Forme* removeShape(int shapeIndex);

	Forme* getShape(int shapeIndex);

	float getArea();
	
	private:
		bool initialised;
		bool active;
		bool inactive;
		Vecteur shapes;
};

#endif
