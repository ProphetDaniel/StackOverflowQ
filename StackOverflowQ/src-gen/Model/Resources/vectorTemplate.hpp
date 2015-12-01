#ifndef _VECTORTEMPLATE_HPP_
#define _VECTORTEMPLATE_HPP_


#include "PrimitiveTypes.hpp"
#include <stdint.h>
template<typename T>
class aVector
{
protected:
	T* itsArray;
public:
	uint8_t size;
	template<typename... Values>
	aVector(const Values&... values)
	{
		T tsArray[] = {values...};
		size = sizeof...(values);
		itsArray = new T[size];
		for (uint8_t index=0; index< size; index++)
		{
			*(itsArray+index) = *(tsArray+index);
		}
	}
	virtual ~aVector()
	{
		delete[] itsArray;
	}
	T* getArray(void){
		return itsArray;
	}
	T& at(uint8_t index)
	{
		return itsArray[index];
	}
	aVector<T> concat(aVector<T> givenVector){
		uint8_t newSize = size + givenVector.size;
		T* newArray = new T[newSize];
		uint8_t index;
		for (index=0; index < size; index++)
		{
			newArray[index] = itsArray[index];
		}
		for (; index < newSize; index++)
		{
			newArray[index] = givenVector.itsArray[index-size];
		}
		aVector<T> vectorToReturn;
		vectorToReturn.itsArray = newArray;
		vectorToReturn.size = newSize;
		return vectorToReturn;
	}
	ErrorOk insert(uint8_t index, T item){
		T* newArray = new T[size+1];
		if (newArray == nullptr)
			return error;
		uint8_t i = 0;
		do{
			if(index == i){
				newArray[i] = item;
				break;
			}
			newArray[i] = itsArray[i];
			i++;
		}while(i < size);
		for (; i< size; i++)
			newArray[i+1] = itsArray[i];
		delete[] itsArray;
		itsArray = newArray;
		size = size+1;
		return ok;
	}
	T take(uint8_t index){
		T* newArray;
		if (size == 1)
			newArray = nullptr;
		else
			newArray = new T[size-1];

		uint8_t i = 0;
		T returnItem;
		do{
			if(index == i){
				returnItem = itsArray[i];
				break;
			}
			newArray[i] = itsArray[i];
			i++;
		}while(i < size);
		size = size-1;
		for (; i< size; i++)
			newArray[i] = itsArray[i+1];
		delete[] itsArray;
		itsArray = newArray;
		return returnItem;
	}
};

#endif //_VECTORTEMPLATE_HPP_
