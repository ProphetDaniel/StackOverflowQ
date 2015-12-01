#ifndef _FIRSTCLASS_HPP_
#define _FIRSTCLASS_HPP_
/**
 * 
 */
//package Model;

#include "Resources\PrimitiveTypes.hpp"
#include "Resources\DataTypes.hpp"
#include "Resources\Enumerations.hpp"
#include "Resources\vectorTemplate.hpp"
// Start of user code Provide additional headers here for class FirstClass.
// End of user code

/**
 * 
 * 
 */
/** 
 * Forward class declarations
 */

class FirstClass 
{
// Start of user code Provide additional header members here for class FirstClass.
// End of user code
   /******************************************
	*************  OWNED ATTRIBUTES **********
	******************************************/
   /**
    *  The x attribute.
    */
	private: int x;
	

   /**
    *  The y attribute.
    */
	private: int y;
	

   /**
    *  The z attribute.
    */
	private: int z;
	

   /******************************************
	************** CONSTRUCTOR ***************
	******************************************/
    public: 
	FirstClass(int givenX, int givenY, int givenZ);

};

#endif //_FIRSTCLASS_HPP_
