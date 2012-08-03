#include "StdAfx.h"
#include "C_OGTaskGroup.h"
#include "OGCore/OGCoreType.h"

C_OGTaskGroup::C_OGTaskGroup()
:C_OGCoreObject(STR_CORETYPE_TASKGROUP)
{
    AddPropertyStr(_T("Name"), _T(""));
    AddPropertyStr(_T("Description"), _T(""));

}

C_OGTaskGroup::~C_OGTaskGroup(void)
{
}
