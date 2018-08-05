/**************************************************************************
 * This file is generated by Java2C
 **copyright***************************************************************
 *************************************************************************/
#ifndef __TestAnonymous_Test_h__
#define __TestAnonymous_Test_h__

#include "Jc/ObjectJc.h"        //basic concept

#include "Jc/StringJc.h"        //used often

#include "Fwc/fw_Exception.h"   //basic concept


/* J2C: Enhanced references *********************************************************
 * In this part all here used enhanced references are defined conditionally.
 * The inclusion of all that header files isn't necessary, to prevent circular inclusion.
 * It is adequate a struct pointer forward declaration.
 */
#ifndef SimpleClass_TestREFDEF
  #define SimpleClass_TestREFDEF
  typedef struct SimpleClass_TestREF_t { ObjectRefValuesJc refbase; struct SimpleClass_Test_t* ref; } SimpleClass_TestREF;
#endif


/* J2C: includes *********************************************************/
#include "Java2cTest/ImplTest.h"  //superclass
#include "SimpleClass_Test.h"  //superclass


/*@CLASS_C C_ref2_TestAnonymous_Test @@@@@@@@@@@@@@@@@@@@@@@@*/

typedef struct C_ref2_TestAnonymous_Test_t
{ 
  union { ObjectJc object; ImplIfcTest_s super;} base; 
  struct TestAnonymous_Test_t* outer;  //J2C: Reference to outer class, implicit in Java
} C_ref2_TestAnonymous_Test_s;
  

#define sizeof_C_ref2_TestAnonymous_Test_s sizeof(C_ref2_TestAnonymous_Test_s)


/**J2c: Definitions of the enhanced reference. It's conditinally because it may be defined in a included header before. */
#ifndef C_ref2_TestAnonymous_TestREFDEF
  #define C_ref2_TestAnonymous_TestREFDEF
  typedef struct C_ref2_TestAnonymous_TestREF_t { ObjectRefValuesJc refbase; struct C_ref2_TestAnonymous_Test_t* ref; } C_ref2_TestAnonymous_TestREF;
#endif

/**J2c: Definitions of the array forms. NOTE: The number of elements are a helper for debug, the really used number depends on the memory size! */
typedef struct C_ref2_TestAnonymous_Test_X_t { ObjectArrayJc head; C_ref2_TestAnonymous_TestREF data[50]; } C_ref2_TestAnonymous_Test_X;
typedef struct C_ref2_TestAnonymous_Test_Y_t { ObjectArrayJc head; C_ref2_TestAnonymous_Test_s data[50]; } C_ref2_TestAnonymous_Test_Y;

 extern struct ClassJc_t const reflection_C_ref2_TestAnonymous_Test_s;
  


/**CONST_Type useable as initializer for embedded/stack-instances*/
#define CONST_C_ref2_TestAnonymous_Test(OBJP) { CONST_ObjectJc(sizeof(C_ref2_TestAnonymous_Test_s), OBJP, &reflection_C_ref2_TestAnonymous_Test_s), 0 }

/**J2C: finalize declaration. It is called by Garbage collector and inside other finalized methods.
 * It should be called by the user if the instance is removed. */
void finalize_C_ref2_TestAnonymous_Test_F(ObjectJc* othis, ThCxt* _thCxt);




/* J2C:Implementation of the method, used for an immediate non-dynamic call: */
METHOD_C int32 addValue_i_C_ref2_TestAnonymous_Test_F(SimpleClass_Test_s* ithis, int32 value, ThCxt* _thCxt);
/* J2C:Call of the method at this class level, executes a dynamic call of the override-able method: */
METHOD_C int32 addValue_i_C_ref2_TestAnonymous_Test(SimpleClass_Test_s* ithis, int32 value, ThCxt* _thCxt);


/* J2C: Method table contains all dynamic linked (virtual) methods
 * of the class and all super classes and interfaces. */
 extern const char sign_Mtbl_C_ref2_TestAnonymous_Test[]; //marker for methodTable check
typedef struct Mtbl_C_ref2_TestAnonymous_Test_t
{ MtblHeadJc head;
  Mtbl_ImplIfcTest ImplIfcTest;
} Mtbl_C_ref2_TestAnonymous_Test;



#if defined(__CPLUSPLUSJcpp) && defined(__cplusplus)
/* J2C: The C++-class-definition. */
class C_ref2_TestAnonymous_Test : private C_ref2_TestAnonymous_Test_s
{ public:

  virtual int32 addValue(int32 value){  return addValue_i_C_ref2_TestAnonymous_Test_F(&this->base.super.base.super, value,  null/*_thCxt*/); }
};

