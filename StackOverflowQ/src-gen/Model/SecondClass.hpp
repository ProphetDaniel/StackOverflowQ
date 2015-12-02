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
 * 
 * 
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
    public: FirstClass** firstclassArray;


   /******************************************
	************** CONSTRUCTOR ***************
	******************************************/
    public: 
	SecondClass(FirstClass* givenFirstclassArray[], int givenH, int givenW);

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
