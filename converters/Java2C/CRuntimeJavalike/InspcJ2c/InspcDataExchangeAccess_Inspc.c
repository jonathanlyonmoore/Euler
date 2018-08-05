/**************************************************************************
 * This file is generated by Java2C
 **copyright***************************************************************
 *************************************************************************/
#include "InspcJ2c/InspcDataExchangeAccess_Inspc.h"
#include <string.h>  //because using memset()
#include <Jc/ReflectionJc.h>   //Reflection concept 
#include <Fwc/fw_Exception.h>  //basic stacktrace concept
#include "Jc/ArraysJc.h"  //reference-association: ArraysJc

/**This class supports preparing data for the Inspector-datagram-definition.
@author Hartmut Schorrig

*/


const char sign_Mtbl_InspcDataExchangeAccess_Inspc[] = "InspcDataExchangeAccess_Inspc"; //to mark method tables of all implementations

typedef struct MtblDef_InspcDataExchangeAccess_Inspc_t { Mtbl_InspcDataExchangeAccess_Inspc mtbl; MtblHeadJc end; } MtblDef_InspcDataExchangeAccess_Inspc;
 extern MtblDef_InspcDataExchangeAccess_Inspc const mtblInspcDataExchangeAccess_Inspc;

/*Constructor *//**J2C: autogenerated as default constructor. */
struct InspcDataExchangeAccess_Inspc_t* ctorO_InspcDataExchangeAccess_Inspc(ObjectJc* othis, ThCxt* _thCxt)
{ InspcDataExchangeAccess_Inspc_s* ythis = (InspcDataExchangeAccess_Inspc_s*)othis;  //upcasting to the real class.
  STACKTRC_TENTRY("ctorO_InspcDataExchangeAccess_Inspc");
  checkConsistence_ObjectJc(othis, sizeof(InspcDataExchangeAccess_Inspc_s), null, _thCxt);  
  setReflection_ObjectJc(othis, &reflection_InspcDataExchangeAccess_Inspc_s, sizeof(InspcDataExchangeAccess_Inspc_s));  
  //j2c: Initialize all class variables:
  {
  }/*J2C:No body for constructor*/

  STACKTRC_LEAVE;
  return ythis;
}




/**J2C: Reflections and Method-table *************************************************/
const MtblDef_InspcDataExchangeAccess_Inspc mtblInspcDataExchangeAccess_Inspc = {
{ { sign_Mtbl_InspcDataExchangeAccess_Inspc//J2C: Head of methodtable.
  , (struct Size_Mtbl_t*)((0 +2) * sizeof(void*)) //size. NOTE: all elements are standard-pointer-types.
  }
, { { sign_Mtbl_ObjectJc//J2C: Head of methodtable.
    , (struct Size_Mtbl_t*)((5 +2) * sizeof(void*)) //size. NOTE: all elements are standard-pointer-types.
    }
  , clone_ObjectJc_F //clone
  , equals_ObjectJc_F //equals
  , finalize_ObjectJc_F //finalize
  , hashCode_ObjectJc_F //hashCode
  , toString_ObjectJc_F //toString
  }
}, { signEnd_Mtbl_ObjectJc, null } }; //Mtbl


 extern struct ClassJc_t const reflection_ObjectJc;
 static struct superClasses_InspcDataExchangeAccess_Inspc_s_t
 { ObjectArrayJc head;
   ClassOffset_idxMtblJc data[1];
 }superclasses_InspcDataExchangeAccess_Inspc_s =
 { CONST_ObjectArrayJc(ClassOffset_idxMtblJc, 1, OBJTYPE_ClassOffset_idxMtblJc, null, null)
 , { {&reflection_ObjectJc, OFFSET_Mtbl(Mtbl_InspcDataExchangeAccess_Inspc, ObjectJc) }
   }
 };

const ClassJc reflection_InspcDataExchangeAccess_Inspc_s = 
{ CONST_ObjectJc(OBJTYPE_ClassJc + sizeof(ClassJc), &reflection_ObjectJc, &reflection_ClassJc) 
, "InspcDataExchangeA_s_Inspc_s"
,  0 //position of ObjectJc
, sizeof(InspcDataExchangeAccess_Inspc_s)
, null //attributes and associations
, null //method
, (ClassOffset_idxMtblJcARRAY*)&superclasses_InspcDataExchangeAccess_Inspc_s //superclass
, null //interfaces
, 0    //modifiers
, &mtblInspcDataExchangeAccess_Inspc.mtbl.head
};

/**Preparing the header of a datagram.
*
*/


const char sign_Mtbl_Datagram_InspcDataExchangeAccess_Inspc[] = "Datagram_InspcDataExchangeAccess_Inspc"; //to mark method tables of all implementations

typedef struct MtblDef_Datagram_InspcDataExchangeAccess_Inspc_t { Mtbl_Datagram_InspcDataExchangeAccess_Inspc mtbl; MtblHeadJc end; } MtblDef_Datagram_InspcDataExchangeAccess_Inspc;
 extern MtblDef_Datagram_InspcDataExchangeAccess_Inspc const mtblDatagram_InspcDataExchangeAccess_Inspc;

