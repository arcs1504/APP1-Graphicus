#include "forme.h"

class Vecteur
{
	public:
		Vecteur();

		bool insert(Forme *forme);

		Forme* deleteElement(int deleteIndex);

		Forme* getShape(int shapeIndex);

		int capacity()
		{ return arraySize; };

		int size()
		{ return nbElements; };

		bool isEmpty();

		void destroy();

		void print();

		void doubleSize();		

		Forme* *formes;

	private:
		int arraySize;
		int nbElements;
		const int initialArraySize = 2;
};
