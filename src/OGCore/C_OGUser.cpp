#include "StdAfx.h"
#include "C_OGUser.h"

C_OGUser::C_OGUser(const S_OGTime& tmCreate)
    :C_OGCoreObject(OGString(_T("OGUser")), tmCreate)
{
}

C_OGUser::~C_OGUser(void)
{
}