/*Constructor */
struct Datagram_InspcDataExchangeAccess_Inspc_t* ctorO_iY_Datagram_InspcDataExchangeAccess_Inspc(ObjectJc* othis, int8_Y* buffer, ThCxt* _thCxt)
{ Datagram_InspcDataExchangeAccess_Inspc_s* ythis = (Datagram_InspcDataExchangeAccess_Inspc_s*)othis;  //upcasting to the real class.
  Mtbl_Datagram_InspcDataExchangeAccess_Inspc const* mtthis = &mtblDatagram_InspcDataExchangeAccess_Inspc.mtbl;
  STACKTRC_TENTRY("ctorO_Datagram_InspcDataExchangeAccess_Inspc");
  checkConsistence_ObjectJc(othis, sizeof(Datagram_InspcDataExchangeAccess_Inspc_s), null, _thCxt);  
  //J2C:super Constructor
  ctorO_ByteDataAccessJc(/*static*/othis, _thCxt);
  setReflection_ObjectJc(othis, &reflection_Datagram_InspcDataExchangeAccess_Inspc_s, sizeof(Datagram_InspcDataExchangeAccess_Inspc_s));  
  //j2c: Initialize all class variables:
  {
  }
  { 
    
    ctorO_Datagram_InspcDataExchangeAccess_Inspc(othis, _thCxt);
    assignEmpty_ByteDataAccessJc(& ((* (ythis)).base.super), buffer, _thCxt);
    mtthis->ByteDataAccessJc.setBigEndian(& ((* (ythis)).base.super), true, _thCxt);
  }
  STACKTRC_LEAVE;
  return ythis;
}



/*Constructor */
struct Datagram_InspcDataExchangeAccess_Inspc_t* ctorO_Datagram_InspcDataExchangeAccess_Inspc(ObjectJc* othis, ThCxt* _thCxt)
{ Datagram_InspcDataExchangeAccess_Inspc_s* ythis = (Datagram_InspcDataExchangeAccess_Inspc_s*)othis;  //upcasting to the real class.
  Mtbl_Datagram_InspcDataExchangeAccess_Inspc const* mtthis = &mtblDatagram_InspcDataExchangeAccess_Inspc.mtbl;
  STACKTRC_TENTRY("ctorO_Datagram_InspcDataExchangeAccess_Inspc");
  checkConsistence_ObjectJc(othis, sizeof(Datagram_InspcDataExchangeAccess_Inspc_s), null, _thCxt);  
  //J2C:super Constructor
  ctorO_ByteDataAccessJc(/*static*/othis, _thCxt);
  setReflection_ObjectJc(othis, &reflection_Datagram_InspcDataExchangeAccess_Inspc_s, sizeof(Datagram_InspcDataExchangeAccess_Inspc_s));  
  //j2c: Initialize all class variables:
  {
  }
  { 
    
    mtthis->ByteDataAccessJc.setBigEndian(& ((* (ythis)).base.super), true, _thCxt);
  }
  STACKTRC_LEAVE;
  return ythis;
}


void specifyEmptyDefaultData_Datagram_InspcDataExchangeAccess_Inspc(ByteDataAccessJc_s* ithis, ThCxt* _thCxt)
{ Datagram_InspcDataExchangeAccess_Inspc_s* ythis = (Datagram_InspcDataExchangeAccess_Inspc_s*)ithis;
  
  STACKTRC_TENTRY("specifyEmptyDefaultData_Datagram_InspcDataExchangeAccess_Inspc");
  
  { 
    
    fill_B_ArraysJc(/*static*/ythis->base.super.data, 0, sizeofHead_Datagram_InspcDataExchangeAccess_Inspc, (int8)0, _thCxt);
  }
  STACKTRC_LEAVE;
}

int32 specifyLengthElement_Datagram_InspcDataExchangeAccess_Inspc(ByteDataAccessJc_s* ithis, ThCxt* _thCxt)
{ Datagram_InspcDataExchangeAccess_Inspc_s* ythis = (Datagram_InspcDataExchangeAccess_Inspc_s*)ithis;
  
  STACKTRC_TENTRY("specifyLengthElement_Datagram_InspcDataExchangeAccess_Inspc");
  
  { 
    
    { STACKTRC_LEAVE;
      return 0;
    }
  }
  STACKTRC_LEAVE;
}

int32 specifyLengthElementHead_Datagram_InspcDataExchangeAccess_Inspc(ByteDataAccessJc_s* ithis, ThCxt* _thCxt)
{ Datagram_InspcDataExchangeAccess_Inspc_s* ythis = (Datagram_InspcDataExchangeAccess_Inspc_s*)ithis;
  
  STACKTRC_TENTRY("specifyLengthElementHead_Datagram_InspcDataExchangeAccess_Inspc");
  
  { 
    
    { STACKTRC_LEAVE;
      return sizeofHead_Datagram_InspcDataExchangeAccess_Inspc;
    }
  }
  STACKTRC_LEAVE;
}

void setLengthDatagram_Datagram_InspcDataExchangeAccess_Inspc(Datagram_InspcDataExchangeAccess_Inspc_s* ythis, int32 length, ThCxt* _thCxt)
{ 
  STACKTRC_TENTRY("setLengthDatagram_Datagram_InspcDataExchangeAccess_Inspc");
  
  { 
    
    setInt16_ii_ByteDataAccessJc(& ((* (ythis)).base.super), 0, length, _thCxt);
  }
  STACKTRC_LEAVE;
}

int32 getLengthDatagram_Datagram_InspcDataExchangeAccess_Inspc(Datagram_InspcDataExchangeAccess_Inspc_s* ythis, ThCxt* _thCxt)
{ 
  STACKTRC_TENTRY("getLengthDatagram_Datagram_InspcDataExchangeAccess_Inspc");
  
  { 
    
    { STACKTRC_LEAVE;
      return getInt16_i_ByteDataAccessJc(& ((* (ythis)).base.super), 0, _thCxt);
    }
  }
  STACKTRC_LEAVE;
}

