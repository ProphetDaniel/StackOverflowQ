#ifndef _FOURTHCLASS_HPP_
#define _FOURTHCLASS_HPP_
/**
 * 
 */
//package Model;

#include "ThirdClass.hpp"
#include "Resources\PrimitiveTypes.hpp"
#include "Resources\DataTypes.hpp"
#include "Resources\Enumerations.hpp"
#include "Resources\vectorTemplate.hpp"
// Start of user code Provide additional headers here for class FourthClass.
// End of user code

/**
 * 
 * 
 */
/** 
 * Forward class declarations
 */

class FourthClass : public ThirdClass
{
// Start of user code Provide additional header members here for class FourthClass.
// End of user code
   /******************************************
	*************  OWNED ATTRIBUTES **********
	******************************************/
   /**
    *  The title attribute.
    */
	private: string title;
	

   /******************************************
	************** CONSTRUCTOR ***************
	******************************************/
    public: 
	FourthClass(SecondClass* givenSecondclass, string givenTitle);

   /** \brief OPERATION addTextFile.
    *
    *
    */
	public: void addTextFile();
};

#endif //_FOURTHCLASS_HPP_