#endif /*__CPLUSPLUSJcpp*/


/**Default constructor. */
METHOD_C struct C_ref2_TestAnonymous_Test_t* ctorO_C_ref2_TestAnonymous_Test(struct TestAnonymous_Test_t* outer, ObjectJc* othis, int32 val, ThCxt* _thCxt);


/*@CLASS_C C_staticAnonymous_TestAnonymous_Test @@@@@@@@@@@@@@@@@@@@@@@@*/

typedef struct C_staticAnonymous_TestAnonymous_Test_t
{ 
  union { ObjectJc object; SimpleClass_Test_s super;} base; 
  struct TestAnonymous_Test_t* outer;  //J2C: Reference to outer class, implicit in Java
  float disturbing; 
  float x1; 
} C_staticAnonymous_TestAnonymous_Test_s;
  

#define sizeof_C_staticAnonymous_TestAnonymous_Test_s sizeof(C_staticAnonymous_TestAnonymous_Test_s)


/**J2c: Definitions of the enhanced reference. It's conditinally because it may be defined in a included header before. */
#ifndef C_staticAnonymous_TestAnonymous_TestREFDEF
  #define C_staticAnonymous_TestAnonymous_TestREFDEF
  typedef struct C_staticAnonymous_TestAnonymous_TestREF_t { ObjectRefValuesJc refbase; struct C_staticAnonymous_TestAnonymous_Test_t* ref; } C_staticAnonymous_TestAnonymous_TestREF;
#endif

/**J2c: Definitions of the array forms. NOTE: The number of elements are a helper for debug, the really used number depends on the memory size! */
typedef struct C_staticAnonymous_TestAnonymous_Test_X_t { ObjectArrayJc head; C_staticAnonymous_TestAnonymous_TestREF data[50]; } C_staticAnonymous_TestAnonymous_Test_X;
typedef struct C_staticAnonymous_TestAnonymous_Test_Y_t { ObjectArrayJc head; C_staticAnonymous_TestAnonymous_Test_s data[50]; } C_staticAnonymous_TestAnonymous_Test_Y;

 extern struct ClassJc_t const reflection_C_staticAnonymous_TestAnonymous_Test_s;
  


/**CONST_Type useable as initializer for embedded/stack-instances*/
#define CONST_C_staticAnonymous_TestAnonymous_Test(OBJP) { CONST_ObjectJc(sizeof(C_staticAnonymous_TestAnonymous_Test_s), OBJP, &reflection_C_staticAnonymous_TestAnonymous_Test_s), 0 }

/**J2C: finalize declaration. It is called by Garbage collector and inside other finalized methods.
 * It should be called by the user if the instance is removed. */
void finalize_C_staticAnonymous_TestAnonymous_Test_F(ObjectJc* othis, ThCxt* _thCxt);




/* J2C:Implementation of the method, used for an immediate non-dynamic call: */
METHOD_C int32 addValue_i_C_staticAnonymous_TestAnonymous_Test_F(SimpleClass_Test_s* ithis, int32 value, ThCxt* _thCxt);
/* J2C:Call of the method at this class level, executes a dynamic call of the override-able method: */
METHOD_C int32 addValue_i_C_staticAnonymous_TestAnonymous_Test(SimpleClass_Test_s* ithis, int32 value, ThCxt* _thCxt);


/* J2C: Method table contains all dynamic linked (virtual) methods
 * of the class and all super classes and interfaces. */
 extern const char sign_Mtbl_C_staticAnonymous_TestAnonymous_Test[]; //marker for methodTable check
typedef struct Mtbl_C_staticAnonymous_TestAnonymous_Test_t
{ MtblHeadJc head;
  Mtbl_SimpleClass_Test SimpleClass_Test;
} Mtbl_C_staticAnonymous_TestAnonymous_Test;



#if defined(__CPLUSPLUSJcpp) && defined(__cplusplus)
/* J2C: The C++-class-definition. */
class C_staticAnonymous_TestAnonymous_Test : private C_staticAnonymous_TestAnonymous_Test_s
{ public:

  virtual int32 addValue(int32 value){  return addValue_i_C_staticAnonymous_TestAnonymous_Test_F(&this->base.super, value,  null/*_thCxt*/); }
};

#endif /*__CPLUSPLUSJcpp*/


/**Default constructor. */
METHOD_C struct C_staticAnonymous_TestAnonymous_Test_t* ctorO_C_staticAnonymous_TestAnonymous_Test(struct TestAnonymous_Test_t* outer, ObjectJc* othis, int32 value, ThCxt* _thCxt);