void setHead_Datagram_InspcDataExchangeAccess_Inspc(Datagram_InspcDataExchangeAccess_Inspc_s* ythis, int32 entrant, int32 seqNr, int32 encryption, ThCxt* _thCxt)
{ 
  STACKTRC_TENTRY("setHead_Datagram_InspcDataExchangeAccess_Inspc");
  
  { 
    
    setInt16_ii_ByteDataAccessJc(& ((* (ythis)).base.super), knrofBytes_Datagram_InspcDataExchangeAccess_Inspc, sizeofHead_Datagram_InspcDataExchangeAccess_Inspc, _thCxt);
    setInt32_ii_ByteDataAccessJc(& ((* (ythis)).base.super), kseqnr_Datagram_InspcDataExchangeAccess_Inspc, seqNr, _thCxt);
    setInt16_ii_ByteDataAccessJc(& ((* (ythis)).base.super), kanswerNr_Datagram_InspcDataExchangeAccess_Inspc, 0x1, _thCxt);//int encryption = (int)(((0x10000 * Math.random())-0x8000) * 0x10000);
    
    setInt32_ii_ByteDataAccessJc(& ((* (ythis)).base.super), kencryption_Datagram_InspcDataExchangeAccess_Inspc, encryption, _thCxt);
  }
  STACKTRC_LEAVE;
}

void setEntrant_Datagram_InspcDataExchangeAccess_Inspc(Datagram_InspcDataExchangeAccess_Inspc_s* ythis, int32 nr, ThCxt* _thCxt)
{ 
  STACKTRC_TENTRY("setEntrant_Datagram_InspcDataExchangeAccess_Inspc");
  
  { 
    
    setInt16_ii_ByteDataAccessJc(& ((* (ythis)).base.super), knEntrant_Datagram_InspcDataExchangeAccess_Inspc, nr, _thCxt);
  }
  STACKTRC_LEAVE;
}

int32 getEntrant_Datagram_InspcDataExchangeAccess_Inspc(Datagram_InspcDataExchangeAccess_Inspc_s* ythis, ThCxt* _thCxt)
{ 
  STACKTRC_TENTRY("getEntrant_Datagram_InspcDataExchangeAccess_Inspc");
  
  { 
    
    { STACKTRC_LEAVE;
      return getInt16_i_ByteDataAccessJc(& ((* (ythis)).base.super), knEntrant_Datagram_InspcDataExchangeAccess_Inspc, _thCxt);
    }
  }
  STACKTRC_LEAVE;
}

int32 getEncryption_Datagram_InspcDataExchangeAccess_Inspc(Datagram_InspcDataExchangeAccess_Inspc_s* ythis, ThCxt* _thCxt)
{ 
  STACKTRC_TENTRY("getEncryption_Datagram_InspcDataExchangeAccess_Inspc");
  
  { 
    
    { STACKTRC_LEAVE;
      return getInt32_i_ByteDataAccessJc(& ((* (ythis)).base.super), kencryption_Datagram_InspcDataExchangeAccess_Inspc, _thCxt);
    }
  }
  STACKTRC_LEAVE;
}

void setSeqnr_Datagram_InspcDataExchangeAccess_Inspc(Datagram_InspcDataExchangeAccess_Inspc_s* ythis, int32 nr, ThCxt* _thCxt)
{ 
  STACKTRC_TENTRY("setSeqnr_Datagram_InspcDataExchangeAccess_Inspc");
  
  { 
    
    setInt32_ii_ByteDataAccessJc(& ((* (ythis)).base.super), kseqnr_Datagram_InspcDataExchangeAccess_Inspc, nr, _thCxt);
  }
  STACKTRC_LEAVE;
}

int32 getSeqnr_Datagram_InspcDataExchangeAccess_Inspc(Datagram_InspcDataExchangeAccess_Inspc_s* ythis, ThCxt* _thCxt)
{ 
  STACKTRC_TENTRY("getSeqnr_Datagram_InspcDataExchangeAccess_Inspc");
  
  { 
    
    { STACKTRC_LEAVE;
      return getInt32_i_ByteDataAccessJc(& ((* (ythis)).base.super), kseqnr_Datagram_InspcDataExchangeAccess_Inspc, _thCxt);
    }
  }
  STACKTRC_LEAVE;
}


/**Mark the datagram as last answer. */
void markAnswerNrLast_Datagram_InspcDataExchangeAccess_Inspc(Datagram_InspcDataExchangeAccess_Inspc_s* ythis, ThCxt* _thCxt)
{ 
  STACKTRC_TENTRY("markAnswerNrLast_Datagram_InspcDataExchangeAccess_Inspc");
  
  { 
    int32 nr; 
    
    
    nr = getInt8_i_ByteDataAccessJc(& ((* (ythis)).base.super), kanswerNr_Datagram_InspcDataExchangeAccess_Inspc, _thCxt);
    nr |= 0x80;
    setInt8_ii_ByteDataAccessJc(& ((* (ythis)).base.super), kanswerNr_Datagram_InspcDataExchangeAccess_Inspc, nr, _thCxt);
  }
  STACKTRC_LEAVE;
}


/**Increments the number for the answer datagram. */
void incrAnswerNr_Datagram_InspcDataExchangeAccess_Inspc(Datagram_InspcDataExchangeAccess_Inspc_s* ythis, ThCxt* _thCxt)
{ 
  STACKTRC_TENTRY("incrAnswerNr_Datagram_InspcDataExchangeAccess_Inspc");
  
  { 
    int32 nr; 
    
    
    nr = getInt8_i_ByteDataAccessJc(& ((* (ythis)).base.super), kanswerNr_Datagram_InspcDataExchangeAccess_Inspc, _thCxt);
    nr = (nr & 0x7f) + 1;
    ASSERT(/*static*/(nr & 0x80) == 0);
    setInt8_ii_ByteDataAccessJc(& ((* (ythis)).base.super), kanswerNr_Datagram_InspcDataExchangeAccess_Inspc, nr, _thCxt);
  }
  STACKTRC_LEAVE;
}



