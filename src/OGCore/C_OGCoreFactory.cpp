#include "StdAfx.h"
#include "C_OGUser.h"
#include "C_OGCoreFactory.h"

C_OGCoreFactory::C_OGCoreFactory(void)
{
}

C_OGCoreFactory::~C_OGCoreFactory(void)
{
}

C_OGCoreObject* C_OGCoreFactory::CreateObject( const OGString& strType )
{
    S_OGTime tmCreate;
    OGGetTime(tmCreate);
    if (OGStriCmp(strType.c_str(), "OGUser") == 0)
    {
        return new C_OGUser(tmCreate);
    } 
    else
    {
        return (C_OGCoreObject*)OG_NULL;
    }
}
