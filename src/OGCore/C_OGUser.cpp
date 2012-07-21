#include "StdAfx.h"
#include "C_OGUser.h"
#include "OGCore/OGCoreType.h"
C_OGUser::C_OGUser(const OGTime& tmCreate)
    :C_OGCoreObject(OGString(STR_CORETYPE_USER), tmCreate)
{
    OGString strName = _T("role");
    OGString strVal = _T("default user");
    AddPropertyStr(strName, strVal);
}

C_OGUser::~C_OGUser(void)
{
}
