#include "StdAfx.h"
#include "C_OGTask.h"
#include "OGCore/OGCoreType.h"

C_OGTask::C_OGTask( const OGTime& tmCreate )
:C_OGCoreObject(OGString(STR_CORETYPE_TASK), tmCreate)
{
    OGString strVal = _T("");

    OGString strName = _T("start time");
    AddPropertyTime(strName, tmCreate);

    strName = _T("end time");
    AddPropertyTime(strName, tmCreate);

    strName = _T("title");
    AddPropertyStr(strName, strVal);

    strName = _T("description");
    AddPropertyStr(strName, strVal);

}

C_OGTask::~C_OGTask(void)
{
}
