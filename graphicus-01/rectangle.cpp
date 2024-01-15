#include <iostream>
#include "rectangle.h"


using namespace std;

Rectangle::Rectangle()
{
	width = 1;
	length = 1;
	ancrage.x = 0;
	ancrage.y = 0;
}

Rectangle::Rectangle(float width1, float length1, int x, int y)
{
	ancrage.x = x;
	ancrage.y = y;
	length = length1;
	width = width1;
	
}

Rectangle::~Rectangle()
{

}

bool Rectangle::checkWidth(float width)
{
	if (width < 0)
	{
		return false;
	}
	else
	{
		return true;
	}
}

void Rectangle::setWidth(float width1)
{
	if (checkWidth(width1) == true) 
	{
		width = width1;
		
	}
	else
	{
		cout << "Largeur invalide" << endl;
	}

}
bool Rectangle::checkLength(float length)
{
	if(length < 0)
	{
		return false;
	}
	else
	{
		return true;
	}
}

void Rectangle::setLength(float length1)
{
	if(checkLength(length1) == true )
	{
		length = length1;
	}
	else
	{
		cout << "Longueur invalide" << endl;
	}
}

double Rectangle::getWidth()
{
	return width;
}

double Rectangle::getLength()
{
	return length;
}

double Rectangle::aire()
{
	return length * width;
}

void Rectangle::afficher(ostream & s)
{	
	s << "Rectangle (x=" << ancrage.x << ", y=" << ancrage.y << ", l=" << getLength() << ", h=" << getWidth() << ", aire=" << aire() << ")" << endl;
}
