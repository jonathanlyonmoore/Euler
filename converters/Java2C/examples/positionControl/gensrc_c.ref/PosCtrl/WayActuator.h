/**************************************************************************
 * This file is generated by Java2C
 **copyright***************************************************************
 *************************************************************************/
#ifndef __PosCtrl_WayActuator_h__
#define __PosCtrl_WayActuator_h__

#include "Jc/ObjectJc.h"        //basic concept

#include "Jc/StringJc.h"        //used often

#include "Fwc/fw_Exception.h"   //basic concept


/* J2C: includes *********************************************************/


/*@CLASS_C WayActuator @@@@@@@@@@@@@@@@@@@@@@@@*/

typedef struct WayActuator_t
{ 
  union { ObjectJc object; } base; 
} WayActuator_s;
  

#define sizeof_WayActuator_s sizeof(WayActuator_s)


/**J2c: Definitions of the enhanced reference. It's conditinally because it may be defined in a included header before. */
#ifndef WayActuatorREFDEF
  #define WayActuatorREFDEF
  typedef struct WayActuatorREF_t { ObjectRefValuesJc refbase; struct WayActuator_t* ref; } WayActuatorREF;
#endif

/**J2c: Definitions of the array forms. NOTE: The number of elements are a helper for debug, the really used number depends on the memory size! */
typedef struct WayActuator_X_t { ObjectArrayJc head; WayActuatorREF data[50]; } WayActuator_X;
typedef struct WayActuator_Y_t { ObjectArrayJc head; WayActuator_s data[50]; } WayActuator_Y;

 extern struct ClassJc_t const reflection_WayActuator_s;
  


/**CONST_Type useable as initializer for embedded/stack-instances*/
#define CONST_WayActuator(OBJP) { CONST_ObjectJc(sizeof(WayActuator_s), OBJP, &reflection_WayActuator_s), 0 }

/**J2C: finalize declaration. It is called by Garbage collector and inside other finalized methods.
 * It should be called by the user if the instance is removed. */
void finalize_WayActuator_F(ObjectJc* othis, ThCxt* _thCxt);




/**Sets the output to the motor*/
typedef void MT_setMotorVoltage_WayActuator(ObjectJc* ithis, int16 value, ThCxt* _thCxt);
/* J2C:Call of the method at this class level, executes a dynamic call of the override-able method: */
METHOD_C void setMotorVoltage_WayActuator(ObjectJc* ithis, int16 value, ThCxt* _thCxt);


/* J2C: Method table contains all dynamic linked (virtual) methods
 * of the class and all super classes and interfaces. */
 extern const char sign_Mtbl_WayActuator[]; //marker for methodTable check
typedef struct Mtbl_WayActuator_t
{ MtblHeadJc head;
  MT_setMotorVoltage_WayActuator* setMotorVoltage;
  Mtbl_ObjectJc ObjectJc;
} Mtbl_WayActuator;



#if defined(__CPLUSPLUSJcpp) && defined(__cplusplus)
/* J2C: The C++-class-definition. */
class WayActuator : private WayActuator_s
{ public:

  virtual void setMotorVoltage(int16 value)=0;
};

#endif /*__CPLUSPLUSJcpp*/

#endif //__PosCtrl_WayActuator_h__