/**J2C: Reflections and Method-table *************************************************/
const MtblDef_Datagram_InspcDataExchangeAccess_Inspc mtblDatagram_InspcDataExchangeAccess_Inspc = {
{ { sign_Mtbl_Datagram_InspcDataExchangeAccess_Inspc//J2C: Head of methodtable.
  , (struct Size_Mtbl_t*)((0 +2) * sizeof(void*)) //size. NOTE: all elements are standard-pointer-types.
  }
, { { sign_Mtbl_ByteDataAccessJc//J2C: Head of methodtable.
    , (struct Size_Mtbl_t*)((14 +2) * sizeof(void*)) //size. NOTE: all elements are standard-pointer-types.
    }
  , specifyEmptyDefaultData_Datagram_InspcDataExchangeAccess_Inspc //specifyEmptyDefaultData
  , specifyLengthElementHead_Datagram_InspcDataExchangeAccess_Inspc //specifyLengthElementHead
  , specifyLengthElement_Datagram_InspcDataExchangeAccess_Inspc //specifyLengthElement
  , specifyLengthCurrentChildElement_ByteDataAccessJc_F //specifyLengthCurrentChildElement
  , assignData_iYi_ByteDataAccessJc_F //assignData_iYi
  , assignData_iYii_ByteDataAccessJc_F //assignData_iYii
  , assignDataToFixChilds_ByteDataAccessJc_F //assignDataToFixChilds
  , notifyAddChild_ByteDataAccessJc_F //notifyAddChild
  , getString_ByteDataAccessJc_F //getString
  , setString_ByteDataAccessJc_F //setString
  , setBigEndian_ByteDataAccessJc_F //setBigEndian
  , getUint16_iii_ByteDataAccessJc_F //getUint16_iii
  , getUint8_iii_ByteDataAccessJc_F //getUint8_iii
  , getFloat_iii_ByteDataAccessJc_F //getFloat_iii
  , { { sign_Mtbl_ObjectJc//J2C: Head of methodtable.
      , (struct Size_Mtbl_t*)((5 +2) * sizeof(void*)) //size. NOTE: all elements are standard-pointer-types.
      }
    , clone_ObjectJc_F //clone
    , equals_ObjectJc_F //equals
    , finalize_ByteDataAccessJc_F //finalize
    , hashCode_ObjectJc_F //hashCode
    , toString_ObjectJc_F //toString
    }
  }
}, { signEnd_Mtbl_ObjectJc, null } }; //Mtbl


 extern struct ClassJc_t const reflection_ByteDataAccessJc_s;
 static struct superClasses_Datagram_InspcDataExchangeAccess_Inspc_s_t
 { ObjectArrayJc head;
   ClassOffset_idxMtblJc data[1];
 }superclasses_Datagram_InspcDataExchangeAccess_Inspc_s =
 { CONST_ObjectArrayJc(ClassOffset_idxMtblJc, 1, OBJTYPE_ClassOffset_idxMtblJc, null, null)
 , { {&reflection_ByteDataAccessJc_s, OFFSET_Mtbl(Mtbl_Datagram_InspcDataExchangeAccess_Inspc, ByteDataAccessJc) }
   }
 };

const ClassJc reflection_Datagram_InspcDataExchangeAccess_Inspc_s = 
{ CONST_ObjectJc(OBJTYPE_ClassJc + sizeof(ClassJc), &reflection_ObjectJc, &reflection_ClassJc) 
, "Datagram_InspcData_s_Inspc_s"
,  0 //position of ObjectJc
, sizeof(Datagram_InspcDataExchangeAccess_Inspc_s)
, null //attributes and associations
, null //method
, (ClassOffset_idxMtblJcARRAY*)&superclasses_Datagram_InspcDataExchangeAccess_Inspc_s //superclass
, null //interfaces
, 0    //modifiers
, &mtblDatagram_InspcDataExchangeAccess_Inspc.mtbl.head
};

/**This is the header of an information entry.
* An information entry contains this header and may be some childs.
* The childs may be simple integer or String childs getting and setting
* with the methodes to add
* {@link ByteDataAccess#addChildInteger(int, long)} or {@link ByteDataAccess#addChildString(String)}.
* and the methods to get
* {@link ByteDataAccess#getChildInteger(int)} or {@link ByteDataAccess#getChildString(int)}.
* The childs may be described by a named-here class, forex {@link SetValue}
* <br><br>
* The structure of an information entry may be described with XML, where the XML is only
* a medium to show the structures, for example:
* <pre>
* <Info bytes="16" order="345"><StringValue length="7">Example</StringValue></Info>
* </pre>
* In this case 8 Bytes are added after the head. The length stored in the head is 16.
* The <StringValue...> consists of a length byte, following by ASCII-character.
*/


const char sign_Mtbl_Info_InspcDataExchangeAccess_Inspc[] = "Info_InspcDataExchangeAccess_Inspc"; //to mark method tables of all implementations

typedef struct MtblDef_Info_InspcDataExchangeAccess_Inspc_t { Mtbl_Info_InspcDataExchangeAccess_Inspc mtbl; MtblHeadJc end; } MtblDef_Info_InspcDataExchangeAccess_Inspc;
 extern MtblDef_Info_InspcDataExchangeAccess_Inspc const mtblInfo_InspcDataExchangeAccess_Inspc;

