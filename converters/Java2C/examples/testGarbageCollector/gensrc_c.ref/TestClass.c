//this file is generated by Java2C
#include "TestClass.h"
#include "string.h"  //because using memset()
#include "ReflectionJc.h"  
#include "ThreadContextJc.h"  //stacktrace concept

 struct MtblTestClass
{ Mtbl_ObjectJc mtblObjectJc;  //methods from ObjectJc;
} const mtblTestClass =
{ { clone_Object_F
  , equals_Object_F
  , finalize_TestClass
  , hashCode_Object_F
  , toString_Object_F
  }
};
 const ClassJc classTestClass = 
{ CONST_ObjectJc(OBJTYPE_ClassJc + sizeof(ClassJc), &reflection_ObjectJc, null) 
, "TestClass"
, 0 //position of ObjectJc
, sizeof(TestClass)
, null //attributes and associations
, null //method
, null //superclass
, null //interfaces
, 0    //modifiers
, &mtblTestClass.mtblObjectJc
};
 const ClassJc* clazzTestClass = &classTestClass;

TestClass* ctorO_TestClass(ObjectJc* newObj, int32 val, struct ThreadContextJc_t* _threadContext)
{ TestClass* ythis = (TestClass*)newObj;  //upcasting to the real class.
  int sizeObj = getSizeInfo_ObjectJc(newObj);
  StacktraceJc stacktrace = {_threadContext->stacktrace, { "ctorO_TestClass", __FILE__, __LINE__} , null}; 
  _threadContext->stacktrace = &stacktrace;
    checkConsistence_ObjectJc(newObj, sizeof(TestClass), clazzTestClass, _threadContext);  
  { ythis->a=val;
  }
 _threadContext->stacktrace = stacktrace.previous;
  return ythis;
}



void finalize_TestClass(ObjectJc* yObj, struct ThreadContextJc_t* _threadContext)
{ TestClass* ythis = (TestClass*)yObj;  //upcasting to the real class.
   StacktraceJc stacktrace = {_threadContext->stacktrace, { "finalize_TestClass", __FILE__, __LINE__} , null}; 
  _threadContext->stacktrace = &stacktrace;
  if(ythis->test1.ref != null) clearBackRefJc(&(ythis->test1.refbase));
  if(ythis->test2.ref != null) clearBackRefJc(&(ythis->test2.refbase));
  _threadContext->stacktrace = stacktrace.previous;
}
