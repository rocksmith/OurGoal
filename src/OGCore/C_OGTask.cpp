#include "StdAfx.h"
#include "C_OGTask.h"
#include "OGCore/OGCoreType.h"

C_OGTask::C_OGTask()
:C_OGCoreObject(STR_CORETYPE_TASK)
{
    OGTime tmCreate;
    OGGetTime(tmCreate);
    AddPropertyTime(_T("Start"), tmCreate);
    AddPropertyTime(_T("End"), tmCreate);
    AddPropertyStr(_T("Title"), _T(""));
    AddPropertyStr(_T("Description"), _T(""));

}

C_OGTask::~C_OGTask(void)
{
}
