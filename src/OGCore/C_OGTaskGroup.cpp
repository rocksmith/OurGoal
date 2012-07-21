#include "StdAfx.h"
#include "C_OGTaskGroup.h"
#include "OGCore/OGCoreType.h"

C_OGTaskGroup::C_OGTaskGroup( const OGTime& tmCreate )
:C_OGCoreObject(OGString(STR_CORETYPE_TASKGROUP), tmCreate)
{
    OGString strVal = _T("");

    OGString strName = _T("start time");
    AddPropertyTime(strName, tmCreate);

    strName = _T("end time");
    AddPropertyTime(strName, tmCreate);

    strName = _T("group name");
    AddPropertyStr(strName, strVal);

    strName = _T("description");
    AddPropertyStr(strName, strVal);


}

C_OGTaskGroup::~C_OGTaskGroup(void)
{
}