/*Constructor *//**J2C: autogenerated as default constructor. */
struct Info_InspcDataExchangeAccess_Inspc_t* ctorO_Info_InspcDataExchangeAccess_Inspc(ObjectJc* othis, ThCxt* _thCxt)
{ Info_InspcDataExchangeAccess_Inspc_s* ythis = (Info_InspcDataExchangeAccess_Inspc_s*)othis;  //upcasting to the real class.
  STACKTRC_TENTRY("ctorO_Info_InspcDataExchangeAccess_Inspc");
  checkConsistence_ObjectJc(othis, sizeof(Info_InspcDataExchangeAccess_Inspc_s), null, _thCxt);  
  //J2C:super Constructor
  ctorO_ByteDataAccessJc(/*static*/othis, _thCxt);
  setReflection_ObjectJc(othis, &reflection_Info_InspcDataExchangeAccess_Inspc_s, sizeof(Info_InspcDataExchangeAccess_Inspc_s));  
  //j2c: Initialize all class variables:
  {
  }/*J2C:No body for constructor*/

  STACKTRC_LEAVE;
  return ythis;
}


void specifyEmptyDefaultData_Info_InspcDataExchangeAccess_Inspc(ByteDataAccessJc_s* ithis, ThCxt* _thCxt)
{ Info_InspcDataExchangeAccess_Inspc_s* ythis = (Info_InspcDataExchangeAccess_Inspc_s*)ithis;
  
  STACKTRC_TENTRY("specifyEmptyDefaultData_Info_InspcDataExchangeAccess_Inspc");
  
  { 
    
    
  }
  STACKTRC_LEAVE;
}

int32 specifyLengthElement_Info_InspcDataExchangeAccess_Inspc(ByteDataAccessJc_s* ithis, ThCxt* _thCxt)
{ Info_InspcDataExchangeAccess_Inspc_s* ythis = (Info_InspcDataExchangeAccess_Inspc_s*)ithis;
  
  STACKTRC_TENTRY("specifyLengthElement_Info_InspcDataExchangeAccess_Inspc");
  
  { 
    
    { STACKTRC_LEAVE;
      return 0;
    }
  }
  STACKTRC_LEAVE;
}

int32 specifyLengthElementHead_Info_InspcDataExchangeAccess_Inspc(ByteDataAccessJc_s* ithis, ThCxt* _thCxt)
{ Info_InspcDataExchangeAccess_Inspc_s* ythis = (Info_InspcDataExchangeAccess_Inspc_s*)ithis;
  
  STACKTRC_TENTRY("specifyLengthElementHead_Info_InspcDataExchangeAccess_Inspc");
  
  { 
    
    { STACKTRC_LEAVE;
      return sizeofHead_Info_InspcDataExchangeAccess_Inspc;
    }
  }
  STACKTRC_LEAVE;
}

void setInfoHead_Info_InspcDataExchangeAccess_Inspc(Info_InspcDataExchangeAccess_Inspc_s* ythis, int32 length, int32 cmd, int32 order, ThCxt* _thCxt)
{ 
  STACKTRC_TENTRY("setInfoHead_Info_InspcDataExchangeAccess_Inspc");
  
  { 
    
    setInt16_ii_ByteDataAccessJc(& ((* (ythis)).base.super), 0, length, _thCxt);
    setInt16_ii_ByteDataAccessJc(& ((* (ythis)).base.super), 2, cmd, _thCxt);
    setInt32_ii_ByteDataAccessJc(& ((* (ythis)).base.super), 4, order, _thCxt);
  }
  STACKTRC_LEAVE;
}

void setLength_Info_InspcDataExchangeAccess_Inspc(Info_InspcDataExchangeAccess_Inspc_s* ythis, int32 length, ThCxt* _thCxt)
{ 
  STACKTRC_TENTRY("setLength_Info_InspcDataExchangeAccess_Inspc");
  
  { 
    
    setInt16_ii_ByteDataAccessJc(& ((* (ythis)).base.super), 0, length, _thCxt);
  }
  STACKTRC_LEAVE;
}

int32 getCmd_Info_InspcDataExchangeAccess_Inspc(Info_InspcDataExchangeAccess_Inspc_s* ythis, ThCxt* _thCxt)
{ 
  STACKTRC_TENTRY("getCmd_Info_InspcDataExchangeAccess_Inspc");
  
  { 
    
    { STACKTRC_LEAVE;
      return getInt16_i_ByteDataAccessJc(& ((* (ythis)).base.super), 2, _thCxt);
    }
  }
  STACKTRC_LEAVE;
}

int32 getLenInfo_Info_InspcDataExchangeAccess_Inspc(Info_InspcDataExchangeAccess_Inspc_s* ythis, ThCxt* _thCxt)
{ 
  STACKTRC_TENTRY("getLenInfo_Info_InspcDataExchangeAccess_Inspc");
  
  { 
    
    { STACKTRC_LEAVE;
      return getInt16_i_ByteDataAccessJc(& ((* (ythis)).base.super), 0, _thCxt);
    }
  }
  STACKTRC_LEAVE;
}

int32 getOrder_Info_InspcDataExchangeAccess_Inspc(Info_InspcDataExchangeAccess_Inspc_s* ythis, ThCxt* _thCxt)
{ 
  STACKTRC_TENTRY("getOrder_Info_InspcDataExchangeAccess_Inspc");
  
  { 
    
    { STACKTRC_LEAVE;
      return getInt32_i_ByteDataAccessJc(& ((* (ythis)).base.super), 4, _thCxt);
    }
  }
  STACKTRC_LEAVE;
}



