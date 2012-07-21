#pragma once
#include "OGBaseType.h"
#include "OGExtType.h"
#include <vector>

class C_OGCoreObject
{
public:
    C_OGCoreObject(const OGString& strType, const OGTime& tmCreate);
    virtual ~C_OGCoreObject(void);
    OGVoid SetLastModifyTime(const OGTime& tm);

    OGVoid GetCoreType(OGString& strType);
    OGVoid GetCreateTime(OGTime& tm);
    OGVoid GetLastModifyTime(OGTime& tm);

protected:
    //Add property
    OGBool AddPropertyInt(const OGString& strName, const OGInt32& iDefault);
    OGBool AddPropertyStr(const OGString& strName, const OGString& strDefault);
    OGBool AddPropertyTime(const OGString& strName, const OGTime& tmDefault);
    OGBool AddPropertyFloat(const OGString& strName, const OGFloat& fDefault);
    //SetProperty
    OGBool SetPropertyInt(const OGString& strName, const OGInt32& iVal);
    OGBool SetPropertyStr(const OGString& strName, const OGString& strVal);
    OGBool SetPropertyTime(const OGString& strName, const OGTime& tmVal);
    OGBool SetPropertyFloat(const OGString& strName, const OGFloat& fVal);
    //GetProperty
    OGBool GetPropertyInt(const OGString& strName, OGInt32& iVal);
    OGBool GetPropertyStr(const OGString& strName, OGString& strVal);
    OGBool GetPropertyTime(const OGString& strName, OGTime& tmVal);
    OGBool GetPropertyFloat(const OGString& strName, OGFloat& fVal);

private:
    OGString m_strType;
    OGTime m_tmCreate;
    OGTime m_tmLastModified;
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

inline OGVoid C_OGCoreObject::SetLastModifyTime(const OGTime& tm)
{
    m_tmLastModified = tm;
}

inline OGVoid C_OGCoreObject::GetCoreType(OGString& strType)
{
    strType = m_strType;
}

inline OGVoid C_OGCoreObject::GetCreateTime(OGTime& tm)
{
    tm = m_tmCreate;
}

inline OGVoid C_OGCoreObject::GetLastModifyTime(OGTime& tm)
{
    tm = m_tmLastModified;
}