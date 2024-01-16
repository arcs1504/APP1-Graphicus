/********
 * Fichier: tests.h
 * Auteurs: C.-A. Brunet
 * Date: 08 janvier 2018 (creation)
 * Description: Declaration de la classe pour les tests de Graphicus.
 *    Ce fichier peut etre adapte a vos besoins de tests. Ce fichier
 *    fait partie de la distribution de Graphicus.
********/

#ifndef TESTS_H
#define TESTS_H

#include <iostream>
#include "canevas.h"

using namespace std;

class Tests
{
public:
   // Methodes pour les tests unitaires des classes
   void tests_unitaires_formes();
   void tests_unitaires_vecteur();
   void tests_unitaires_couche();
   void tests_unitaires_canevas();
   void tests_unitaires(); // Appel de tous les tests unitaires

   // Methodes pour les tests unitaires des classes
   void tests_application_cas_01();
   void tests_application_cas_02();
   void tests_application(); // Appel de tous les tests applicatifs

   void testValidation();
};

void inserted_shape_returns_the_right_shape();

void test_insert_when_at_max_capacity_should_double_size_and_insert_item();

void test_insert_when_inserting_same_pointer_twice_should_refuse_to_insert_it();

void test_destroy_should_empty_the_array();

void test_doubleSize_should_keep_elements();

void test_destroy_should_reset_size_and_capacity_values();

void test_deleteElement_should_return_pointer_of_deleted_element();


void test_all_functions_should_refuse_to_execute_if_couche_is_not_active();

void test_getArea_should_return_total_area_of_all_the_shapes();
#endif