/**J2C: Reflections and Method-table *************************************************/
const MtblDef_Info_InspcDataExchangeAccess_Inspc mtblInfo_InspcDataExchangeAccess_Inspc = {
{ { sign_Mtbl_Info_InspcDataExchangeAccess_Inspc//J2C: Head of methodtable.
  , (struct Size_Mtbl_t*)((0 +2) * sizeof(void*)) //size. NOTE: all elements are standard-pointer-types.
  }
, { { sign_Mtbl_ByteDataAccessJc//J2C: Head of methodtable.
    , (struct Size_Mtbl_t*)((14 +2) * sizeof(void*)) //size. NOTE: all elements are standard-pointer-types.
    }
  , specifyEmptyDefaultData_Info_InspcDataExchangeAccess_Inspc //specifyEmptyDefaultData
  , specifyLengthElementHead_Info_InspcDataExchangeAccess_Inspc //specifyLengthElementHead
  , specifyLengthElement_Info_InspcDataExchangeAccess_Inspc //specifyLengthElement
  , specifyLengthCurrentChildElement_ByteDataAccessJc_F //specifyLengthCurrentChildElement
  , assignData_iYi_ByteDataAccessJc_F //assignData_iYi
  , assignData_iYii_ByteDataAccessJc_F //assignData_iYii
  , assignDataToFixChilds_ByteDataAccessJc_F //assignDataToFixChilds
  , notifyAddChild_ByteDataAccessJc_F //notifyAddChild
  , getString_ByteDataAccessJc_F //getString
  , setString_ByteDataAccessJc_F //setString
  , setBigEndian_ByteDataAccessJc_F //setBigEndian
  , getUint16_iii_ByteDataAccessJc_F //getUint16_iii
  , getUint8_iii_ByteDataAccessJc_F //getUint8_iii
  , getFloat_iii_ByteDataAccessJc_F //getFloat_iii
  , { { sign_Mtbl_ObjectJc//J2C: Head of methodtable.
      , (struct Size_Mtbl_t*)((5 +2) * sizeof(void*)) //size. NOTE: all elements are standard-pointer-types.
      }
    , clone_ObjectJc_F //clone
    , equals_ObjectJc_F //equals
    , finalize_ByteDataAccessJc_F //finalize
    , hashCode_ObjectJc_F //hashCode
    , toString_ObjectJc_F //toString
    }
  }
}, { signEnd_Mtbl_ObjectJc, null } }; //Mtbl


 extern struct ClassJc_t const reflection_ByteDataAccessJc_s;
 static struct superClasses_Info_InspcDataExchangeAccess_Inspc_s_t
 { ObjectArrayJc head;
   ClassOffset_idxMtblJc data[1];
 }superclasses_Info_InspcDataExchangeAccess_Inspc_s =
 { CONST_ObjectArrayJc(ClassOffset_idxMtblJc, 1, OBJTYPE_ClassOffset_idxMtblJc, null, null)
 , { {&reflection_ByteDataAccessJc_s, OFFSET_Mtbl(Mtbl_Info_InspcDataExchangeAccess_Inspc, ByteDataAccessJc) }
   }
 };

const ClassJc reflection_Info_InspcDataExchangeAccess_Inspc_s = 
{ CONST_ObjectJc(OBJTYPE_ClassJc + sizeof(ClassJc), &reflection_ObjectJc, &reflection_ClassJc) 
, "Info_InspcDataExch_s_Inspc_s"
,  0 //position of ObjectJc
, sizeof(Info_InspcDataExchangeAccess_Inspc_s)
, null //attributes and associations
, null //method
, (ClassOffset_idxMtblJcARRAY*)&superclasses_Info_InspcDataExchangeAccess_Inspc_s //superclass
, null //interfaces
, 0    //modifiers
, &mtblInfo_InspcDataExchangeAccess_Inspc.mtbl.head
};


const char sign_Mtbl_SetValue_InspcDataExchangeAccess_Inspc[] = "SetValue_InspcDataExchangeAccess_Inspc"; //to mark method tables of all implementations

typedef struct MtblDef_SetValue_InspcDataExchangeAccess_Inspc_t { Mtbl_SetValue_InspcDataExchangeAccess_Inspc mtbl; MtblHeadJc end; } MtblDef_SetValue_InspcDataExchangeAccess_Inspc;
 extern MtblDef_SetValue_InspcDataExchangeAccess_Inspc const mtblSetValue_InspcDataExchangeAccess_Inspc;

/*Constructor */
struct SetValue_InspcDataExchangeAccess_Inspc_t* ctorO_SetValue_InspcDataExchangeAccess_Inspc(ObjectJc* othis, ThCxt* _thCxt)
{ SetValue_InspcDataExchangeAccess_Inspc_s* ythis = (SetValue_InspcDataExchangeAccess_Inspc_s*)othis;  //upcasting to the real class.
  Mtbl_SetValue_InspcDataExchangeAccess_Inspc const* mtthis = &mtblSetValue_InspcDataExchangeAccess_Inspc.mtbl;
  STACKTRC_TENTRY("ctorO_SetValue_InspcDataExchangeAccess_Inspc");
  checkConsistence_ObjectJc(othis, sizeof(SetValue_InspcDataExchangeAccess_Inspc_s), null, _thCxt);  
  //J2C:super Constructor
  ctorO_ByteDataAccessJc(/*static*/othis, _thCxt);
  setReflection_ObjectJc(othis, &reflection_SetValue_InspcDataExchangeAccess_Inspc_s, sizeof(SetValue_InspcDataExchangeAccess_Inspc_s));  
  //j2c: Initialize all class variables:
  {
  }
  { 
    
    mtthis->ByteDataAccessJc.setBigEndian(& ((* (ythis)).base.super), true, _thCxt);
  }
  STACKTRC_LEAVE;
  return ythis;
}



