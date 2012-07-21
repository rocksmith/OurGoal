#include "StdAfx.h"
#include "C_OGProject.h"
#include "OGCore/OGCoreType.h"


C_OGProject::C_OGProject( const OGTime& tmCreate )
:C_OGCoreObject(OGString(STR_CORETYPE_PROJECT), tmCreate)
{
    OGString strVal = _T("");

    OGString strName = _T("project name");
    AddPropertyStr(strName, strVal);

    strName = _T("description");
    AddPropertyStr(strName, strVal);

}

C_OGProject::~C_OGProject(void)
{
}
