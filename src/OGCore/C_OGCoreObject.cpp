#include "StdAfx.h"
#include "C_OGCoreObject.h"

C_OGCoreObject::C_OGCoreObject(const OGString& strType, const S_OGTime& tmCreate )
{
    m_strType = strType;
    m_tmCreate = tmCreate;
}

C_OGCoreObject::~C_OGCoreObject(void)
{
}