/*@CLASS_C TestInnerNonstatic_TestAnonymous_Test @@@@@@@@@@@@@@@@@@@@@@@@*/

typedef struct TestInnerNonstatic_TestAnonymous_Test_t
{ 
  union { ObjectJc object; } base; 
  struct TestAnonymous_Test_t* outer;  //J2C: Reference to outer class, implicit in Java
  int32 xInnerNonstatic; 
} TestInnerNonstatic_TestAnonymous_Test_s;
  

#define sizeof_TestInnerNonstatic_TestAnonymous_Test_s sizeof(TestInnerNonstatic_TestAnonymous_Test_s)


/**J2c: Definitions of the enhanced reference. It's conditinally because it may be defined in a included header before. */
#ifndef TestInnerNonstatic_TestAnonymous_TestREFDEF
  #define TestInnerNonstatic_TestAnonymous_TestREFDEF
  typedef struct TestInnerNonstatic_TestAnonymous_TestREF_t { ObjectRefValuesJc refbase; struct TestInnerNonstatic_TestAnonymous_Test_t* ref; } TestInnerNonstatic_TestAnonymous_TestREF;
#endif

/**J2c: Definitions of the array forms. NOTE: The number of elements are a helper for debug, the really used number depends on the memory size! */
typedef struct TestInnerNonstatic_TestAnonymous_Test_X_t { ObjectArrayJc head; TestInnerNonstatic_TestAnonymous_TestREF data[50]; } TestInnerNonstatic_TestAnonymous_Test_X;
typedef struct TestInnerNonstatic_TestAnonymous_Test_Y_t { ObjectArrayJc head; TestInnerNonstatic_TestAnonymous_Test_s data[50]; } TestInnerNonstatic_TestAnonymous_Test_Y;

 extern struct ClassJc_t const reflection_TestInnerNonstatic_TestAnonymous_Test_s;
  


/**CONST_Type useable as initializer for embedded/stack-instances*/
#define CONST_TestInnerNonstatic_TestAnonymous_Test(OBJP) { CONST_ObjectJc(sizeof(TestInnerNonstatic_TestAnonymous_Test_s), OBJP, &reflection_TestInnerNonstatic_TestAnonymous_Test_s), 0 }

/**J2C: finalize declaration. It is called by Garbage collector and inside other finalized methods.
 * It should be called by the user if the instance is removed. */
void finalize_TestInnerNonstatic_TestAnonymous_Test_F(ObjectJc* othis, ThCxt* _thCxt);




/**Default constructor. */
METHOD_C struct TestInnerNonstatic_TestAnonymous_Test_t* ctorO_TestInnerNonstatic_TestAnonymous_Test(struct TestAnonymous_Test_t* outer, ObjectJc* othis, ThCxt* _thCxt);

METHOD_C void testInnerNonstatic_TestInnerNonstatic_TestAnonymous_Test(TestInnerNonstatic_TestAnonymous_Test_s* ythis, ThCxt* _thCxt);


/* J2C: Method table contains all dynamic linked (virtual) methods
 * of the class and all super classes and interfaces. */
 extern const char sign_Mtbl_TestInnerNonstatic_TestAnonymous_Test[]; //marker for methodTable check
typedef struct Mtbl_TestInnerNonstatic_TestAnonymous_Test_t
{ MtblHeadJc head;
  Mtbl_ObjectJc ObjectJc;
} Mtbl_TestInnerNonstatic_TestAnonymous_Test;



#if defined(__CPLUSPLUSJcpp) && defined(__cplusplus)
/* J2C: The C++-class-definition. */
class TestInnerNonstatic_TestAnonymous_Test : private TestInnerNonstatic_TestAnonymous_Test_s
{ public:

  void testInnerNonstatic(){ testInnerNonstatic_TestInnerNonstatic_TestAnonymous_Test(this,  null/*_thCxt*/); }
};

#endif /*__CPLUSPLUSJcpp*/



/*@CLASS_C TestInnerStatic_TestAnonymous_Test @@@@@@@@@@@@@@@@@@@@@@@@*/

typedef struct TestInnerStatic_TestAnonymous_Test_t
{ 
  union { ObjectJc object; } base; 
  int32 xInnerStatic; 
} TestInnerStatic_TestAnonymous_Test_s;
  

#define sizeof_TestInnerStatic_TestAnonymous_Test_s sizeof(TestInnerStatic_TestAnonymous_Test_s)


/**J2c: Definitions of the enhanced reference. It's conditinally because it may be defined in a included header before. */
#ifndef TestInnerStatic_TestAnonymous_TestREFDEF
  #define TestInnerStatic_TestAnonymous_TestREFDEF
  typedef struct TestInnerStatic_TestAnonymous_TestREF_t { ObjectRefValuesJc refbase; struct TestInnerStatic_TestAnonymous_Test_t* ref; } TestInnerStatic_TestAnonymous_TestREF;