/**Gets a password for access control.*/
int32 getPwdLo_SetValue_InspcDataExchangeAccess_Inspc(SetValue_InspcDataExchangeAccess_Inspc_s* ythis, ThCxt* _thCxt)
{ 
  STACKTRC_TENTRY("getPwdLo_SetValue_InspcDataExchangeAccess_Inspc");
  
  { 
    
    { STACKTRC_LEAVE;
      return (int32)_getLong_ByteDataAccessJc(& ((* (ythis)).base.super), 0, -4, _thCxt);
    }
  }
  STACKTRC_LEAVE;
}


/**Gets a password for access control.*/
int32 getPwdHi_SetValue_InspcDataExchangeAccess_Inspc(SetValue_InspcDataExchangeAccess_Inspc_s* ythis, ThCxt* _thCxt)
{ 
  STACKTRC_TENTRY("getPwdHi_SetValue_InspcDataExchangeAccess_Inspc");
  
  { 
    
    { STACKTRC_LEAVE;
      return (int32)_getLong_ByteDataAccessJc(& ((* (ythis)).base.super), 4, -4, _thCxt);
    }
  }
  STACKTRC_LEAVE;
}

void setPwdLo_SetValue_InspcDataExchangeAccess_Inspc(SetValue_InspcDataExchangeAccess_Inspc_s* ythis, int32 pwd, ThCxt* _thCxt)
{ 
  STACKTRC_TENTRY("setPwdLo_SetValue_InspcDataExchangeAccess_Inspc");
  
  { 
    
    _setLong_ByteDataAccessJc(& ((* (ythis)).base.super), 0, -4, pwd, _thCxt);
  }
  STACKTRC_LEAVE;
}

void setPwdHi_SetValue_InspcDataExchangeAccess_Inspc(SetValue_InspcDataExchangeAccess_Inspc_s* ythis, int32 pwd, ThCxt* _thCxt)
{ 
  STACKTRC_TENTRY("setPwdHi_SetValue_InspcDataExchangeAccess_Inspc");
  
  { 
    
    _setLong_ByteDataAccessJc(& ((* (ythis)).base.super), 4, -4, pwd, _thCxt);
  }
  STACKTRC_LEAVE;
}

int8 getByte_SetValue_InspcDataExchangeAccess_Inspc(SetValue_InspcDataExchangeAccess_Inspc_s* ythis, ThCxt* _thCxt)
{ 
  STACKTRC_TENTRY("getByte_SetValue_InspcDataExchangeAccess_Inspc");
  
  { 
    
    { STACKTRC_LEAVE;
      return (int8)_getLong_ByteDataAccessJc(& ((* (ythis)).base.super), 15, -1, _thCxt);
    }
  }
  STACKTRC_LEAVE;
}

int16 getShort_SetValue_InspcDataExchangeAccess_Inspc(SetValue_InspcDataExchangeAccess_Inspc_s* ythis, ThCxt* _thCxt)
{ 
  STACKTRC_TENTRY("getShort_SetValue_InspcDataExchangeAccess_Inspc");
  
  { 
    
    { STACKTRC_LEAVE;
      return (int16)_getLong_ByteDataAccessJc(& ((* (ythis)).base.super), 14, -2, _thCxt);
    }
  }
  STACKTRC_LEAVE;
}


/**A long value is provided in the bytes 8..15 in Big endian.*/
int32 getInt_SetValue_InspcDataExchangeAccess_Inspc(SetValue_InspcDataExchangeAccess_Inspc_s* ythis, ThCxt* _thCxt)
{ 
  STACKTRC_TENTRY("getInt_SetValue_InspcDataExchangeAccess_Inspc");
  
  { 
    
    { STACKTRC_LEAVE;
      return (int32)_getLong_ByteDataAccessJc(& ((* (ythis)).base.super), 12, -4, _thCxt);
    }
  }
  STACKTRC_LEAVE;
}


/**A long value is provided in the bytes 8..15 in Big endian.*/
int64 getLong_SetValue_InspcDataExchangeAccess_Inspc(SetValue_InspcDataExchangeAccess_Inspc_s* ythis, ThCxt* _thCxt)
{ 
  STACKTRC_TENTRY("getLong_SetValue_InspcDataExchangeAccess_Inspc");
  
  { 
    
    { STACKTRC_LEAVE;
      return _getLong_ByteDataAccessJc(& ((* (ythis)).base.super), 8, -8, _thCxt);
    }
  }
  STACKTRC_LEAVE;
}


/**A float value is provided in the bytes 8..11 in Big endian.*/
float getFloat_SetValue_InspcDataExchangeAccess_Inspc(SetValue_InspcDataExchangeAccess_Inspc_s* ythis, ThCxt* _thCxt)
{ 
  STACKTRC_TENTRY("getFloat_SetValue_InspcDataExchangeAccess_Inspc");
  
  { 
    
    { STACKTRC_LEAVE;
      return getFloat_i_ByteDataAccessJc(& ((* (ythis)).base.super), 8, _thCxt);
    }
  }
  STACKTRC_LEAVE;
}

double getDouble_SetValue_InspcDataExchangeAccess_Inspc(SetValue_InspcDataExchangeAccess_Inspc_s* ythis, ThCxt* _thCxt)
{ 
  STACKTRC_TENTRY("getDouble_SetValue_InspcDataExchangeAccess_Inspc");
  
  { 
    
    { STACKTRC_LEAVE;
      return getDouble_ByteDataAccessJc(& ((* (ythis)).base.super), 8, _thCxt);
    }
  }
  STACKTRC_LEAVE;
}

