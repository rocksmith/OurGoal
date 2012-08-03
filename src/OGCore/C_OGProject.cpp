#include "StdAfx.h"
#include "C_OGProject.h"
#include "OGCore/OGCoreType.h"


C_OGProject::C_OGProject()
:C_OGCoreObject(STR_CORETYPE_PROJECT)
{
    AddPropertyStr(_T("Name"), _T(""));
    AddPropertyStr(_T("Description"), _T(""));

}

C_OGProject::~C_OGProject(void)
{
}