#endif

/**J2c: Definitions of the array forms. NOTE: The number of elements are a helper for debug, the really used number depends on the memory size! */
typedef struct TestInnerStatic_TestAnonymous_Test_X_t { ObjectArrayJc head; TestInnerStatic_TestAnonymous_TestREF data[50]; } TestInnerStatic_TestAnonymous_Test_X;
typedef struct TestInnerStatic_TestAnonymous_Test_Y_t { ObjectArrayJc head; TestInnerStatic_TestAnonymous_Test_s data[50]; } TestInnerStatic_TestAnonymous_Test_Y;

 extern struct ClassJc_t const reflection_TestInnerStatic_TestAnonymous_Test_s;
  


/**CONST_Type useable as initializer for embedded/stack-instances*/
#define CONST_TestInnerStatic_TestAnonymous_Test(OBJP) { CONST_ObjectJc(sizeof(TestInnerStatic_TestAnonymous_Test_s), OBJP, &reflection_TestInnerStatic_TestAnonymous_Test_s), 0 }

/**J2C: finalize declaration. It is called by Garbage collector and inside other finalized methods.
 * It should be called by the user if the instance is removed. */
void finalize_TestInnerStatic_TestAnonymous_Test_F(ObjectJc* othis, ThCxt* _thCxt);




/**Default constructor. */
METHOD_C struct TestInnerStatic_TestAnonymous_Test_t* ctorO_TestInnerStatic_TestAnonymous_Test(ObjectJc* othis, ThCxt* _thCxt);

METHOD_C void testInnerNonstatic_TestInnerStatic_TestAnonymous_Test(TestInnerStatic_TestAnonymous_Test_s* ythis, int32 input, ThCxt* _thCxt);


/* J2C: Method table contains all dynamic linked (virtual) methods
 * of the class and all super classes and interfaces. */
 extern const char sign_Mtbl_TestInnerStatic_TestAnonymous_Test[]; //marker for methodTable check
typedef struct Mtbl_TestInnerStatic_TestAnonymous_Test_t
{ MtblHeadJc head;
  Mtbl_ObjectJc ObjectJc;
} Mtbl_TestInnerStatic_TestAnonymous_Test;



#if defined(__CPLUSPLUSJcpp) && defined(__cplusplus)
/* J2C: The C++-class-definition. */
class TestInnerStatic_TestAnonymous_Test : private TestInnerStatic_TestAnonymous_Test_s
{ public:

  TestInnerStatic_TestAnonymous_Test(){ init_ObjectJc(&this->base.object, sizeof(TestInnerStatic_TestAnonymous_Test_s), 0); setReflection_ObjectJc(&this->base.object, &reflection_TestInnerStatic_TestAnonymous_Test_s, 0); ctorO_TestInnerStatic_TestAnonymous_Test(&this->base.object,  null/*_thCxt*/); }

  void testInnerNonstatic(int32 input){ testInnerNonstatic_TestInnerStatic_TestAnonymous_Test(this, input,  null/*_thCxt*/); }
};

#endif /*__CPLUSPLUSJcpp*/



/*@CLASS_C TestAnonymous_Test @@@@@@@@@@@@@@@@@@@@@@@@*/

typedef struct TestAnonymous_Test_t
{ 
  union { ObjectJc object; } base; 
  int32 testValueOuter; 
  SimpleClass_TestREF ref; 
  C_ref2_TestAnonymous_Test_s ref2;   /*An composite instance is able to access with the type {@link SimpleClass},*/
  C_staticAnonymous_TestAnonymous_Test_s staticAnonymous;   /*A static anonymous instantiated reference.*/
} TestAnonymous_Test_s;
  

#define sizeof_TestAnonymous_Test_s sizeof(TestAnonymous_Test_s)


/**J2c: Definitions of the enhanced reference. It's conditinally because it may be defined in a included header before. */
#ifndef TestAnonymous_TestREFDEF
  #define TestAnonymous_TestREFDEF
  typedef struct TestAnonymous_TestREF_t { ObjectRefValuesJc refbase; struct TestAnonymous_Test_t* ref; } TestAnonymous_TestREF;
#endif

/**J2c: Definitions of the array forms. NOTE: The number of elements are a helper for debug, the really used number depends on the memory size! */
typedef struct TestAnonymous_Test_X_t { ObjectArrayJc head; TestAnonymous_TestREF data[50]; } TestAnonymous_Test_X;
typedef struct TestAnonymous_Test_Y_t { ObjectArrayJc head; TestAnonymous_Test_s data[50]; } TestAnonymous_Test_Y;

 extern struct ClassJc_t const reflection_TestAnonymous_Test_s;
  


