#ifndef RECTANGLE_H
#define RECTANGLE_H

#include <iostream>
#include "forme.h"

using namespace std;

class Rectangle:public Forme 
{
	public:
		Rectangle();
		~Rectangle();
		Rectangle(float width1, float length1, int x, int y);
		
		void setWidth(float width1);
		void setLength(float length1);
		double getWidth();
		double getLength();
		
		virtual double aire();
		virtual void afficher(ostream & s); 
		
	protected:
		float length;
		float width;

	private:		
		bool checkWidth(float width);
		bool checkLength(float length);
};
#endif
