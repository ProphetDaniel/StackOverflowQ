/**
 * 
 */
//package Model;

#include "ThirdClass.hpp"
#include "..\Model\SecondClass.hpp"


// Start of user code Provide additional includes here for class ThirdClass.
// End of user code

/**
 * \authors Daniel Kaminski de Souza
 * \authors Marcelo Giesteira Campani
 */
// Start of user code Provide additional source members here for class ThirdClass.
// End of user code

ThirdClass::ThirdClass(SecondClass* givenSecondclass)

{
	this->secondclass = givenSecondclass;

}

ThirdClass::~ThirdClass()
{
	delete secondclass;
}


