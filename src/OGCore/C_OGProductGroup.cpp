#include "StdAfx.h"
#include "C_OGProductGroup.h"
#include "OGCore/OGCoreType.h"

C_OGProductGroup::C_OGProductGroup( const OGTime& tmCreate )
:C_OGCoreObject(OGString(STR_CORETYPE_PRODUCTGROUP), tmCreate)
{
    OGString strVal = _T("");

    OGString strName = _T("group name");
    AddPropertyStr(strName, strVal);

    strName = _T("description");
    AddPropertyStr(strName, strVal);

    strName = _T("version");
    AddPropertyStr(strName, strVal);
}

C_OGProductGroup::~C_OGProductGroup(void)
{
}
