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
	active = false;
	inactive = false;
}

Couche::~Couche()
{
}

bool Couche::addShape(Forme *shape)
{
	if(active)
	{
		if(shapes.insert(shape))
		{
			return true;
		}

	}

	return false;
}

Forme* Couche::removeShape(int shapeIndex)
{
	if(shapeIndex < 0 || active == false)
	{
		Forme *error = {nullptr};
		return error;
	}
	
	return shapes.deleteElement(shapeIndex);	
}

Forme* Couche::getShape(int shapeIndex)
{
	if(shapeIndex < 0 || active == false)
	{
		Forme *error = {nullptr};
		return error;
	}

	return shapes.getShape(shapeIndex);
}

float Couche::getArea()
{
	if(active)
	{
		float area = 0;

		for(int i = 0; i < shapes.size(); i++)
		{
			area = ((shapes.getShape(i))->aire()) + area;	
		}

		return area;
	}
	else if(initialised)
	{
		return 0;
	}
}

bool Couche::translaterFormes(int translateX, int translateY)
{
	if(active)	
	{
		for(int i = 0; i < shapes.size(); i++)
		{
			if(shapes.getShape(i) == nullptr)
			{
				return false;
			}
			else
			{
				(shapes.getShape(i))->translater(translateX, translateY);
			}
		}

		return true;

	}
	else
	{
		return false;
	}
}

bool Couche::reset()
{
	shapes.destroy();

	changeState(0);

	return true;
}

bool Couche::changeState(int newState)//0 = initialised, 1 = active, 2 = active
{
	if(newState == 0)
	{
		initialised = true;
		active = false;
		inactive = false;
	}
	else if(newState == 1)
	{
		initialised = false;
		active = true;
		inactive = false;
	}
	else if(newState == 2)
	{
		initialised = false;
		active = false;
		inactive = true;
	}

	return true;
}

void Couche::print(ostream &s)
{
	if(active)
	{
		cout << "État: active" << endl;
	}
	else if(inactive)
	{
		cout << "État: inactive" << endl;
	}
	else if(initialised)
	{
		cout << "État: initialisée" << endl;
		cout << "Couche: vide" << endl;
		return;
	}
	
	for(int i = 0; i < shapes.size(); i++)
	{
		(shapes.getShape(i))->afficher(std::cout);
	}
}




































