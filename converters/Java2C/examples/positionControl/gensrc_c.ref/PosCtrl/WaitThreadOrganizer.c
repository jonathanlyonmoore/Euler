/**************************************************************************
 * This file is generated by Java2C
 **copyright***************************************************************
 *************************************************************************/
#include "PosCtrl/WaitThreadOrganizer.h"
#include <string.h>  //because using memset()
#include <Jc/ReflectionJc.h>   //Reflection concept 
#include <Fwc/fw_Exception.h>  //basic stacktrace concept

/**This interface contains only a method which should called in a run-loop
to wait for the cycle. In a simulation some additional things can be do there.
@author Hartmut Schorrig

*/


const char sign_Mtbl_WaitThreadOrganizer[] = "WaitThreadOrganizer"; //to mark method tables of all implementations

/*J2C: dynamic call variant of the override-able method: */
void waitCycle_WaitThreadOrganizer(ObjectJc* ithis, ThCxt* _thCxt)
{ Mtbl_WaitThreadOrganizer const* mtbl = (Mtbl_WaitThreadOrganizer const*)getMtbl_ObjectJc(ithis, sign_Mtbl_WaitThreadOrganizer);
  mtbl->waitCycle(ithis, _thCxt);
}

 extern struct ClassJc_t const reflection_ObjectJc;
 static struct superClasses_WaitThreadOrganizer_s_t
 { ObjectArrayJc head;
   ClassOffset_idxMtblJc data[1];
 }superclasses_WaitThreadOrganizer_s =
 { CONST_ObjectArrayJc(ClassOffset_idxMtblJc, 1, OBJTYPE_ClassOffset_idxMtblJc, null, null)
 , { {&reflection_ObjectJc, 0 /*J2C: no Mtbl*/ }
   }
 };

const ClassJc reflection_WaitThreadOrganizer_s = 
{ CONST_ObjectJc(OBJTYPE_ClassJc + sizeof(ClassJc), &reflection_ObjectJc, &reflection_ClassJc) 
, "WaitThreadOrganizer_s"
,  0 //position of ObjectJc
, sizeof(WaitThreadOrganizer_s)
, null //attributes and associations
, null //method
, (ClassOffset_idxMtblJcARRAY*)&superclasses_WaitThreadOrganizer_s //superclass
, null //interfaces
, 0    //modifiers
};
