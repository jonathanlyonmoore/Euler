/**************************************************************************
 * This file is generated by Java2C
 **copyright***************************************************************
 *************************************************************************/
#ifndef __J1c_RawDataAccessJc_h__
#define __J1c_RawDataAccessJc_h__

#include "Jc/ObjectJc.h"        //basic concept

#include "Jc/StringJc.h"        //used often

#include "Fwc/fw_Exception.h"   //basic concept


/* J2C: includes *********************************************************/
#include "J1c/ByteDataAccessJc.h"  //superclass


/*@CLASS_C RawDataAccessJc @@@@@@@@@@@@@@@@@@@@@@@@*/

typedef struct RawDataAccessJc_t
{ 
  union { ObjectJc object; ByteDataAccessJc_s super;} base; 
} RawDataAccessJc_s;
  

#define sizeof_RawDataAccessJc_s sizeof(RawDataAccessJc_s)


/**J2c: Definitions of the enhanced reference. It's conditinally because it may be defined in a included header before. */
#ifndef RawDataAccessJcREFDEF
  #define RawDataAccessJcREFDEF
  typedef struct RawDataAccessJcREF_t { ObjectRefValuesJc refbase; struct RawDataAccessJc_t* ref; } RawDataAccessJcREF;
#endif

/**J2c: Definitions of the array forms. NOTE: The number of elements are a helper for debug, the really used number depends on the memory size! */
typedef struct RawDataAccessJc_X_t { ObjectArrayJc head; RawDataAccessJcREF data[50]; } RawDataAccessJc_X;
typedef struct RawDataAccessJc_Y_t { ObjectArrayJc head; RawDataAccessJc_s data[50]; } RawDataAccessJc_Y;

 extern struct ClassJc_t const reflection_RawDataAccessJc_s;
  


/**CONST_Type useable as initializer for embedded/stack-instances*/
#define CONST_RawDataAccessJc(OBJP) { CONST_ObjectJc(sizeof(RawDataAccessJc_s), OBJP, &reflection_RawDataAccessJc_s), 0 }

/**J2C: finalize declaration. It is called by Garbage collector and inside other finalized methods.
 * It should be called by the user if the instance is removed. */
void finalize_RawDataAccessJc_F(ObjectJc* othis, ThCxt* _thCxt);




METHOD_C struct RawDataAccessJc_t* ctorO_RawDataAccessJc(ObjectJc* othis, ThCxt* _thCxt);

/* J2C:Implementation of the method, used for an immediate non-dynamic call: */
METHOD_C void specifyEmptyDefaultData_RawDataAccessJc_F(ByteDataAccessJc_s* ithis, ThCxt* _thCxt);
/* J2C:Call of the method at this class level, executes a dynamic call of the override-able method: */
METHOD_C void specifyEmptyDefaultData_RawDataAccessJc(ByteDataAccessJc_s* ithis, ThCxt* _thCxt);

/* J2C:Implementation of the method, used for an immediate non-dynamic call: */
METHOD_C int32 specifyLengthElement_RawDataAccessJc_F(ByteDataAccessJc_s* ithis, ThCxt* _thCxt);
/* J2C:Call of the method at this class level, executes a dynamic call of the override-able method: */
METHOD_C int32 specifyLengthElement_RawDataAccessJc(ByteDataAccessJc_s* ithis, ThCxt* _thCxt);

/* J2C:Implementation of the method, used for an immediate non-dynamic call: */
METHOD_C int32 specifyLengthElementHead_RawDataAccessJc_F(ByteDataAccessJc_s* ithis, ThCxt* _thCxt);
/* J2C:Call of the method at this class level, executes a dynamic call of the override-able method: */
METHOD_C int32 specifyLengthElementHead_RawDataAccessJc(ByteDataAccessJc_s* ithis, ThCxt* _thCxt);