void specifyEmptyDefaultData_SetValue_InspcDataExchangeAccess_Inspc(ByteDataAccessJc_s* ithis, ThCxt* _thCxt)
{ SetValue_InspcDataExchangeAccess_Inspc_s* ythis = (SetValue_InspcDataExchangeAccess_Inspc_s*)ithis;
  
  STACKTRC_TENTRY("specifyEmptyDefaultData_SetValue_InspcDataExchangeAccess_Inspc");
  
  { 
    
    
  }
  STACKTRC_LEAVE;
}

int32 specifyLengthElement_SetValue_InspcDataExchangeAccess_Inspc(ByteDataAccessJc_s* ithis, ThCxt* _thCxt)
{ SetValue_InspcDataExchangeAccess_Inspc_s* ythis = (SetValue_InspcDataExchangeAccess_Inspc_s*)ithis;
  
  STACKTRC_TENTRY("specifyLengthElement_SetValue_InspcDataExchangeAccess_Inspc");
  
  { 
    
    { STACKTRC_LEAVE;
      return sizeofElement_SetValue_InspcDataExchangeAccess_Inspc;
    }
  }
  STACKTRC_LEAVE;
}

int32 specifyLengthElementHead_SetValue_InspcDataExchangeAccess_Inspc(ByteDataAccessJc_s* ithis, ThCxt* _thCxt)
{ SetValue_InspcDataExchangeAccess_Inspc_s* ythis = (SetValue_InspcDataExchangeAccess_Inspc_s*)ithis;
  
  STACKTRC_TENTRY("specifyLengthElementHead_SetValue_InspcDataExchangeAccess_Inspc");
  
  { 
    
    { STACKTRC_LEAVE;
      return sizeofElement_SetValue_InspcDataExchangeAccess_Inspc;
    }
  }
  STACKTRC_LEAVE;
}



/**J2C: Reflections and Method-table *************************************************/
const MtblDef_SetValue_InspcDataExchangeAccess_Inspc mtblSetValue_InspcDataExchangeAccess_Inspc = {
{ { sign_Mtbl_SetValue_InspcDataExchangeAccess_Inspc//J2C: Head of methodtable.
  , (struct Size_Mtbl_t*)((0 +2) * sizeof(void*)) //size. NOTE: all elements are standard-pointer-types.
  }
, { { sign_Mtbl_ByteDataAccessJc//J2C: Head of methodtable.
    , (struct Size_Mtbl_t*)((14 +2) * sizeof(void*)) //size. NOTE: all elements are standard-pointer-types.
    }
  , specifyEmptyDefaultData_SetValue_InspcDataExchangeAccess_Inspc //specifyEmptyDefaultData
  , specifyLengthElementHead_SetValue_InspcDataExchangeAccess_Inspc //specifyLengthElementHead
  , specifyLengthElement_SetValue_InspcDataExchangeAccess_Inspc //specifyLengthElement
  , specifyLengthCurrentChildElement_ByteDataAccessJc_F //specifyLengthCurrentChildElement
  , assignData_iYi_ByteDataAccessJc_F //assignData_iYi
  , assignData_iYii_ByteDataAccessJc_F //assignData_iYii
  , assignDataToFixChilds_ByteDataAccessJc_F //assignDataToFixChilds
  , notifyAddChild_ByteDataAccessJc_F //notifyAddChild
  , getString_ByteDataAccessJc_F //getString
  , setString_ByteDataAccessJc_F //setString
  , setBigEndian_ByteDataAccessJc_F //setBigEndian
  , getUint16_iii_ByteDataAccessJc_F //getUint16_iii
  , getUint8_iii_ByteDataAccessJc_F //getUint8_iii
  , getFloat_iii_ByteDataAccessJc_F //getFloat_iii
  , { { sign_Mtbl_ObjectJc//J2C: Head of methodtable.
      , (struct Size_Mtbl_t*)((5 +2) * sizeof(void*)) //size. NOTE: all elements are standard-pointer-types.
      }
    , clone_ObjectJc_F //clone
    , equals_ObjectJc_F //equals
    , finalize_ByteDataAccessJc_F //finalize
    , hashCode_ObjectJc_F //hashCode
    , toString_ObjectJc_F //toString
    }
  }
}, { signEnd_Mtbl_ObjectJc, null } }; //Mtbl


 extern struct ClassJc_t const reflection_ByteDataAccessJc_s;
 static struct superClasses_SetValue_InspcDataExchangeAccess_Inspc_s_t
 { ObjectArrayJc head;
   ClassOffset_idxMtblJc data[1];
 }superclasses_SetValue_InspcDataExchangeAccess_Inspc_s =
 { CONST_ObjectArrayJc(ClassOffset_idxMtblJc, 1, OBJTYPE_ClassOffset_idxMtblJc, null, null)
 , { {&reflection_ByteDataAccessJc_s, OFFSET_Mtbl(Mtbl_SetValue_InspcDataExchangeAccess_Inspc, ByteDataAccessJc) }
   }
 };

const ClassJc reflection_SetValue_InspcDataExchangeAccess_Inspc_s = 
{ CONST_ObjectJc(OBJTYPE_ClassJc + sizeof(ClassJc), &reflection_ObjectJc, &reflection_ClassJc) 
, "SetValue_InspcData_s_Inspc_s"
,  0 //position of ObjectJc
, sizeof(SetValue_InspcDataExchangeAccess_Inspc_s)
, null //attributes and associations
, null //method
, (ClassOffset_idxMtblJcARRAY*)&superclasses_SetValue_InspcDataExchangeAccess_Inspc_s //superclass
, null //interfaces
, 0    //modifiers
, &mtblSetValue_InspcDataExchangeAccess_Inspc.mtbl.head
};
