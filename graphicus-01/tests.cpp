/********
 * Fichier: tests.cpp
 * Auteurs: C.-A. Brunet
 * Date: 08 janvier 2018 (creation)
 * Description: Implementation des methodes des classes decrites dans
 *    tests.h.  Ce fichier peut etre adapte a vos besoins de tests. 
 *    Ce fichier fait partie de la distribution de Graphicus.
********/

#include "tests.h"
#include "cercle.h"
#include <iostream>

void Tests::tests_unitaires_formes()
{
   // Tests sur les formes geometriques
}


void Tests::tests_unitaires_vecteur()
{
	inserted_shape_returns_the_right_shape();

	test_insert_when_at_max_capacity_should_double_size_and_insert_item();

	test_insert_when_inserting_same_pointer_twice_should_refuse_to_insert_it();

	test_destroy_should_empty_the_array();
}

void Tests::tests_unitaires_couche()
{
   // Tests sur la classe Couche
}

void Tests::tests_unitaires_canevas()
{
   // Tests sur la classe Canevas
}

void Tests::tests_unitaires()
{
   // Fait tous les tests unitaires
   tests_unitaires_formes();
   tests_unitaires_vecteur();
   tests_unitaires_couche();
   tests_unitaires_canevas();
}

void Tests::tests_application()
{
   // Fait tous les tests applicatifs
   tests_application_cas_01();
   tests_application_cas_02();
}

void Tests::tests_application_cas_01()
{
   cout << "TESTS APPLICATION (CAS 01)" << endl; 
   // Il faut ajouter les operations realisant ce scenario de test.
}

void Tests::tests_application_cas_02()
{
   cout << "TESTS APPLICATION (CAS 02)" << endl;  
    // Il faut ajouter les operations realisant ce scenario de test.
}

//*******************************Tests sur les vecteur**********************************************//
void inserted_shape_returns_the_right_shape()
{
	Vecteur testVecteur;
	
	Cercle *cercle1 = new Cercle(10, 5, 5);

	if(testVecteur.insert(cercle1))
	{
		Cercle *result = (Cercle*)testVecteur.getShape(0);
		if (result->getRayon() == 10)
		{
			std::cout << "Success" << endl;
		}
		else
		{
			std::cout << "Fail: Expected Rayon to be 10 but was " << result->getRayon() << endl;
		}
	}

	delete cercle1;
	
}

void test_insert_when_at_max_capacity_should_double_size_and_insert_item()  
{
	Vecteur testVecteur;

	int number_of_loops = testVecteur.capacity() + 1;

	int initialCapacity = testVecteur.capacity();

	for(int i = 0; i < number_of_loops; i++)
	{
		testVecteur.insert(new Cercle);
	}

	if(testVecteur.size() == number_of_loops && testVecteur.capacity() == initialCapacity * 2)
	{
		cout << "Success" << endl;
	}
	else
	{
		cout << "Fail" << endl;
		cout << "Expected size: " << number_of_loops << " Actual: " << testVecteur.size() << endl;
		cout << "Expected capacity: " << initialCapacity * 2 << " Actual: " << testVecteur.capacity() << endl;
	}

	testVecteur.destroy();
}

void test_insert_when_inserting_same_pointer_twice_should_refuse_to_insert_it()
{
	Vecteur testVecteur;

	Cercle *cercle1 = new Cercle;

	testVecteur.insert(cercle1);
	if(testVecteur.insert(cercle1))
	{
		cout << "Fail: Wasn't supposed to accept the same pointer" << endl;
	}
	else
	{
		cout << "Success" << endl;
	}
}

void test_destroy_should_empty_the_array()
{
	Vecteur testVecteur;

	int numberOfLoops = 15;

	for(int i = 0; i < numberOfLoops; i++)
	{
		Cercle *cercle = new Cercle(3, 5, 7);
		testVecteur.insert(cercle);
	}

//	testVecteur.destroy();

	for(int i = 0; i < numberOfLoops; i++)
	{
		//Cercle* cercle = (Cercle*)testVecteur.getShape(i);
		cout << testVecteur.getShape(i) << endl;

		if(testVecteur.getShape(i) != NULL)
		{
			cout << "Fail: The array isn't NULL" << endl;
			return;
		}
	}

	cout << "Success";
}