/**CONST_Type useable as initializer for embedded/stack-instances*/
#define CONST_TestAnonymous_Test(OBJP) { CONST_ObjectJc(sizeof(TestAnonymous_Test_s), OBJP, &reflection_TestAnonymous_Test_s), 0 }

/**J2C: finalize declaration. It is called by Garbage collector and inside other finalized methods.
 * It should be called by the user if the instance is removed. */
void finalize_TestAnonymous_Test_F(ObjectJc* othis, ThCxt* _thCxt);




/**Default constructor. */
METHOD_C struct TestAnonymous_Test_t* ctorO_TestAnonymous_Test(ObjectJc* othis, ThCxt* _thCxt);

typedef void MT_setRef_TestAnonymous_Test(TestAnonymous_Test_s* ythis, struct SimpleClass_Test_t* ref, ThCxt* _thCxt);
/* J2C:Implementation of the method, used for an immediate non-dynamic call: */
METHOD_C void setRef_TestAnonymous_Test_F(TestAnonymous_Test_s* ythis, struct SimpleClass_Test_t* ref, ThCxt* _thCxt);
/* J2C:Call of the method at this class level, executes a dynamic call of the override-able method: */
METHOD_C void setRef_TestAnonymous_Test(TestAnonymous_Test_s* ythis, struct SimpleClass_Test_t* ref, ThCxt* _thCxt);

typedef void MT_test_TestAnonymous_Test(TestAnonymous_Test_s* ythis, ThCxt* _thCxt);
/* J2C:Implementation of the method, used for an immediate non-dynamic call: */
METHOD_C void test_TestAnonymous_Test_F(TestAnonymous_Test_s* ythis, ThCxt* _thCxt);
/* J2C:Call of the method at this class level, executes a dynamic call of the override-able method: */
METHOD_C void test_TestAnonymous_Test(TestAnonymous_Test_s* ythis, ThCxt* _thCxt);


/* J2C: Method table contains all dynamic linked (virtual) methods
 * of the class and all super classes and interfaces. */
 extern const char sign_Mtbl_TestAnonymous_Test[]; //marker for methodTable check
typedef struct Mtbl_TestAnonymous_Test_t
{ MtblHeadJc head;
  MT_setRef_TestAnonymous_Test* setRef;
  MT_test_TestAnonymous_Test* test;
  Mtbl_ObjectJc ObjectJc;
} Mtbl_TestAnonymous_Test;



#if defined(__CPLUSPLUSJcpp) && defined(__cplusplus)
/* J2C: The C++-class-definition. */
class TestAnonymous_Test : private TestAnonymous_Test_s
{ public:

  TestAnonymous_Test(int32 val){ init_ObjectJc(&this->base.object, sizeof(TestAnonymous_Test_s), 0); setReflection_ObjectJc(&this->base.object, &reflection_TestAnonymous_Test_s, 0); ctorO_C_ref2_TestAnonymous_Test(&this->base.object, val,  null/*_thCxt*/); }

  TestAnonymous_Test(int32 value){ init_ObjectJc(&this->base.object, sizeof(TestAnonymous_Test_s), 0); setReflection_ObjectJc(&this->base.object, &reflection_TestAnonymous_Test_s, 0); ctorO_C_staticAnonymous_TestAnonymous_Test(&this->base.object, value,  null/*_thCxt*/); }

  TestAnonymous_Test(){ init_ObjectJc(&this->base.object, sizeof(TestAnonymous_Test_s), 0); setReflection_ObjectJc(&this->base.object, &reflection_TestAnonymous_Test_s, 0); ctorO_TestAnonymous_Test(&this->base.object,  null/*_thCxt*/); }

  TestAnonymous_Test(){ init_ObjectJc(&this->base.object, sizeof(TestAnonymous_Test_s), 0); setReflection_ObjectJc(&this->base.object, &reflection_TestAnonymous_Test_s, 0); ctorO_TestInnerNonstatic_TestAnonymous_Test(&this->base.object,  null/*_thCxt*/); }

  virtual void setRef(struct SimpleClass_Test_t* ref){ setRef_TestAnonymous_Test_F(this, ref,  null/*_thCxt*/); }

  virtual void test(){ test_TestAnonymous_Test_F(this,  null/*_thCxt*/); }
};

#endif /*__CPLUSPLUSJcpp*/

#endif //__TestAnonymous_Test_h__