/* J2C:Implementation of the method, used for an immediate non-dynamic call: */
METHOD_C void setBigEndian_b_RawDataAccessJc_F(ByteDataAccessJc_s* ithis, bool value, ThCxt* _thCxt);
/* J2C:Call of the method at this class level, executes a dynamic call of the override-able method: */
METHOD_C void setBigEndian_b_RawDataAccessJc(ByteDataAccessJc_s* ithis, bool value, ThCxt* _thCxt);

/**Gets a integer value from any offset started from Object_Jc*/
METHOD_C int32 getIntVal_RawDataAccessJc(RawDataAccessJc_s* ythis, int32 idx, int32 nrofBytes, ThCxt* _thCxt);

/**Gets a float value from any offset started from Object_Jc*/
METHOD_C float getFloatVal_RawDataAccessJc(RawDataAccessJc_s* ythis, int32 idx, ThCxt* _thCxt);

/**Gets a double value from any offset started from Object_Jc*/
METHOD_C double getDoubleVal_RawDataAccessJc(RawDataAccessJc_s* ythis, int32 idx, ThCxt* _thCxt);

METHOD_C void setIntVal_RawDataAccessJc(RawDataAccessJc_s* ythis, int32 idx, int32 nrofBytes, int64 value, ThCxt* _thCxt);

METHOD_C void setFloatVal_RawDataAccessJc(RawDataAccessJc_s* ythis, int32 idx, float value, ThCxt* _thCxt);

METHOD_C void setDoubleVal_RawDataAccessJc(RawDataAccessJc_s* ythis, int32 idx, double value, ThCxt* _thCxt);


/* J2C: Method table contains all dynamic linked (virtual) methods
 * of the class and all super classes and interfaces. */
 extern const char sign_Mtbl_RawDataAccessJc[]; //marker for methodTable check
typedef struct Mtbl_RawDataAccessJc_t
{ MtblHeadJc head;
  Mtbl_ByteDataAccessJc ByteDataAccessJc;
} Mtbl_RawDataAccessJc;



#if defined(__CPLUSPLUSJcpp) && defined(__cplusplus)
/* J2C: The C++-class-definition. */
class RawDataAccessJc : private RawDataAccessJc_s
{ public:

  RawDataAccessJc(){ init_ObjectJc(&this->base.object, sizeof(RawDataAccessJc_s), 0); setReflection_ObjectJc(&this->base.object, &reflection_RawDataAccessJc_s, 0); ctorO_RawDataAccessJc(&this->base.object,  null/*_thCxt*/); }

  double getDoubleVal(int32 idx){  return getDoubleVal_RawDataAccessJc(this, idx,  null/*_thCxt*/); }

  float getFloatVal(int32 idx){  return getFloatVal_RawDataAccessJc(this, idx,  null/*_thCxt*/); }

  int32 getIntVal(int32 idx, int32 nrofBytes){  return getIntVal_RawDataAccessJc(this, idx, nrofBytes,  null/*_thCxt*/); }

  virtual void setBigEndian(bool value){ setBigEndian_b_RawDataAccessJc_F(&this->base.super, value,  null/*_thCxt*/); }

  void setDoubleVal(int32 idx, double value){ setDoubleVal_RawDataAccessJc(this, idx, value,  null/*_thCxt*/); }

  void setFloatVal(int32 idx, float value){ setFloatVal_RawDataAccessJc(this, idx, value,  null/*_thCxt*/); }

  void setIntVal(int32 idx, int32 nrofBytes, int64 value){ setIntVal_RawDataAccessJc(this, idx, nrofBytes, value,  null/*_thCxt*/); }

  virtual void specifyEmptyDefaultData(){ specifyEmptyDefaultData_RawDataAccessJc_F(&this->base.super,  null/*_thCxt*/); }

  virtual int32 specifyLengthElementHead(){  return specifyLengthElementHead_RawDataAccessJc_F(&this->base.super,  null/*_thCxt*/); }

  virtual int32 specifyLengthElement(){  return specifyLengthElement_RawDataAccessJc_F(&this->base.super,  null/*_thCxt*/); }
};

#endif /*__CPLUSPLUSJcpp*/

#endif //__J1c_RawDataAccessJc_h__