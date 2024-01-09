/********
 * Fichier: canevas.cpp
 * Auteurs: C.-A. Brunet
 * Date: 04 janvier 2024 (creation)
 * Modifie par : ...
 * Date : ...
 * Description: Implementation des methodes des classes decrites dans
 *    canevas.h. Ce fichier fait partie de la distribution de Graphicus.
********/

#include "canevas.h"

Canevas::Canevas()
{
}

Canevas::~Canevas()
{
}

bool Canevas::reinitialiser()
{
   return true;
}

bool Canevas::reinitialiserCouche(int index)
{
   return true;
}

bool Canevas::activerCouche(int index)
{
   return true;
}

bool Canevas::desactiverCouche(int index)
{
   return true;
}

bool Canevas::ajouterForme(Forme *p_forme)
{
   return true;
}

bool Canevas::retirerForme(int index)
{
   return true;
}

double Canevas::aire()
{
   return 0.0;
}

bool Canevas::translater(int deltaX, int deltaY)
{
   return true;
}

void Canevas::afficher(ostream & s)
{
}
