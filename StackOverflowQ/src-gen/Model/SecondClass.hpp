#ifndef _SECONDCLASS_HPP_
#define _SECONDCLASS_HPP_
/**
 * 
 */
//package Model;

#include "Resources\PrimitiveTypes.hpp"
#include "Resources\DataTypes.hpp"
#include "Resources\Enumerations.hpp"
#include "Resources\vectorTemplate.hpp"
// Start of user code Provide additional headers here for class SecondClass.
// End of user code

/**
 * \authors Daniel Kaminski de Souza
 * \authors Marcelo Giesteira Campani
 */
/** 
 * Forward class declarations
 */
class FirstClass;

class SecondClass 
{
// Start of user code Provide additional header members here for class SecondClass.
// End of user code
   /******************************************
	*************  OWNED ATTRIBUTES **********
	******************************************/
   /**
    *  The H attribute.
    */
	private: int H;
	

   /**
    *  The W attribute.
    */
	private: int W;
	

   /******************************************
	*************  ASSOCIATIONS **************
	******************************************/
   /** \brief Representation: \<C>------->
    *
    *  Association Name: , attribute: firstclass
    */
    public: aVector<FirstClass*>* firstclassList;


   /******************************************
	************** CONSTRUCTOR ***************
	******************************************/
    public: 
	SecondClass(aVector<FirstClass*>*  givenFirstclassList, int givenH, int givenW);

   /******************************************
	************** DESTRUCTOR ****************
	******************************************/
    public: ~SecondClass();

   /** \brief OPERATION load.
    *
    *
    */
	public: void load();
};

#endif //_SECONDCLASS_HPP_
