/********
 * Fichier: couche.cpp
 * Auteurs: C.-A. Brunet
 * Date: 04 janvier 2024 (creation)
 * Modifie par : ...
 * Date : ...
 * Description: Implementation des methodes des classes decrites dans
 *    couche.h. Ce fichier fait partie de la distribution de Graphicus.
********/

#include "couche.h"
#include "vecteur.h"

Couche::Couche()
{
	initialised = true;	
}

bool Couche::addShape(Forme *shape)
{
	shapes.insert(shape);

	return true;
}

Forme* Couche::removeShape(int shapeIndex)
{
	if(shapeIndex < 0)
	{
		Forme *error = {nullptr};
		return error;
	}
	return shapes.deleteElement(shapeIndex);	
}

Forme* Couche::getShape(int shapeIndex)
{
	if(shapeIndex < 0)
	{
		Forme *error = {nullptr};
		return error;
	}
	return shapes.getShape(shapeIndex);
}

float Couche::getArea()
{
	int area;

	for(int i = 0; i < shapes.size(); i++)
	{
			
	}
}





































