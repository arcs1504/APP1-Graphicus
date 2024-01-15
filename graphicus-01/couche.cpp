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

Couche::Couche()
{
	initialised = true;	
}

Couche::~Couche()
{
}

bool Couche::addShape(Forme *shape)
{
	if(shapes.insert(shape))
	{
		return true;
	}
	else
	{
		return false;
	}
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
	float area;

	for(int i = 0; i < shapes.size(); i++)
	{
		area = ((shapes.getShape(i))->aire()) + area;	
	}

	return area;
}





































