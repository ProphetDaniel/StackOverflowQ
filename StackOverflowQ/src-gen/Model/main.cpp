#include "..\Model\FirstClass.hpp"
#include "..\Model\FourthClass.hpp"
#include "..\Model\SecondClass.hpp"

using namespace std;

//Start of user code Main custom area
//End of user code

/*************************************************************************************************/
/************************************ Const or Static Objects ************************************/
/*************************************************************************************************/
/*************************************************************************************************/
/************************************* Non Static Object Factory *********************************/
/*************************************************************************************************/
void objectFactory (void)
{
	FirstClass*
		aFirstClassObject2 = new FirstClass(/*x*/1, /*y*/3, /*z*/2); 
	FirstClass*
		aFirstClassObject = new FirstClass(/*x*/3, /*y*/4, /*z*/5); 
	aVector<FirstClass*>*
		aSecondClassObject_firstclassList = new aVector<FirstClass*>(aFirstClassObject, aFirstClassObject2); 
	SecondClass*
		aSecondClassObject = new SecondClass(aSecondClassObject_firstclassList, /*H*/1, /*W*/2); 
	FourthClass*
		AFourthClassObject = new FourthClass(/*secondclass*/aSecondClassObject, /*title*/"titleOfFourthClass"); 
	/*********************************************************************************************/
	/************************************* Closing Associations **********************************/
	/*********************************************************************************************/

	//Start of user code custom area One.
	//End of user code
}

/*************************************************************************************************/
/************************************************ Main *******************************************/
/*************************************************************************************************/
int main (int argc, char* argv[]){
	objectFactory();

	//Start of user code custom area Two.
	//End of user code
}
