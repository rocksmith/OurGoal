#pragma once
#include "OGBaseType.h"
#include "OGExtType.h"

class C_OGCoreObject
{
public:
    C_OGCoreObject(const OGString& strType, const S_OGTime& tmCreate);
    virtual ~C_OGCoreObject(void);
    OGVoid SetLastModifyTime(const S_OGTime& tm);

    OGVoid GetCoreType(OGString& strType);
    OGVoid GetCreateTime(S_OGTime& tm);
    OGVoid GetLastModifyTime(S_OGTime& tm);

private:
    OGString m_strType;
    S_OGTime m_tmCreate;
    S_OGTime m_tmLastModified;
};

inline OGVoid C_OGCoreObject::SetLastModifyTime(const S_OGTime& tm)
{
    m_tmLastModified = tm;
}

inline OGVoid C_OGCoreObject::GetCoreType(OGString& strType)
{
    strType = m_strType;
}

inline OGVoid C_OGCoreObject::GetCreateTime(S_OGTime& tm)
{
    tm = m_tmCreate;
}

inline OGVoid C_OGCoreObject::GetLastModifyTime(S_OGTime& tm)
{
    tm = m_tmLastModified;
}