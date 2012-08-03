#include "StdAfx.h"
#include "C_OGProductGroup.h"
#include "OGCore/OGCoreType.h"

C_OGProductGroup::C_OGProductGroup()
:C_OGCoreObject(STR_CORETYPE_PRODUCTGROUP)
{
    AddPropertyStr(_T("Name"), _T(""));
    AddPropertyStr(_T("Description"), _T(""));
    AddPropertyStr(_T("Version"), _T(""));
}

C_OGProductGroup::~C_OGProductGroup(void)
{
}
