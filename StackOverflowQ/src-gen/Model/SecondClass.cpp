/**
 * 
 */
//package Model;

#include "SecondClass.hpp"
#include "..\Model\FirstClass.hpp"


// Start of user code Provide additional includes here for class SecondClass.
// End of user code

/**
 * \authors Daniel Kaminski de Souza
 * \authors Marcelo Giesteira Campani
 */
// Start of user code Provide additional source members here for class SecondClass.
// End of user code

SecondClass::SecondClass(aVector<FirstClass*>*  givenFirstclassList, int givenH, int givenW)

{
	this->firstclassList = givenFirstclassList;

	this->H = givenH;

	this->W = givenW;

}

SecondClass::~SecondClass()
{
	firstclassList->erase();
	delete firstclassList;
}

void SecondClass::load()
{
// Start of user code for operation load without return of the class SecondClass.
// TO_DO operation SecondClass::load should be implemented.
// End of user code
}

