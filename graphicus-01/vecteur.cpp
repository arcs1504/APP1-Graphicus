#include "vecteur.h"
#include <iostream>

Vecteur::Vecteur()
{
	arraySize = initialArraySize;
	formes = new Forme*[arraySize];
	nbElements = 0;
}

void Vecteur::doubleSize()
{
	arraySize = arraySize * 2;

	Forme* *newFormes = new Forme*[arraySize];

	formes = newFormes;
}

bool Vecteur::insert(Forme *forme)
{
	for(int i = 0; i < nbElements; i++)
	{
		if(formes[i] == forme)
		{
			return false;
		}
	}

	if(arraySize == nbElements)
	{
		doubleSize();
	}

	formes[nbElements] = forme;
	nbElements++;

	return true;
}

Forme* Vecteur::deleteElement(int deleteIndex)
{
	if(deleteIndex < 0)
	{
		Forme *error {nullptr};
		return error;
	}

	Forme* *newFormes = new Forme*[arraySize];		

	Forme* deletedShape;

	for(int i = 0; i < nbElements; i++)
	{
		if (i == deleteIndex)
		{
			deletedShape = newFormes[i];
		}
		else
		{	
			newFormes[i] = formes[i];
		}
	}

	formes = newFormes;
	nbElements--;	

	return deletedShape;
}

Forme* Vecteur::getShape(int shapeIndex)
{
	if (shapeIndex < 0) //Plus grand que capacite???
	{
		Forme* error {nullptr};
		return error;	
	}

	return formes[shapeIndex];		
}

void Vecteur::print()
{
	for(int i = 0; i < nbElements; i++)
	{
		cout << formes[i];
	}
}

bool Vecteur::isEmpty()
{
	return nbElements == 0;
}

void Vecteur::destroy()
{
	for(int i = 0; i < nbElements; i++)
	{
		delete formes[i];
		formes[i] = NULL;
	}

	delete formes;

//formes = new Forme*[initialArraySize];
//
//	arraySize = initialArraySize;
//	nbElements = 0;
}

