#include "StdAfx.h"
#include "C_OGUser.h"
#include "OGCore/OGCoreType.h"
C_OGUser::C_OGUser()
    :C_OGCoreObject(STR_CORETYPE_USER)
{
    AddPropertyStr(_T("Role"), _T(""));
    AddPropertyStr(_T("Name"), _T(""));
}

C_OGUser::~C_OGUser(void)
{
}
