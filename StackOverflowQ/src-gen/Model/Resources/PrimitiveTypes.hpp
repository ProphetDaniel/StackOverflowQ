#ifndef _PRIMITIVETYPES_HPP_
#define _PRIMITIVETYPES_HPP_

/** Includes **/
#include <stdint.h>
#include <stdbool.h>
#include <string>

using namespace std;

typedef string String;
typedef uint32_t Integer;
/**************/

typedef void Object;
// Start of user code user primitive Types
// TO_DO Primitive types should be implemented
// End of user code.

typedef enum ErrorOkEnum
{
	unknown, error, ok
}ErrorOk;


#endif //_PRIMITIVETYPES_HPP_
