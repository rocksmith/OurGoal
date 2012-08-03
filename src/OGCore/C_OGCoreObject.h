#pragma once
#include "OGBaseType.h"
#include "OGExtType.h"
#include <vector>

class C_OGCoreObject
{
public:
    C_OGCoreObject(OGLPCSTR szType);
    virtual ~C_OGCoreObject(void);

    OGVoid GetCoreType(OGString& strType);
    OGVoid GetCreateTime(OGTime& tm);
    OGVoid GetLastModifyTime(OGTime& tm);

protected:
    //Add property
    OGBool AddPropertyInt(OGLPCSTR szName, OGInt32 iDefault);
    OGBool AddPropertyStr(OGLPCSTR szName, OGLPCSTR szDefault);
    OGBool AddPropertyTime(OGLPCSTR szName, OGTime tmDefault);
    OGBool AddPropertyFloat(OGLPCSTR szName, OGFloat fDefault);
    //SetProperty
    OGBool SetPropertyInt(OGLPCSTR szName, OGInt32 iVal);
    OGBool SetPropertyStr(OGLPCSTR szName, OGLPCSTR szVal);
    OGBool SetPropertyTime(OGLPCSTR szName, OGTime tmVal);
    OGBool SetPropertyFloat(OGLPCSTR szName, OGFloat fVal);
    //GetProperty
    OGBool GetPropertyInt(OGLPCSTR szName, OGInt32& iVal);
    OGBool GetPropertyStr(OGLPCSTR szName, OGString& strVal);
    OGBool GetPropertyTime(OGLPCSTR szName, OGTime& tmVal);
    OGBool GetPropertyFloat(OGLPCSTR szName, OGFloat& fVal);

private:
    OGString m_strType;
    //property related
    struct SIntProp{
        OGString strName;
        OGInt32  iVal;
        OGInt32  iDefVal;
    };
    struct SStrProp{
        OGString strName;
        OGString strVal;
        OGString strDefVal;
    };
    struct STmProp{
        OGString strName;
        OGTime   tmVal;
        OGTime   tmDefVal;
    };
    struct SFloatProp{
        OGString strName;
        OGFloat  fVal;
        OGFloat  fDefVal;
    };
    std::vector<SIntProp*>   m_ProplistInt;
    std::vector<SStrProp*>   m_ProplistStr;
    std::vector<STmProp*>    m_ProplistTime;
    std::vector<SFloatProp*> m_ProplistFloat;
};


inline OGVoid C_OGCoreObject::GetCoreType(OGString& strType)
{
    strType = m_strType;
}
