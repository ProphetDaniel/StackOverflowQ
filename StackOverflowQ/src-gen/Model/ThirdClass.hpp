#ifndef _THIRDCLASS_HPP_
#define _THIRDCLASS_HPP_
/**
 * 
 */
//package Model;

#include "Resources\PrimitiveTypes.hpp"
#include "Resources\DataTypes.hpp"
#include "Resources\Enumerations.hpp"
#include "Resources\vectorTemplate.hpp"
// Start of user code Provide additional headers here for class ThirdClass.
// End of user code

/**
 * 
 * 
 */
/** 
 * Forward class declarations
 */
class SecondClass;

class ThirdClass 
{
// Start of user code Provide additional header members here for class ThirdClass.
// End of user code

   /******************************************
	*************  ASSOCIATIONS **************
	******************************************/
   /** \brief Representation: \<C>------->
    *
    *  Association Name: , attribute: secondclass
    */
    public: SecondClass* secondclass;


   /******************************************
	************** CONSTRUCTOR ***************
	******************************************/
    public: 
	ThirdClass(SecondClass* givenSecondclass);

   /******************************************
	************** DESTRUCTOR ****************
	******************************************/
    public: virtual ~ThirdClass();

};

#endif //_THIRDCLASS_HPP_
