#include "StdAfx.h"
#include "C_OGProjectGroup.h"
#include "OGCore/OGCoreType.h"

C_OGProjectGroup::C_OGProjectGroup()
:C_OGCoreObject(STR_CORETYPE_PROJECTGROUP)
{
    AddPropertyStr(_T("Name"), _T(""));
    AddPropertyStr(_T("Description"), _T(""));
}

C_OGProjectGroup::~C_OGProjectGroup(void)
{
}
