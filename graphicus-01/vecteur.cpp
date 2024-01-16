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

	for(int i = 0; i < nbElements; i++)
	{
		newFormes[i] = formes[i];
	}

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
	if(deleteIndex < 0 || deleteIndex > size())
	{
		Forme *error {nullptr};
		return error;
	}

	Forme* *newFormes = new Forme*[arraySize];		

	Forme* deletedShape;

	bool hasBeenDeleted = false;

	for(int i = 0; i < nbElements; i++)
	{
		if (i == deleteIndex)
		{
			deletedShape = formes[i];
			hasBeenDeleted = true;
		}
		else if(hasBeenDeleted)
		{	
			newFormes[i - 1] = formes[i];
		}
		else
		{
			newFormes[i] = formes[i];
		}
	}

	for(int i = 0; i < nbElements - 1; i++)
	{
		formes[i] = newFormes[i];
	}
	
	nbElements--;	

	delete[] newFormes;

	return deletedShape;
}

Forme* Vecteur::getShape(int shapeIndex)
{
	if (shapeIndex < 0 || shapeIndex > size())
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
	for(int i = 0; i < nbElements; i++) //Delete shapes
	{
		delete formes[i];
	}

	delete formes;

	formes = new Forme*[initialArraySize];

	arraySize = initialArraySize;
	nbElements = 0;
}
