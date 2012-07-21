#include "StdAfx.h"
#include "C_OGProjectGroup.h"
#include "OGCore/OGCoreType.h"

C_OGProjectGroup::C_OGProjectGroup( const OGTime& tmCreate )
:C_OGCoreObject(OGString(STR_CORETYPE_PROJECTGROUP), tmCreate)
{
    OGString strVal = _T("");

    OGString strName = _T("group name");
    AddPropertyStr(strName, strVal);

    strName = _T("description");
    AddPropertyStr(strName, strVal);
}

C_OGProjectGroup::~C_OGProjectGroup(void)
{
}
